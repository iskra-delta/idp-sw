/*
 * pages.c
 *
 * Test pages.
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 09.02.2022   tstih
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include <gpx.h>

int main() {

    /* enter gpx mode */
    gpx_t *g=gpx_init();
    if (g==NULL) {
        printf("Can't enter graphics mode.\n");
        return 1;
    }

    /* animation using page switching. */
    gpx_set_page(g,1,PG_WRITE);
    rect_t pg1rect={100,100,200,200};
    gpx_fill_rect(g,&pg1rect);
    gpx_set_page(g,1,PG_DISPLAY);

    rect_t pg0rect={300,300,400,400};
    gpx_set_page(g,0,PG_WRITE);
    gpx_fill_rect(g,&pg0rect);


    /* switch pages 100 times */
    for(int i=0;i<100;i++) 
        gpx_set_page(g,i%2,PG_DISPLAY);

    /* leave gpx mode */
    gpx_exit(NULL);

    return 0;
}
