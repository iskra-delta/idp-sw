/*
 * gpx.h
 *
 * include this and -llibgpx to use libgpx.. 
 *
 * MIT License (see: LICENSE)
 * copyright (c) 2021 tomaz stih
 *
 * 03.08.2021   tstih
 *
 */
#ifndef __GPX_H__
#define __GPX_H__

#include <stdbool.h>
#include <stdint.h>



/* ----- core gpx new type(s) ---------------------------------------------- */
typedef int16_t coord;
typedef int16_t color;                  /* if more then 16 colors, then it's a pointer */



/* ----- basic graphics structures (rect_t, graphics_t, etc.) -------------- */
typedef struct rect_s {                 /* the rectangle */
	coord x0;
	coord y0;
	coord x1;
	coord y1;
} rect_t;

/* drawing mode */
#define BLT_NONE            0           /* no drawing, pen up */
#define BLT_COPY            1           /* standard operation */
#define BLT_XOR             2           /* XOR operations */


/* official list styles (will work fast!) */
#define LS_SOLID            0xff
#define LS_DOTTED           0xaa
#define LS_DASHED           0xcc


typedef struct gpx_s {
    uint8_t blit;                       /* one of BM_ mmodes */
    uint8_t line_style;                 /* one of LS_ styles */
    uint8_t fill_brush_size;            /* bytes in brush */
    uint8_t fill_brush[8];              /* array of byes (max 8) */
    rect_t clip_area;                   /* absolute clipping rectangle */
    uint8_t display_page;               /* currently displaying ... */
    uint8_t write_page;                 /* all drawing goes to page... */
    uint8_t *resolutions;               /* current resolution for each page */
    color fore_color;                   /* current fore color */
    color back_color;                   /* current back color */
} gpx_t;


/* set color consts. */
#define CO_FORE             1
#define CO_BACK             2

/* ----- initialization ---------------------------------------------------- */

/* initialize the graphics system */
extern gpx_t* gpx_init();

/* exit graphics mode */
extern void gpx_exit(gpx_t* g);



/* ----- query lib capabilities -------------------------------------------- */

/* page resolution */
typedef struct gpx_resolution_s {
    coord width;                        /* width in pixels */
    coord height;                       /* height in pixels */
} gpx_resolution_t;

/* the page  */
typedef struct gpx_page_s {
    int num_resolutions;                /* number of resolutions */
    gpx_resolution_t *resolutions;      /* array of resolutions */
} gpx_page_t;

/* gpx capabilities struct. */
typedef struct gpx_cap_s {
    /* pages info */
    int num_pages;                      /* number of pages */
    gpx_page_t *pages;                  /* array of pages */
    /* colors info */
    int num_colors;
    color fore_color;                   /* system fore color */
    color back_color;                   /* system back color */
} gpx_cap_t;

/* get gpx capabilities */
extern gpx_cap_t* gpx_cap(gpx_t *g);

/* quick access to display resolution */
extern gpx_resolution_t *gpx_get_disp_page_resolution(
    gpx_t *g,
    gpx_resolution_t *res);

/* ----- drawing modes, styles, patterns, colors --------------------------- */

#define PG_DISPLAY  1
#define PG_WRITE    2

/* set curent page */
extern void gpx_set_page(gpx_t *g, uint8_t page, uint8_t pgop);

/* get curent page */
extern uint8_t gpx_get_page(gpx_t *g, uint8_t page, uint8_t pgop);

/* set resolution (of current write page) */
extern void gpx_set_resolution(gpx_t *g, uint8_t resolution);

/* set current color */
extern void gpx_set_color(gpx_t *g, color c, uint8_t ct);

/* set clippig rectangle, if NULL then default page resolution is used */
extern void gpx_set_clip_area(gpx_t *g, rect_t *clip_area);

/* set blit mode */
extern void gpx_set_blit(gpx_t *g, uint8_t blit);

/* set line style  */
extern void gpx_line_style(gpx_t *g, uint8_t line_style);

/* set fill brush */
extern void gpx_fill_brush(gpx_t *g, uint8_t fill_brush_size, uint8_t *fill_brush);



/* ----- draw and fill functions ------------------------------------------- */

/* clear screen */
extern void gpx_cls(gpx_t *g);

/* draw pixel */
extern void gpx_draw_pixel(gpx_t *g, coord x, coord y);

/* draw circle */
extern void gpx_draw_circle(gpx_t *g, coord x0, coord y0, coord radius);

/* -draw line */
extern void gpx_draw_line(gpx_t *g, coord x0, coord y0, coord x1, coord y1);

/* -draw rectangle */
extern void gpx_draw_rect(gpx_t *g, rect_t *rect);

/* -fill rectangle */
extern void gpx_fill_rect(gpx_t *g, rect_t *rect);



/* ----- glyphs ------------------------------------------------------------ */

/* Known glyph classes */
#define GYCLS_RASTER    0
#define GYCLS_TINY      1
#define GYCLS_LINES     2
#define GYCLS_RLE       3

typedef struct glyph_s {
    uint8_t reserved1:5;                /* low nibble */
    uint8_t class:3;                    /* high nibble */
    uint8_t reserved2[3];
    uint8_t data[0];                    /* start of data */
} glyph_t;

typedef struct raster_glyph_s {
    uint8_t stride:5;                   /* stride-1 (1-16) */
    uint8_t class:3;                    /* high nibble */
    uint8_t width;                      /* width-1 (1-256) */
    uint8_t height;                     /* height-1 (1-256) */
    uint8_t reserved;                   /* not used */
    uint8_t data[0];                    /* start of data */
} raster_glyph_t;

/* Tiny glyph header. */
typedef struct tiny_glyph_s {
    uint8_t reserved:5;                 /* stride-1 (1-16) */
    uint8_t class:3;                    /* high nibble */
    uint8_t width;                      /* width-1 (1-256) */
    uint8_t height;                     /* height-1 (1-256) */
    uint8_t moves;                      /* number of moves */
    uint8_t data[0];                    /* start of data */
} tiny_glyph_t;

/* draw glyph */
extern void gpx_draw_glyph(gpx_t *g, coord x, coord y, glyph_t *glyph);

/* -get glyph from screen */
extern glyph_t* gpx_snatch_glyph(gpx_t *g, coord x, coord y, coord width, coord height);



/* ----- fonts and text related -------------------------------------------- */

typedef struct font_s {
    uint8_t hor_spacing_hint:4;         /* 0-3: hor. spacing for proport.fnt */
    uint8_t reserved:3;                 /* 4-6: unused for now */
    uint8_t proportional:1;             /* 7: proportional flag */
    uint8_t width;                      /* max width for proportional font */
    uint8_t height;                     /* font height */
    uint8_t first_ascii;                /* first ascii of font */
    uint8_t last_ascii;                 /* last ascii of font */
    uint16_t glyph_offsets[0];          /* table of offsets */
} font_t;

/* draw string at x,y */
extern void gpx_draw_string(gpx_t *g, font_t *f, coord x, coord y, char* text);

/* -measure string (but don't draw it)! */
extern rect_t* gpx_measure_string(gpx_t *g, font_t *f, char* text);



/* ----- rectangle functions  ---------------------------------------------- */

/* does rectangle contains point? */
extern bool gpx_rect_contains(rect_t *r, coord x, coord y);

/* do rectangles overlap? */
extern bool gpx_rect_overlap(rect_t *a, rect_t *b);

/* intersection of rectangles */
extern rect_t* gpx_rect_intersect(rect_t *a, rect_t *b, rect_t *intersect);

/* normalize rect coordinates i.e. ie from left top to right bottom */
extern void gpx_rect_norm(rect_t *r);


#endif /* __GPX_H__ */