/*
 * blitmode.c
 *
 * Test blit mode!
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

    /* XOR circles. */
    gpx_set_blit(g,BLT_XOR);

    /* draw circles */
    int x=512, y=256, r=100, dist=100;

    gpx_fill_circle(g,x,y,r);
    gpx_fill_circle(g,x-dist,y,r);
    gpx_fill_circle(g,x+dist,y,r);
    gpx_fill_circle(g,x-dist/2,y-dist,r);
    gpx_fill_circle(g,x+dist/2,y-dist,r);
    gpx_fill_circle(g,x-dist/2,y+dist,r);
    gpx_fill_circle(g,x+dist/2,y+dist,r);
    
    /* leave gpx mode */
    gpx_exit(NULL);

    return 0;
}
