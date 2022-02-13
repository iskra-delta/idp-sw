#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include <partner.h>
#include <gpx.h>

#include "game.h"
#include "player.h"
#include "asteroid.h"

int _width;
int _height;

char *_keys = "456 q";

asteroid_t _asteroids[ASTEROIDS], _prev_asteroids[ASTEROIDS];
player_t _p, _prev_p;
player_t _lives[LIVES], _prev_lives[LIVES];

int main()
{

    /* clear text screen and hide cursor */
    clrscr();
    setcursortype(NOCURSOR);

    /* enter graphics mode */
    gpx_t *g = gpx_init();
    if (g == NULL)
    {
        printf("Can't enter graphics mode.\n");
        return 1;
    }

    /* obtain resolution */
    gpx_resolution_t res;
    gpx_get_disp_page_resolution(g, &res);
    _width = res.width;
    _height = res.height;

    /* all drawing with xor... */
    gpx_set_blit(g, BLT_XOR);

    int i = 0;
    int j = 0;
    int offset = 0;
    vector2d_t translation = {-_width / 2, -_height / 2};

    /* set up icons used to represent player lives */
    for (i = 0; i < LIVES; i++)
    {

        init_player(&_lives[i]);
        _lives[i].lives = 1;

        /* shrink lives */
        for (j = 0; j < P_VERTS; j++)
            divide_vector(&_lives[i].obj_vert[j], 2);

        /* convert screen space vector into world space */
        vector2d_t top_left = {20 + offset, 20};
        add_vector(&top_left, &translation);
        _lives[i].location = top_left;
        update_player(&_lives[i]);
        offset += 20;
    }

    /* set up player and asteroids in world space */
    init_player(&_p);
    init_asteroids(_asteroids, ASTEROIDS);

    bool quit = false, first=true;
    int key = 0;

    /* render loop */
    while (!quit)
    {
        if ( (key=kbhit()) != 0 && strchr(_keys, key) != NULL)
        {
            int ikey = strchr(_keys, key) - _keys;
            switch (ikey)
            {
            case KEY_FIRE:
                shoot_bullet(&_p);
                break;
            case KEY_ROTATE_LEFT:
                rotate_player(&_p, -4);
                break;
            case KEY_ROTATE_RIGHT:
                rotate_player(&_p, 4);
                break;
            case KEY_THRUST:
            {
                vector2d_t thrust;
                get_direction(&_p, &thrust);
                multiply_vector(&thrust, .06);
                apply_force(&_p.velocity, &thrust);
            }
            break;
            case KEY_QUIT:
                quit = true;
                break;
            }
        }

        /* delete previous screen */
        if (first) 
            first=false; 
        else {
            draw_player(g, &_prev_p);
            draw_player(g, &_prev_lives[0]);
            draw_player(g, &_prev_lives[1]);
            draw_player(g, &_prev_lives[2]);
            draw_asteroids(g, _prev_asteroids, ASTEROIDS);
        }

        /* draw game screen */
        draw_player(g, &_p);
        draw_player(g, &_lives[0]);
        draw_player(g, &_lives[1]);
        draw_player(g, &_lives[2]);
        draw_asteroids(g, _asteroids, ASTEROIDS);

        /* and store all data for deleting previous state */
        memcpy(&_prev_p,&_p,sizeof(player_t));
        memcpy(&_prev_lives,&_lives, LIVES * sizeof(player_t));
        memcpy(&_prev_asteroids, &_asteroids, ASTEROIDS * sizeof(asteroid_t));
        
        /* and update... */
        update_player(&_p);
        bounds_player(&_p);
        bounds_asteroids(_asteroids, ASTEROIDS);

        /* asteroid collision detect */
        int res = collision_asteroids(_asteroids, ASTEROIDS, &_p.location, _p.hit_radius);
        if (res != -1)
        {
            _p.lives--;
            _p.location.x = 0;
            _p.location.y = 0;
            _p.velocity.x = 0;
            _p.velocity.y = 0;
            int i = LIVES - 1;
            for (i = LIVES; i >= 0; i--)
            {
                if (_lives[i].lives > 0)
                {
                    _lives[i].lives = 0;
                    break;
                }
            }
        }

        /* bullets collision detect */
        i = 0;
        vector2d_t translation = {-_width / 2, -_height / 2};
        vector2d_t world;

        for (i = 0; i < BULLETS; i++)
        {
            /* only check for collision for bullets that are shown on screen */
            if (_p.bullets[i].alive == true)
            {
                /* convert bullet screen space location to world space to compare
                   with asteroids world space to detect a collision */
                add_vector_new(&_p.bullets[i].location, &translation, &world);
                int index = collision_asteroids(_asteroids, ASTEROIDS, &world, 1);
                /* collision occured */
                if (index != -1)
                {
                    _asteroids[index].alive = 0;
                    _p.bullets[i].alive = false;
                    if (_asteroids[index].size != SMALL)
                        spawn_asteroids(_asteroids, ASTEROIDS, _asteroids[index].size, &(_asteroids[index].location));
                }
            }
        }

        /* and update ... */
        update_asteroids(_asteroids, ASTEROIDS);
    }

    /* return cursor */
    setcursortype(NORMALCURSOR);

    return 0;
}