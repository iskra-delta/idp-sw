/*
 * gpxcap.c
 *
 * Query capabilities of the graphics mode.
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 26.01.2022   tstih
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <gpx.h>

int main() {
    /* enter gpx mode */
    gpx_t *g=gpx_init();
    if (g==NULL) {
        printf("Can't enter graphics mode.\n");
        return 1;
    }

    /* query graphics capabilities */
    gpx_cap_t *cap=gpx_cap(g);
    printf("GRAPHICS PROPERTIES\n\n");
    printf("No. colors %d\nBack color %d\nFore color %d\n",
        cap->num_colors,
        cap->back_color,
        cap->fore_color);
    printf("Sup. pages %d\n", cap->num_pages);
    /* enum. pages */
    for(int p=0; p<cap->num_pages; p++)
        /* enum resolutions (for page) */
        for (int r=0; r<cap->pages[p].num_resolutions; r++)
            printf(" P%d Resol. %dx%d\n",
                p,
                cap->pages[p].resolutions[r].width,
                cap->pages[p].resolutions[r].height);
    
    /* Now get current page resolution. */
    gpx_resolution_t res;
    gpx_get_disp_page_resolution(g,&res);
    printf("Current display resolution is %dx%d\n", 
        res.width, res.height);

    /* leave gpx mode */
    gpx_exit(g);

    return 0;
}
