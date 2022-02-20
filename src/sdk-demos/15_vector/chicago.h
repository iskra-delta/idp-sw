/*
 * chicago_font.h
 *
 * Font bytes.
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2021 Tomaz Stih
 *
 * 20.02.2022   tstih
 *
 */
#ifndef __CHICAGO_FONT_H__
#define __CHICAGO_FONT_H__

#include <stdint.h>

uint8_t chicago_font[] = {
      0x83                                              /* font flags */
    , 0x0d                                              /* width (max width for proportional) */
    , 0x0c                                              /* height */
    , 0x20                                              /* first ascii */
    , 0x7f                                              /* last ascii */

    /* glpyh offsets */
    , 0xc5, 0x00, 0xc9, 0x00, 0xdd, 0x00, 0xed, 0x00
    , 0x0a, 0x01, 0x23, 0x01, 0x3c, 0x01, 0x59, 0x01
    , 0x63, 0x01, 0x79, 0x01, 0x8e, 0x01, 0xa3, 0x01
    , 0xb4, 0x01, 0xbe, 0x01, 0xc5, 0x01, 0xce, 0x01
    , 0xdb, 0x01, 0xf1, 0x01, 0x06, 0x02, 0x1a, 0x02
    , 0x2e, 0x02, 0x43, 0x02, 0x59, 0x02, 0x6f, 0x02
    , 0x85, 0x02, 0xa0, 0x02, 0xb8, 0x02, 0xc6, 0x02
    , 0xd5, 0x02, 0xdd, 0x02, 0xe8, 0x02, 0xf0, 0x02
    , 0x04, 0x03, 0x1b, 0x03, 0x3b, 0x03, 0x59, 0x03
    , 0x6e, 0x03, 0x86, 0x03, 0x9c, 0x03, 0xb1, 0x03
    , 0xc8, 0x03, 0xe1, 0x03, 0xf0, 0x03, 0x02, 0x04
    , 0x1d, 0x04, 0x33, 0x04, 0x4d, 0x04, 0x65, 0x04
    , 0x7b, 0x04, 0x93, 0x04, 0xab, 0x04, 0xc9, 0x04
    , 0xdc, 0x04, 0xf3, 0x04, 0x12, 0x05, 0x30, 0x05
    , 0x5e, 0x05, 0x7b, 0x05, 0x91, 0x05, 0xa7, 0x05
    , 0xbd, 0x05, 0xd1, 0x05, 0xe4, 0x05, 0xef, 0x05
    , 0xf7, 0x05, 0xfe, 0x05, 0x15, 0x06, 0x2c, 0x06
    , 0x3f, 0x06, 0x57, 0x06, 0x6c, 0x06, 0x80, 0x06
    , 0xa1, 0x06, 0xb9, 0x06, 0xcd, 0x06, 0xe1, 0x06
    , 0xf8, 0x06, 0x0d, 0x07, 0x2a, 0x07, 0x40, 0x07
    , 0x53, 0x07, 0x6c, 0x07, 0x89, 0x07, 0x9a, 0x07
    , 0xaa, 0x07, 0xbb, 0x07, 0xd5, 0x07, 0xed, 0x07
    , 0x11, 0x08, 0x2b, 0x08, 0x4b, 0x08, 0x5d, 0x08
    , 0x70, 0x08, 0x79, 0x08, 0x8d, 0x08, 0x9a, 0x08

    /* ascii 32: ' ' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x00                                              /* # moves */
    /* ascii 33: '!' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x01                                              /* width */
    , 0x0c                                              /* height */
    , 0x10                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x2a                                              /* move dx=-1, dy=1, color=none (move only!) */
    , 0x10                                              /* move dx=0, dy=2, color=none (move only!) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 34: '"' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x0c                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x05                                              /* y origin */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x60                                              /* move dx=3, dy=0, color=none (move only!) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    /* ascii 35: '#' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x06                                              /* width */
    , 0x0c                                              /* height */
    , 0x19                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x2e                                              /* move dx=-1, dy=-1, color=none (move only!) */
    , 0x0c                                              /* move dx=0, dy=-1, color=none (move only!) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0x28                                              /* move dx=1, dy=1, color=none (move only!) */
    , 0x08                                              /* move dx=0, dy=1, color=none (move only!) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x62                                              /* move dx=-3, dy=0, color=none (move only!) */
    , 0x22                                              /* move dx=-1, dy=0, color=none (move only!) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0x60                                              /* move dx=3, dy=0, color=none (move only!) */
    , 0x20                                              /* move dx=1, dy=0, color=none (move only!) */
    , 0x80                                              /* move dx=0, dy=0, color=fore (set) */
    /* ascii 36: '$' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x04                                              /* width */
    , 0x0c                                              /* height */
    , 0x15                                              /* # moves */
    , 0x04                                              /* x origin */
    , 0x03                                              /* y origin */
    , 0xd6                                              /* move dx=-2, dy=-2, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xc2                                              /* move dx=-2, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xc2                                              /* move dx=-2, dy=0, color=fore (set) */
    , 0x42                                              /* move dx=-2, dy=0, color=none (move only!) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    /* ascii 37: '%' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x07                                              /* width */
    , 0x0c                                              /* height */
    , 0x15                                              /* # moves */
    , 0x02                                              /* x origin */
    , 0x08                                              /* y origin */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xfc                                              /* move dx=3, dy=-3, color=fore (set) */
    , 0xae                                              /* move dx=-1, dy=-1, color=fore (set) */
    , 0xc2                                              /* move dx=-2, dy=0, color=fore (set) */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0x28                                              /* move dx=1, dy=1, color=none (move only!) */
    , 0x20                                              /* move dx=1, dy=0, color=none (move only!) */
    , 0xd4                                              /* move dx=2, dy=-2, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xfa                                              /* move dx=-3, dy=3, color=fore (set) */
    , 0x50                                              /* move dx=2, dy=2, color=none (move only!) */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 38: '&' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x07                                              /* width */
    , 0x0c                                              /* height */
    , 0x19                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x05                                              /* y origin */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xae                                              /* move dx=-1, dy=-1, color=fore (set) */
    , 0xfc                                              /* move dx=3, dy=-3, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0x42                                              /* move dx=-2, dy=0, color=none (move only!) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xd2                                              /* move dx=-2, dy=2, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    /* ascii 39: ''' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x01                                              /* width */
    , 0x0c                                              /* height */
    , 0x06                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    /* ascii 40: '(' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x03                                              /* width */
    , 0x0c                                              /* height */
    , 0x12                                              /* # moves */
    , 0x03                                              /* x origin */
    , 0x00                                              /* y origin */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xd2                                              /* move dx=-2, dy=2, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 41: ')' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x03                                              /* width */
    , 0x0c                                              /* height */
    , 0x11                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x00                                              /* y origin */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0xae                                              /* move dx=-1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 42: '*' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x04                                              /* width */
    , 0x0c                                              /* height */
    , 0x11                                              /* # moves */
    , 0x04                                              /* x origin */
    , 0x03                                              /* y origin */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xae                                              /* move dx=-1, dy=-1, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0x42                                              /* move dx=-2, dy=0, color=none (move only!) */
    , 0xf8                                              /* move dx=3, dy=3, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xae                                              /* move dx=-1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x40                                              /* move dx=2, dy=0, color=none (move only!) */
    , 0x40                                              /* move dx=2, dy=0, color=none (move only!) */
    , 0x80                                              /* move dx=0, dy=0, color=fore (set) */
    /* ascii 43: '+' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x0d                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x05                                              /* y origin */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xd6                                              /* move dx=-2, dy=-2, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x2a                                              /* move dx=-1, dy=1, color=none (move only!) */
    , 0x22                                              /* move dx=-1, dy=0, color=none (move only!) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 44: ',' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x01                                              /* width */
    , 0x0c                                              /* height */
    , 0x06                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x08                                              /* y origin */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    /* ascii 45: '-' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x03                                              /* width */
    , 0x0c                                              /* height */
    , 0x03                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x06                                              /* y origin */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    /* ascii 46: '.' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x01                                              /* width */
    , 0x0c                                              /* height */
    , 0x05                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x08                                              /* y origin */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 47: '/' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x07                                              /* width */
    , 0x0c                                              /* height */
    , 0x09                                              /* # moves */
    , 0x02                                              /* x origin */
    , 0x08                                              /* y origin */
    , 0xfc                                              /* move dx=3, dy=-3, color=fore (set) */
    , 0xd4                                              /* move dx=2, dy=-2, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xfa                                              /* move dx=-3, dy=3, color=fore (set) */
    , 0xfa                                              /* move dx=-3, dy=3, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 48: '0' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x12                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x03                                              /* y origin */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    /* ascii 49: '1' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x02                                              /* width */
    , 0x0c                                              /* height */
    , 0x11                                              /* # moves */
    , 0x02                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 50: '2' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x10                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x03                                              /* y origin */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xd2                                              /* move dx=-2, dy=2, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    /* ascii 51: '3' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x10                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0xd2                                              /* move dx=-2, dy=2, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xd2                                              /* move dx=-2, dy=2, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x62                                              /* move dx=-3, dy=0, color=none (move only!) */
    , 0x22                                              /* move dx=-1, dy=0, color=none (move only!) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    /* ascii 52: '4' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x06                                              /* width */
    , 0x0c                                              /* height */
    , 0x11                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xfa                                              /* move dx=-3, dy=3, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xd2                                              /* move dx=-2, dy=2, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 53: '5' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x12                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xc2                                              /* move dx=-2, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x62                                              /* move dx=-3, dy=0, color=none (move only!) */
    , 0x22                                              /* move dx=-1, dy=0, color=none (move only!) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    /* ascii 54: '6' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x12                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x08                                              /* y origin */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0x28                                              /* move dx=1, dy=1, color=none (move only!) */
    , 0x18                                              /* move dx=0, dy=3, color=none (move only!) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    /* ascii 55: '7' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x12                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 56: '8' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x17                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x06                                              /* y origin */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0x2a                                              /* move dx=-1, dy=1, color=none (move only!) */
    , 0x22                                              /* move dx=-1, dy=0, color=none (move only!) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    /* ascii 57: '9' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x14                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x03                                              /* y origin */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x2a                                              /* move dx=-1, dy=1, color=none (move only!) */
    , 0x22                                              /* move dx=-1, dy=0, color=none (move only!) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    /* ascii 58: ':' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x01                                              /* width */
    , 0x0c                                              /* height */
    , 0x0a                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x05                                              /* y origin */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x2a                                              /* move dx=-1, dy=1, color=none (move only!) */
    , 0x08                                              /* move dx=0, dy=1, color=none (move only!) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 59: ';' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x01                                              /* width */
    , 0x0c                                              /* height */
    , 0x0b                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x05                                              /* y origin */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x2a                                              /* move dx=-1, dy=1, color=none (move only!) */
    , 0x08                                              /* move dx=0, dy=1, color=none (move only!) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    /* ascii 60: '<' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x03                                              /* width */
    , 0x0c                                              /* height */
    , 0x04                                              /* # moves */
    , 0x03                                              /* x origin */
    , 0x03                                              /* y origin */
    , 0xfa                                              /* move dx=-3, dy=3, color=fore (set) */
    , 0xf8                                              /* move dx=3, dy=3, color=fore (set) */
    /* ascii 61: '=' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x07                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x05                                              /* y origin */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xc2                                              /* move dx=-2, dy=0, color=fore (set) */
    , 0x10                                              /* move dx=0, dy=2, color=none (move only!) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    /* ascii 62: '>' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x03                                              /* width */
    , 0x0c                                              /* height */
    , 0x04                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x03                                              /* y origin */
    , 0xf8                                              /* move dx=3, dy=3, color=fore (set) */
    , 0xfa                                              /* move dx=-3, dy=3, color=fore (set) */
    /* ascii 63: '?' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x10                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x03                                              /* y origin */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xae                                              /* move dx=-1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x2a                                              /* move dx=-1, dy=1, color=none (move only!) */
    , 0x08                                              /* move dx=0, dy=1, color=none (move only!) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 64: '@' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x07                                              /* width */
    , 0x0c                                              /* height */
    , 0x13                                              /* # moves */
    , 0x03                                              /* x origin */
    , 0x07                                              /* y origin */
    , 0xae                                              /* move dx=-1, dy=-1, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0xae                                              /* move dx=-1, dy=-1, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xc2                                              /* move dx=-2, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    /* ascii 65: 'A' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x1c                                              /* # moves */
    , 0x01                                              /* x origin */
    , 0x09                                              /* y origin */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xc2                                              /* move dx=-2, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 66: 'B' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x1a                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x06                                              /* y origin */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0x2a                                              /* move dx=-1, dy=1, color=none (move only!) */
    , 0x22                                              /* move dx=-1, dy=0, color=none (move only!) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 67: 'C' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x11                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x03                                              /* y origin */
    , 0xae                                              /* move dx=-1, dy=-1, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0x2c                                              /* move dx=1, dy=-1, color=none (move only!) */
    , 0x20                                              /* move dx=1, dy=0, color=none (move only!) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    /* ascii 68: 'D' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x14                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x03                                              /* y origin */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 69: 'E' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x12                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xc2                                              /* move dx=-2, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0x28                                              /* move dx=1, dy=1, color=none (move only!) */
    , 0x40                                              /* move dx=2, dy=0, color=none (move only!) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    /* ascii 70: 'F' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x11                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xc2                                              /* move dx=-2, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0x28                                              /* move dx=1, dy=1, color=none (move only!) */
    , 0x40                                              /* move dx=2, dy=0, color=none (move only!) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 71: 'G' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x13                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x03                                              /* y origin */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0x2a                                              /* move dx=-1, dy=1, color=none (move only!) */
    , 0x10                                              /* move dx=0, dy=2, color=none (move only!) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xd6                                              /* move dx=-2, dy=-2, color=fore (set) */
    , 0x28                                              /* move dx=1, dy=1, color=none (move only!) */
    , 0x08                                              /* move dx=0, dy=1, color=none (move only!) */
    , 0x62                                              /* move dx=-3, dy=0, color=none (move only!) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    /* ascii 72: 'H' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x15                                              /* # moves */
    , 0x01                                              /* x origin */
    , 0x04                                              /* y origin */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 73: 'I' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x03                                              /* width */
    , 0x0c                                              /* height */
    , 0x0b                                              /* # moves */
    , 0x02                                              /* x origin */
    , 0x08                                              /* y origin */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xd6                                              /* move dx=-2, dy=-2, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xd2                                              /* move dx=-2, dy=2, color=fore (set) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    /* ascii 74: 'J' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x0e                                              /* # moves */
    , 0x04                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0x7a                                              /* move dx=-3, dy=3, color=none (move only!) */
    , 0x2a                                              /* move dx=-1, dy=1, color=none (move only!) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    /* ascii 75: 'K' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x06                                              /* width */
    , 0x0c                                              /* height */
    , 0x17                                              /* # moves */
    , 0x01                                              /* x origin */
    , 0x09                                              /* y origin */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xfc                                              /* move dx=3, dy=-3, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xfa                                              /* move dx=-3, dy=3, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xd0                                              /* move dx=2, dy=2, color=fore (set) */
    , 0x2e                                              /* move dx=-1, dy=-1, color=none (move only!) */
    , 0x22                                              /* move dx=-1, dy=0, color=none (move only!) */
    , 0xd0                                              /* move dx=2, dy=2, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 76: 'L' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x12                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    /* ascii 77: 'M' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x07                                              /* width */
    , 0x0c                                              /* height */
    , 0x16                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x09                                              /* y origin */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xd0                                              /* move dx=2, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xc2                                              /* move dx=-2, dy=0, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0x50                                              /* move dx=2, dy=2, color=none (move only!) */
    , 0x20                                              /* move dx=1, dy=0, color=none (move only!) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xd4                                              /* move dx=2, dy=-2, color=fore (set) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    /* ascii 78: 'N' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x06                                              /* width */
    , 0x0c                                              /* height */
    , 0x14                                              /* # moves */
    , 0x06                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xc2                                              /* move dx=-2, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xae                                              /* move dx=-1, dy=-1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0xd0                                              /* move dx=2, dy=2, color=fore (set) */
    , 0xd2                                              /* move dx=-2, dy=2, color=fore (set) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x2c                                              /* move dx=1, dy=-1, color=none (move only!) */
    , 0x60                                              /* move dx=3, dy=0, color=none (move only!) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 79: 'O' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x12                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x03                                              /* y origin */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    /* ascii 80: 'P' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x14                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x03                                              /* y origin */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x2a                                              /* move dx=-1, dy=1, color=none (move only!) */
    , 0x42                                              /* move dx=-2, dy=0, color=none (move only!) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    /* ascii 81: 'Q' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x14                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x03                                              /* y origin */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 82: 'R' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x1a                                              /* # moves */
    , 0x01                                              /* x origin */
    , 0x09                                              /* y origin */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xc2                                              /* move dx=-2, dy=0, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 83: 'S' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x04                                              /* width */
    , 0x0c                                              /* height */
    , 0x0f                                              /* # moves */
    , 0x04                                              /* x origin */
    , 0x07                                              /* y origin */
    , 0xd6                                              /* move dx=-2, dy=-2, color=fore (set) */
    , 0x54                                              /* move dx=2, dy=-2, color=none (move only!) */
    , 0xae                                              /* move dx=-1, dy=-1, color=fore (set) */
    , 0xc2                                              /* move dx=-2, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xf8                                              /* move dx=3, dy=3, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x62                                              /* move dx=-3, dy=0, color=none (move only!) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    /* ascii 84: 'T' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x13                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xc2                                              /* move dx=-2, dy=0, color=fore (set) */
    , 0x28                                              /* move dx=1, dy=1, color=none (move only!) */
    , 0x20                                              /* move dx=1, dy=0, color=none (move only!) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 85: 'U' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x1b                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x08                                              /* y origin */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x62                                              /* move dx=-3, dy=0, color=none (move only!) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    /* ascii 86: 'V' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x1a                                              /* # moves */
    , 0x04                                              /* x origin */
    , 0x08                                              /* y origin */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x62                                              /* move dx=-3, dy=0, color=none (move only!) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    /* ascii 87: 'W' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x09                                              /* width */
    , 0x0c                                              /* height */
    , 0x2a                                              /* # moves */
    , 0x08                                              /* x origin */
    , 0x08                                              /* y origin */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x62                                              /* move dx=-3, dy=0, color=none (move only!) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xae                                              /* move dx=-1, dy=-1, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xae                                              /* move dx=-1, dy=-1, color=fore (set) */
    , 0x7e                                              /* move dx=-3, dy=-3, color=none (move only!) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 88: 'X' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x19                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x04                                              /* y origin */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x62                                              /* move dx=-3, dy=0, color=none (move only!) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0x2a                                              /* move dx=-1, dy=1, color=none (move only!) */
    , 0x08                                              /* move dx=0, dy=1, color=none (move only!) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 89: 'Y' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x12                                              /* # moves */
    , 0x04                                              /* x origin */
    , 0x04                                              /* y origin */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xae                                              /* move dx=-1, dy=-1, color=fore (set) */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xd2                                              /* move dx=-2, dy=2, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 90: 'Z' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x12                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xd2                                              /* move dx=-2, dy=2, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xc2                                              /* move dx=-2, dy=0, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xc2                                              /* move dx=-2, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    /* ascii 91: '[' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x02                                              /* width */
    , 0x0c                                              /* height */
    , 0x12                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x03                                              /* y origin */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0xd2                                              /* move dx=-2, dy=2, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    /* ascii 92: '\' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x07                                              /* width */
    , 0x0c                                              /* height */
    , 0x10                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 93: ']' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x02                                              /* width */
    , 0x0c                                              /* height */
    , 0x0f                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    /* ascii 94: '^' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x04                                              /* width */
    , 0x0c                                              /* height */
    , 0x07                                              /* # moves */
    , 0x01                                              /* x origin */
    , 0x03                                              /* y origin */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 95: '_' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x06                                              /* width */
    , 0x0c                                              /* height */
    , 0x04                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x0a                                              /* y origin */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    /* ascii 96: '`' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x01                                              /* width */
    , 0x0c                                              /* height */
    , 0x03                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    /* ascii 97: 'a' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x13                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x05                                              /* y origin */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0x62                                              /* move dx=-3, dy=0, color=none (move only!) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 98: 'b' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x13                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x05                                              /* y origin */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 99: 'c' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x04                                              /* width */
    , 0x0c                                              /* height */
    , 0x0f                                              /* # moves */
    , 0x04                                              /* x origin */
    , 0x05                                              /* y origin */
    , 0xae                                              /* move dx=-1, dy=-1, color=fore (set) */
    , 0xc2                                              /* move dx=-2, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x2c                                              /* move dx=1, dy=-1, color=none (move only!) */
    , 0x20                                              /* move dx=1, dy=0, color=none (move only!) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    /* ascii 100: 'd' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x14                                              /* # moves */
    , 0x04                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 101: 'e' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x11                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x08                                              /* y origin */
    , 0x14                                              /* move dx=0, dy=-2, color=none (move only!) */
    , 0xc2                                              /* move dx=-2, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xae                                              /* move dx=-1, dy=-1, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0xd2                                              /* move dx=-2, dy=2, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    /* ascii 102: 'f' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x04                                              /* width */
    , 0x0c                                              /* height */
    , 0x10                                              /* # moves */
    , 0x04                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0xc2                                              /* move dx=-2, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xd2                                              /* move dx=-2, dy=2, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 103: 'g' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x1d                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x08                                              /* y origin */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x62                                              /* move dx=-3, dy=0, color=none (move only!) */
    , 0x22                                              /* move dx=-1, dy=0, color=none (move only!) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    /* ascii 104: 'h' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x14                                              /* # moves */
    , 0x01                                              /* x origin */
    , 0x09                                              /* y origin */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    /* ascii 105: 'i' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x01                                              /* width */
    , 0x0c                                              /* height */
    , 0x10                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x2a                                              /* move dx=-1, dy=1, color=none (move only!) */
    , 0x08                                              /* move dx=0, dy=1, color=none (move only!) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 106: 'j' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x04                                              /* width */
    , 0x0c                                              /* height */
    , 0x10                                              /* # moves */
    , 0x03                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x10                                              /* move dx=0, dy=2, color=none (move only!) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0x7a                                              /* move dx=-3, dy=3, color=none (move only!) */
    , 0x08                                              /* move dx=0, dy=1, color=none (move only!) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    /* ascii 107: 'k' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x13                                              /* # moves */
    , 0x04                                              /* x origin */
    , 0x04                                              /* y origin */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xc2                                              /* move dx=-2, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0xd0                                              /* move dx=2, dy=2, color=fore (set) */
    , 0x2a                                              /* move dx=-1, dy=1, color=none (move only!) */
    , 0x42                                              /* move dx=-2, dy=0, color=none (move only!) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0xd0                                              /* move dx=2, dy=2, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 108: 'l' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x01                                              /* width */
    , 0x0c                                              /* height */
    , 0x11                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 109: 'm' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x09                                              /* width */
    , 0x0c                                              /* height */
    , 0x19                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x05                                              /* y origin */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0x2a                                              /* move dx=-1, dy=1, color=none (move only!) */
    , 0x42                                              /* move dx=-2, dy=0, color=none (move only!) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xae                                              /* move dx=-1, dy=-1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    /* ascii 110: 'n' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x12                                              /* # moves */
    , 0x01                                              /* x origin */
    , 0x09                                              /* y origin */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    /* ascii 111: 'o' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x0f                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x05                                              /* y origin */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    /* ascii 112: 'p' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x15                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x05                                              /* y origin */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x9c                                              /* move dx=0, dy=-3, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x28                                              /* move dx=1, dy=1, color=none (move only!) */
    , 0x40                                              /* move dx=2, dy=0, color=none (move only!) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    /* ascii 113: 'q' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x19                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x08                                              /* y origin */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xe2                                              /* move dx=-3, dy=0, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 114: 'r' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x04                                              /* width */
    , 0x0c                                              /* height */
    , 0x0d                                              /* # moves */
    , 0x04                                              /* x origin */
    , 0x04                                              /* y origin */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xae                                              /* move dx=-1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    /* ascii 115: 's' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x04                                              /* width */
    , 0x0c                                              /* height */
    , 0x0c                                              /* # moves */
    , 0x04                                              /* x origin */
    , 0x05                                              /* y origin */
    , 0xae                                              /* move dx=-1, dy=-1, color=fore (set) */
    , 0xc2                                              /* move dx=-2, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xf8                                              /* move dx=3, dy=3, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xfe                                              /* move dx=-3, dy=-3, color=fore (set) */
    , 0x2a                                              /* move dx=-1, dy=1, color=none (move only!) */
    , 0x10                                              /* move dx=0, dy=2, color=none (move only!) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    /* ascii 116: 't' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x03                                              /* width */
    , 0x0c                                              /* height */
    , 0x0d                                              /* # moves */
    , 0x01                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xd2                                              /* move dx=-2, dy=2, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xae                                              /* move dx=-1, dy=-1, color=fore (set) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 117: 'u' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x16                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x08                                              /* y origin */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x62                                              /* move dx=-3, dy=0, color=none (move only!) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 118: 'v' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x14                                              /* # moves */
    , 0x04                                              /* x origin */
    , 0x08                                              /* y origin */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x62                                              /* move dx=-3, dy=0, color=none (move only!) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    /* ascii 119: 'w' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x09                                              /* width */
    , 0x0c                                              /* height */
    , 0x20                                              /* # moves */
    , 0x08                                              /* x origin */
    , 0x08                                              /* y origin */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x62                                              /* move dx=-3, dy=0, color=none (move only!) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xae                                              /* move dx=-1, dy=-1, color=fore (set) */
    , 0x7e                                              /* move dx=-3, dy=-3, color=none (move only!) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 120: 'x' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x16                                              /* # moves */
    , 0x01                                              /* x origin */
    , 0x09                                              /* y origin */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x2e                                              /* move dx=-1, dy=-1, color=none (move only!) */
    , 0x0c                                              /* move dx=0, dy=-1, color=none (move only!) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0x94                                              /* move dx=0, dy=-2, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0x2a                                              /* move dx=-1, dy=1, color=none (move only!) */
    , 0x08                                              /* move dx=0, dy=1, color=none (move only!) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 121: 'y' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x1c                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x08                                              /* y origin */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x62                                              /* move dx=-3, dy=0, color=none (move only!) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0x2a                                              /* move dx=-1, dy=1, color=none (move only!) */
    , 0x62                                              /* move dx=-3, dy=0, color=none (move only!) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 122: 'z' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x0e                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x04                                              /* y origin */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    , 0xd2                                              /* move dx=-2, dy=2, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xc0                                              /* move dx=2, dy=0, color=fore (set) */
    /* ascii 123: '{' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x03                                              /* width */
    , 0x0c                                              /* height */
    , 0x0f                                              /* # moves */
    , 0x01                                              /* x origin */
    , 0x03                                              /* y origin */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0xd2                                              /* move dx=-2, dy=2, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xd2                                              /* move dx=-2, dy=2, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 124: '|' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x00                                              /* width */
    , 0x0c                                              /* height */
    , 0x05                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x98                                              /* move dx=0, dy=3, color=fore (set) */
    , 0x88                                              /* move dx=0, dy=1, color=fore (set) */
    /* ascii 125: '}' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x03                                              /* width */
    , 0x0c                                              /* height */
    , 0x10                                              /* # moves */
    , 0x00                                              /* x origin */
    , 0x02                                              /* y origin */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xac                                              /* move dx=1, dy=-1, color=fore (set) */
    , 0x90                                              /* move dx=0, dy=2, color=fore (set) */
    , 0xa2                                              /* move dx=-1, dy=0, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0x2c                                              /* move dx=1, dy=-1, color=none (move only!) */
    , 0x20                                              /* move dx=1, dy=0, color=none (move only!) */
    , 0xd2                                              /* move dx=-2, dy=2, color=fore (set) */
    , 0xa8                                              /* move dx=1, dy=1, color=fore (set) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xd2                                              /* move dx=-2, dy=2, color=fore (set) */
    , 0xa0                                              /* move dx=1, dy=0, color=fore (set) */
    /* ascii 126: '~' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x09                                              /* # moves */
    , 0x05                                              /* x origin */
    , 0x04                                              /* y origin */
    , 0x2a                                              /* move dx=-1, dy=1, color=none (move only!) */
    , 0x62                                              /* move dx=-3, dy=0, color=none (move only!) */
    , 0x22                                              /* move dx=-1, dy=0, color=none (move only!) */
    , 0x8c                                              /* move dx=0, dy=-1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    , 0xaa                                              /* move dx=-1, dy=1, color=fore (set) */
    , 0xe0                                              /* move dx=3, dy=0, color=fore (set) */
    /* ascii 127: '<non standard>' */
    , 0x20                                              /* class(bits 5-7) */
    , 0x05                                              /* width */
    , 0x0c                                              /* height */
    , 0x00                                              /* # moves */
};
#endif
