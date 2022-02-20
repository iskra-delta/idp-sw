/*
 * raster.c
 *
 * Raster glyphs and fonts. Inc. clipping.
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

#include "idp8x16.h"

char* text[] = {"Ozracje je mracno,",
                "vreme oblacno.",
                "Vesoljni potop je ze mimo.",
                "A glej zla usoda...",
                "...je prava nadloga,",
                "in spet se pripravlja ta dan --",
                "ko svet bo porusen, pregnan!",
                "Svetilka in kompas",
                "edino orodje za hude je case.",
                "Ne tarnaj, ne boj se,",
                "zanesi se nase."};

int main() {

    /* enter gpx mode */
    gpx_t *g=gpx_init();
    if (g==NULL) {
        printf("Can't enter graphics mode.\n");
        return 1;
    }

    /* clipping */
    rect_t clip_area={32,32,200,200};
    gpx_set_clip_area(g,&clip_area);
    gpx_set_line_style(g,0xaa);
    gpx_draw_rect(g,&clip_area);

    /* raster glyphs and fonts... */
    font_t *font=(font_t *)&idp8x16_font;
    int y=32,x=36;
    for (unsigned int i=0;i<sizeof(text)/sizeof(char*);i++) {
        gpx_draw_string(g,font,x,y,text[i]);
        y+=20;
    }
    /* leave gpx mode */
    gpx_exit(NULL);

    return 0;
}
