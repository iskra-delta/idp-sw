/*
 * colors.c
 *
 * The two colors of Partner.
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 14.02.2022   tstih
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include <gpx.h>

int main() {

    /* enter gpx mode */
    gpx_t *g=gpx_init();
    if (g==NULL) {
        printf("Can't enter graphics mode.\n");
        return 1;
    }

    /* store default colors */
    gpx_cap_t* capabilities;
    capabilities=gpx_cap(g);

    /* draw four rectangles one in another with alternating colors. */
    int step=25, loops=5;
    rect_t rect={200,100,800,400};
    bool eraser=false;

    while(loops--) {

        /* set color */
        gpx_set_color(g, 
            eraser ? capabilities->back_color : capabilities->fore_color, 
            CO_FORE);

        /* and fill rect... */
        gpx_fill_rect(g,&rect);
        rect.x0+=step; rect.x1-=step;
        rect.y0+=step; rect.y1-=step;

        /* inverse fore and back */
        eraser=!eraser;
    }

    /* leave gpx mode */
    gpx_exit(NULL);

    return 0;
}
