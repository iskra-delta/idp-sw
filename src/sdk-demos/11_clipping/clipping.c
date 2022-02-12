/*
 * clipping.c
 *
 * Draw lines...
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 26.01.2022   tstih
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <gpx.h>

#define SHAPES 100

int main() {

    srand(time(NULL));   

    /* enter gpx mode */
    gpx_t *g=gpx_init();
    if (g==NULL) {
        printf("Can't enter graphics mode.\n");
        return 1;
    }

    /* draw pixels. */
    rect_t ul_area={0,0,511,255};
    gpx_set_clip_area(g,&ul_area);
    for(int l=0;l<SHAPES;l++) {
        int x0=rand() % 1023, 
            y0=rand() % 511;
        gpx_draw_pixel(g,x0,y0);
    }

    /* draw circles. */
    rect_t ur_area={511,0,1023,255};
    gpx_set_clip_area(g,&ur_area);
    for(int l=0;l<SHAPES;l++) {
        int x0=rand() % 1023, 
            y0=rand() % 511,
            r=rand() % 64;
        gpx_draw_circle(g,x0,y0,r);
    }

    /* draw rectangles. */
    rect_t ll_area={0,255,511,511};
    gpx_set_clip_area(g,&ll_area);
    for(int l=0;l<SHAPES;l++) {
        int x0=rand() % 1023, 
            y0=rand() % 511,
            w=rand() % 64,
            h=rand() % 64;
        rect_t rct={x0,y0,x0+w,y0+h};
        gpx_draw_rect(g, &rct);
    }

    /* draw lines in lower right corner. */
    rect_t lr_area={511,255,1023,511};
    gpx_set_clip_area(g,&lr_area);
    /* 100 random lines. */
    for(int l=0;l<SHAPES;l++) {
        int x0=rand() % 1023, x1=rand() % 1023,
            y0=rand() % 511,y1=rand() % 511;
        gpx_draw_line(g,x0,y0,x1,y1);
    }



    /* leave gpx mode */
    gpx_exit(g);

    return 0;
}
