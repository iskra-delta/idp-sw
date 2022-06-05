/*
 * moonlander.c
 *
 * the moon lander!
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

#include <partner.h>
#include <gpx.h>

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

    /* clear screen */
    setcursortype(NOCURSOR);
    clrscr();

    /* set page and clear graphics */
    gpx_set_page(g,0,PG_DISPLAY|PG_WRITE);
    gpx_cls(g);

    bool exit=false;

    while (!exit) {
        exit=kbhit()!=0;
    }

    /* clear graphics */
    gpx_cls(g);

    /* leave gpx mode */
    gpx_exit(g);

    /* cp/m cursor on */
    setcursortype(NORMALCURSOR);

    /* and exit app */
    return 0;
}
