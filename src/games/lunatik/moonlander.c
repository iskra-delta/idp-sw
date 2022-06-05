/*
 * lunatik.c
 *
 * 
 * 
 * TODO: 
 *  - normalize sprite sizes to make the game resolution independent
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 20.02.2022   tstih
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <string.h>

#ifdef __SDCC
#include <partner.h>
#endif

#include <gpx.h>


/* ----- vector shapes ----------------------------------------------------- */
static uint8_t _la1[] = {               /* large asteroid 1 */
	22, 2,  46, 4, 
	61,39,  38,55, 
	06,25,  7,10
};
static const int _la1_len=sizeof(_la1);

static uint8_t _la2[] = {               /* large asteroid 2 */
	42,00,   61,35,   
    43,60,   01,44,    
    8,34,    21, 8
};
static const int _la2_len=sizeof(_la2);

static uint8_t _ma1[] = {               /* medium asteroid 1 */
	24, 1,  33,11,   
	32,19,  38,27,   	
    20,38,  1,20
};
static const int _ma1_len=sizeof(_ma1);

static uint8_t _ma2[] = {               /* medium asteroid 2 */
	13, 1,  29, 2,
	38, 8,  24,33,    
    8,31,   3,11
};
static const int _ma2_len=sizeof(_ma2);

static uint8_t _sa1[] = {               /* small asteroid 1 */
	 8, 1,  18,12,
	21,16,  12,24,    
     0,11,  5, 3
};
static const int _sa1_len=sizeof(_sa1);

static uint8_t _sa2[] = {               /* small asteroid 2 */
	 9, 1,   22,11,
	20,18,   12,23,   
	 0,17,   5, 3
};
static const int _sa2_len=sizeof(_sa2);





/* ----- game objects  ----------------------------------------------------- */
#define MARGIN_FRAC_H   32              /* (screen) margin is 1/8 of height */
#define INIT_ASTEROIDS   4              /* number of initial (large) asteroids */
#define MAX_SPEED        4              /* 5 - 10 */
#define LARGE_ASIZE     60              /* large ast size, divide by 2 for smaller */


typedef struct sprite_s {
    uint8_t sprite_len;
    uint8_t *sprite_bin;
} sprite_t;

/* object types */
#define OT_ASTEROID     1
#define OT_BULLET       2
#define OT_SHIP         3
typedef struct object {                 
    struct object_s * next;             /* next linked list member */
    uint8_t otype;                      /* OT_ASTEROID, OT_BULLET or OT_SHIP */
    rect_t rect;                        /* object rectangle */
    point_t vector;                     /* object dx and dy */
    sprite_t *sprite;                   /* can be NULL (bullet) */
} object_t;


/* the game structure */
typedef struct game_s {
    gpx_t *g;
    rect_t * game_rect;
    object_t * objects;
    char lives;
    int score;
} game_t;

static game_t _game;

/* ----- drawing functions ------------------------------------------------- */
void _draw_sprite(gpx_t *g, int x, int y, uint8_t sprite_len, uint8_t *sprite) {
    /* draw shape lines */
    int i;
    for(i=3;i<sprite_len;i+=2) 
        gpx_draw_line(
            g,
            x+sprite[i-3],
            y+sprite[i-2],
            x+sprite[i-1],
            y+sprite[i]);
    /* close shape */
    gpx_draw_line(
        g,
        x+sprite[sprite_len-2],
        y+sprite[sprite_len-1],
        x+sprite[0],
        y+sprite[1]);
}

extern void _insert_game_object(object_t **first, object_t *object);
void draw_object(
    game_t *game, 
    object_t *object,
    object_t **to_delete) {
    /* first draw it once, and store to objects */
    _draw_sprite(
        game->g,
        object->rect.x0,
        object->rect.y0,
        object->sprite->sprite_len,
        object->sprite->sprite_bin);
    /* track sprites? */
    object_t *o=malloc(sizeof(object_t));
    memcpy(o,object,sizeof(object_t));
    _insert_game_object(to_delete,o);
    
    /* if outside of game rect, fake coordinates 
       and draw again to give impression of warping 
       space and time, hah! */
    int wrapx, wrapy; wrapx=wrapy=-1;
    int w=object->rect.x1-object->rect.x0, h=object->rect.y1-object->rect.y0;
    /* test horizontal overflow... */
    if ( object->rect.x0 > game->game_rect->x1 )
        wrapx=game->game_rect->x0;
    else if ( object->rect.x1 > game->game_rect->x1 )
        wrapx=game->game_rect->x0 - w + (object->rect.x1 - game->game_rect->x1);
    /* ...and vertical overflow */
    if ( object->rect.y0 > game->game_rect->y1 )
        wrapy=game->game_rect->y0;
    else if ( object->rect.y1 > game->game_rect->y1 )
        wrapy=game->game_rect->y0 - h + (object->rect.y1 - game->game_rect->y1);
    /* overflow? */
    if (wrapx==-1 && wrapy==-1) return;
    if (wrapx==-1) wrapx=object->rect.x0;
    if (wrapy==-1) wrapy=object->rect.y0;
    /* draw wrapped sprite */
    _draw_sprite(
        game->g,
        wrapx,
        wrapy,
        object->sprite->sprite_len,
        object->sprite->sprite_bin);
    /* track sprites? */
    o=malloc(sizeof(object_t));
    memcpy(o,object,sizeof(object_t));
    /* change coords... */
    o->rect.x0=wrapx;
    o->rect.y0=wrapy;
    _insert_game_object(to_delete,o);
}

void clear_objects(
    game_t * game,
    object_t *to_delete
) {
    object_t *next;

    /* redraw everything, XOR will do the rest */
    while (to_delete!=NULL) {
        _draw_sprite(
            game->g,
            to_delete->rect.x0,
            to_delete->rect.y0,
            to_delete->sprite->sprite_len,
            to_delete->sprite->sprite_bin);
        next=(object_t*)(to_delete->next);
        free(to_delete);
        to_delete=next;
    }
}


/* ----- game functions ---------------------------------------------------- */

/* insert game object to list */
void _insert_game_object(object_t **first, object_t *object) {
    object->next=(struct object_s*)*first;
    *first=object;
}


void _delete_object_list(object_t **list) {
    object_t *first=*list, *next;
    while(first!=NULL) {
        next=(object_t*)(first->next);
        free(first);
        first=next;
    }
    /* finally clear the list */
    *list=NULL;
}

object_t * _create_asteroid(
    game_t *game,
    int sprite_len, 
    uint8_t *sprite) {

    /* allocate memory */
    object_t *a=malloc(sizeof(object_t));
    /* store selected sprite */
    a->sprite=malloc(sizeof(sprite_t));
    a->sprite->sprite_bin=sprite; a->sprite->sprite_len=sprite_len;
    /* select position away from game rectangle... */
    int signx=rand()%2?-1:+1,
        signy=rand()%2?-1:+1,
        signvx=rand()%2?-1:+1,
        signvy=rand()%2?-1:+1;
    int half_width=(game->game_rect->x1-game->game_rect->x0)/2,
        half_height=(game->game_rect->y1-game->game_rect->y0)/2;
    int xcenter=game->game_rect->x0 + half_width,
        ycenter=game->game_rect->y0 + half_height;
    a->next=NULL;                /* for now */
    a->rect.x0=xcenter + signx * rand()%half_width;
    a->rect.y0=ycenter + signy * rand()%half_height;
    a->rect.x1 = a->rect.x0 + LARGE_ASIZE;
    a->rect.y1 = a->rect.y0 + LARGE_ASIZE;
    a->vector.x=signvx*rand()%MAX_SPEED+signvx*MAX_SPEED;
    a->vector.y=signvy*rand()%MAX_SPEED+signvy*MAX_SPEED;
    /* now insert into the linked list */
    _insert_game_object(&(game->objects), a);
    return a;
}


game_t *init_game(gpx_t *g) {
    /* get the resolution */
    gpx_resolution_t res;
    gpx_get_disp_page_resolution(g, &res);
    /* initialize game rectangle */
    int margin=res.height/MARGIN_FRAC_H;
    _game.game_rect = malloc(sizeof(rect_t));
    _game.game_rect->x0=_game.game_rect->y0=margin;
    _game.game_rect->x1=res.width - margin;
    _game.game_rect->y1=res.height - margin;
    /* you've got three lives, use them well */
    _game.lives=100; /* TODO: 3 */
    _game.score=0;
    /* set ship location, make it stand still! */
    object_t *ship=malloc(sizeof(object_t));
    ship->rect.x0=res.width/2;
    ship->rect.y0=res.height/2;
    ship->vector.x=0; ship->vector.y=0;
    ship->sprite=NULL;
    ship->next=NULL; /* always NULL */
    _game.objects=ship; /* first object... */

    /* generate large asteroids */
    for (int i=0;i<INIT_ASTEROIDS;i++) {
        /* generate random offset form center... */
        int sprite_index=rand()%2;
        _create_asteroid(
            &_game,
            sprite_index ? _la1_len : _la2_len,
            sprite_index ? _la1 : _la2
        );
    }
    /* store gpx_t */
    _game.g=g;
    return &_game;
}


void exit_game(game_t *game) {
    /* delete direct game objects */
    free(game->game_rect);
    /* delete game lists */
    _delete_object_list(&(game->objects));
}


void move_objects(game_t *game) {
        object_t *o=game->objects;
        while (o!=NULL) {
            /* draw all sprites */
            if (o->sprite!=NULL) {
                /* move coordinates for vector */
                o->rect.x0=o->rect.x0+o->vector.x;
                o->rect.y0=o->rect.y0+o->vector.y;

                if (o->rect.x0 > game->game_rect->x1) 
                    o->rect.x0 = game->game_rect->x0;
                
                if (o->rect.y0 > game->game_rect->y1) 
                    o->rect.y0 = game->game_rect->y0;
                
                if (o->rect.x0 < game->game_rect->x0) 
                    o->rect.x0 = game->game_rect->x1;

                if (o->rect.y0 < game->game_rect->y0) 
                    o->rect.y0=game->game_rect->y1;

                /* update rect size */
                o->rect.x1=o->rect.x0+60;
                o->rect.y1=o->rect.y0+60;
            }

            /* next */
            o=(object_t *)(o->next);
        }
}

/* ----- main loop --------------------------------------------------------- */
int main() {

    /* generate asteroids */
    srand(time(NULL));

    /* enter gpx mode */
    gpx_t *g=gpx_init();
    if (g==NULL) {
        printf("Can't enter graphics mode.\n");
        return 1;
    }

    #ifdef __SDCC
    /* clear screen */
    setcursortype(NOCURSOR);
    clrscr();
    /* clear both graphics screens */
    gpx_set_page(g,1,PG_DISPLAY|PG_WRITE);
    gpx_cls(g);
    gpx_set_page(g,0,PG_DISPLAY|PG_WRITE);
    gpx_cls(g);
    #endif

    /* initalize the game */
    game_t *game = init_game(g);

    /* set clipping rectangle and draw it */
    gpx_set_clip_area(g, game->game_rect);

    /* blit mode will be XOR to delete */
    gpx_set_blit(g,BLT_XOR);

    /* page vars */
    object_t *_page_objects[2] = { NULL, NULL };
    int _page=1, _prev_page=-1;
    gpx_set_page(g,0,PG_DISPLAY); /* display page is 0! */

    bool exit=false;

    while (!exit) {

        /* draw all objects to write page.... */
        gpx_set_page(g,_page,PG_WRITE); 
        object_t *o=game->objects;
        while (o!=NULL) {

            /* draw all sprites */
            if (o->sprite!=NULL)
                draw_object(game,o,&(_page_objects[_page])); 

            /* next */
            o=(object_t*)(o->next);
        }

        /* switch display page */
        gpx_set_page(g,_page,PG_DISPLAY);

        /* delete previous page objects */
        if (_prev_page >= 0 ) {
            /* ... on previous page */
            gpx_set_page(g, _prev_page, PG_WRITE);
            clear_objects(game, _page_objects[_prev_page]);
            _page_objects[_prev_page]=NULL;
        }

        /* prepare next page switch */
        _prev_page=_page;
        _page=_page ? 0 : 1;

        move_objects(game);

        /* collision detect?
           if ship and asteroid -> life lost
           if bullet and asteroid -> split asteroid */
        /* reduce life if we're dead? 
            game->lives--;
        */ 
#ifdef __SDCC
        exit=kbhit()!=0;
#endif

    }

    /* exit game */
    exit_game(game);

    /* leave gpx mode */
    gpx_exit(g);

    #ifdef __SDCC
    /* clear screen */
    clrscr();
    setcursortype(NORMALCURSOR);
    /* clear both graphics screens */
    gpx_set_page(g,1,PG_DISPLAY|PG_WRITE);
    gpx_cls(g);
    gpx_set_page(g,0,PG_DISPLAY|PG_WRITE);
    gpx_cls(g);
    #endif

    /* and exit app */
    return 0;
}
