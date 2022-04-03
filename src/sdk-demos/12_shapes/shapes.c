/*
 * shapes.c
 *
 * Test line styles and fill patterns 
 * (i.e. dotted, dashed, etc.)
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 26.01.2022   tstih
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include <partner.h>
#include <gpx.h>

#define LINE_X0 100
#define LINE_X1 923

int main() {

    /* text mode off */
    clrscr();
    setcursortype(NOCURSOR);

    /* enter gpx mode */
    gpx_t *g=gpx_init();
    if (g==NULL) {
        printf("Can't enter graphics mode.\n");
        return 1;
    }

    /* clear graphics */
    gpx_cls(g);

    /* first line */
    int y=10, stepy=10, lines=3, i;

    /* all line patterns used in test. */
    uint8_t dotted_style=0xaa;          /* 10101010 */
    gpx_set_line_style(g,dotted_style);
    for(i=0;i<lines;y+=stepy,i++)
        gpx_draw_line(g, LINE_X0, y, LINE_X1, y);

    /* draw lines side by side */
    y=11;
    uint8_t shft_dotted_style=0x55;     /* 01010101 */
    gpx_set_line_style(g,shft_dotted_style);
    for(i=0;i<lines;y+=stepy,i++)
        gpx_draw_line(g, LINE_X0, y, LINE_X1, y);

    y=50;
    uint8_t shft_dashed_style=0x33;     /* 00110011 */
    gpx_set_line_style(g,shft_dashed_style);
    for(i=0;i<lines;y+=stepy,i++)
        gpx_draw_line(g, LINE_X0, y, LINE_X1, y);

    uint8_t dashed_style=0xcc;          /* 11001100 */
    gpx_set_line_style(g,dashed_style);
    for(i=0;i<lines;y+=stepy,i++)
        gpx_draw_line(g, LINE_X0, y, LINE_X1, y);

    uint8_t long_dashed_style=0xf0;     /* 11110000 */
    gpx_set_line_style(g,long_dashed_style);
    for(i=0;i<lines;y+=stepy,i++)
        gpx_draw_line(g, LINE_X0, y, LINE_X1, y);

    uint8_t dense_dashed_style=0xee;    /* 11101110 */
    gpx_set_line_style(g,dense_dashed_style);
    for(i=0;i<lines;y+=stepy,i++)
        gpx_draw_line(g, LINE_X0, y, LINE_X1, y);

    /* draw circle using dense dashed style */
    gpx_draw_circle(g,350,300,50);

    /* 50% pattern */
    uint8_t fill50pc[2] = {
        dotted_style,shft_dotted_style};
    gpx_set_fill_brush(g,2,fill50pc);
    /* fill rect */
    y=300;
    rect_t r1={LINE_X0,y,LINE_X0+150,y+100};
    gpx_fill_rect(g, &r1);

    /* fill circle... */
    uint8_t cross[8] = {
        0x81, 0x42, 0x24, 0x18,
        0x18, 0x24, 0x42, 0x81
    };
    gpx_set_fill_brush(g,8,cross);
    gpx_fill_circle(g,550,300,100);

    /* draw polygon... */
    point_t poly[]={{750,200}, {800,300}, {750,350}, {700,300}};
    gpx_set_line_style(g,dotted_style);
    gpx_draw_polygon(g,4,poly);

    /* leave gpx mode */
    gpx_exit(g);

    /* text mode on */
    setcursortype(NORMALCURSOR);
    clrscr();

    return 0;
}
