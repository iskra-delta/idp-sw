/*
 * aids.c
 *
 * asteroids!!!
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
#include <string.h>

#include <partner.h>
#include <gpx.h>


extern uint8_t commando[];
extern uint8_t *_decode_addr(uint16_t *addr, uint8_t *xy);


/* ----- main loop --------------------------------------------------------- */
int main() {

    uint16_t index=0;

    /* enter gpx mode */
    gpx_t *g=gpx_init();
    if (g==NULL) {
        printf("Can't enter graphics mode.\n");
        return 1;
    }

    /* set resolution 1024x256 */
    gpx_set_resolution(g, 1);

    /* clear screen */
    setcursortype(NOCURSOR);
    clrscr();

    /* clear graphics screen */
    gpx_cls(g);

    uint8_t xy[2];
    for(index=0;index<6144;index++) {
        _decode_addr(index,xy);
    }


    /* wait keypress */
    bool exit=false;
    while (!exit) 
        exit=kbhit()!=0;

    /* leave gpx mode */
    gpx_exit(g);

    /* clear screen */
    clrscr();
    setcursortype(NORMALCURSOR);
    /* clear graphics screen */
    gpx_cls(g);

    /* and exit app */
    return 0;
}