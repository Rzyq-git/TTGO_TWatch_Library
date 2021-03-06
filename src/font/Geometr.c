#include "../lvgl/lvgl.h"

/*******************************************************************************
 * Size: 20 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef GEOMETR
#define GEOMETR 1
#endif

#if GEOMETR

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */

    /* U+21 "!" */
    0x6d, 0xb6, 0xdb, 0x6c, 0xf, 0xf8,

    /* U+22 "\"" */
    0x99, 0x99, 0x90,

    /* U+23 "#" */
    0x3, 0x10, 0xc, 0xc0, 0x23, 0x1, 0x98, 0x7f,
    0xfc, 0x31, 0x0, 0xcc, 0x2, 0x30, 0xff, 0xf8,
    0x66, 0x1, 0x18, 0xc, 0x40, 0x33, 0x0, 0x8c,
    0x0,

    /* U+24 "$" */
    0x8, 0x1e, 0x1f, 0xdd, 0x7c, 0x96, 0x41, 0xa0,
    0x78, 0x1f, 0x5, 0xc2, 0x69, 0x3e, 0xbb, 0xf8,
    0xf8, 0x10, 0x8, 0x0,

    /* U+25 "%" */
    0x3c, 0x6, 0x8, 0x40, 0x82, 0x4, 0x20, 0x40,
    0x8c, 0x8, 0x11, 0x1, 0x86, 0x60, 0x10, 0x98,
    0x1, 0xe2, 0x3c, 0x0, 0xc8, 0x40, 0x32, 0x4,
    0x4, 0x40, 0x81, 0x88, 0x10, 0x21, 0x86, 0xc,
    0x10, 0x83, 0x1, 0xe0,

    /* U+26 "&" */
    0xe, 0x0, 0xfe, 0x3, 0x18, 0xc, 0x60, 0x3b,
    0x80, 0x7c, 0x1, 0xe0, 0x1f, 0xc4, 0x63, 0x9b,
    0x7, 0xcc, 0xf, 0x30, 0x38, 0xe1, 0xf1, 0xfe,
    0xe3, 0xe1, 0xc0,

    /* U+27 "'" */
    0xf8,

    /* U+28 "(" */
    0x1c, 0xe3, 0x18, 0x63, 0x8c, 0x30, 0xc3, 0xc,
    0x38, 0x61, 0x83, 0xe, 0x1c,

    /* U+29 ")" */
    0xe1, 0xc3, 0x6, 0x18, 0x70, 0xc3, 0xc, 0x30,
    0xc7, 0x18, 0x63, 0x1c, 0xe0,

    /* U+2A "*" */
    0x8, 0x4, 0x2, 0x19, 0x33, 0xe0, 0xa1, 0xdc,
    0x44,

    /* U+2B "+" */
    0x4, 0x0, 0x80, 0x10, 0x2, 0x0, 0x41, 0xff,
    0xc1, 0x0, 0x20, 0x4, 0x0, 0x80, 0x10, 0x0,

    /* U+2C "," */
    0x39, 0x9c, 0xc6, 0x60,

    /* U+2D "-" */
    0xff, 0xc0,

    /* U+2E "." */
    0xff, 0x80,

    /* U+2F "/" */
    0x3, 0x2, 0x2, 0x6, 0x4, 0xc, 0xc, 0x8,
    0x18, 0x10, 0x10, 0x30, 0x20, 0x20, 0x60, 0x40,
    0x40, 0x80,

    /* U+30 "0" */
    0x1c, 0x1f, 0x18, 0xcc, 0x6c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x6c, 0x66, 0x31, 0xf0,
    0x70,

    /* U+31 "1" */
    0xff, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0x8c, 0x60,

    /* U+32 "2" */
    0x1f, 0xf, 0xe7, 0x1d, 0x83, 0x60, 0xc0, 0x30,
    0x1c, 0x6, 0x3, 0x1, 0xc0, 0xe0, 0x70, 0x18,
    0xf, 0xf7, 0xfc,

    /* U+33 "3" */
    0x3e, 0x3f, 0xb0, 0xe0, 0x30, 0x18, 0x1c, 0x3c,
    0x1e, 0x3, 0x80, 0xc0, 0x78, 0x3e, 0x3b, 0xf8,
    0xf8,

    /* U+34 "4" */
    0x0, 0x80, 0x60, 0x38, 0xe, 0x7, 0x83, 0x60,
    0x98, 0x66, 0x31, 0x98, 0x67, 0xff, 0xff, 0x1,
    0x80, 0x60, 0x18,

    /* U+35 "5" */
    0x1f, 0xc7, 0xf1, 0x80, 0x60, 0x30, 0xf, 0xc3,
    0xf8, 0x7, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x41,
    0x9f, 0xe3, 0xe0,

    /* U+36 "6" */
    0x7, 0x7, 0x7, 0x3, 0x3, 0x3, 0xf1, 0xfd,
    0xc7, 0xc1, 0xe0, 0xf0, 0x78, 0x36, 0x33, 0xf8,
    0x78,

    /* U+37 "7" */
    0xff, 0xff, 0xe0, 0x38, 0xc, 0x3, 0x1, 0xc0,
    0x60, 0x38, 0xc, 0x7, 0x1, 0x80, 0xe0, 0x30,
    0x1c, 0x6, 0x0,

    /* U+38 "8" */
    0x3e, 0x3f, 0xb8, 0xf8, 0x3c, 0x1f, 0x1d, 0xfc,
    0xfe, 0xe3, 0xe0, 0xf0, 0x78, 0x3e, 0x3b, 0xf8,
    0xf8,

    /* U+39 "9" */
    0x3c, 0x3f, 0x98, 0xd8, 0x3c, 0x1e, 0xf, 0x7,
    0xc7, 0x7f, 0x1f, 0x81, 0x81, 0x81, 0xc1, 0xc1,
    0xc0,

    /* U+3A ":" */
    0xff, 0x80, 0x0, 0xff, 0x80,

    /* U+3B ";" */
    0x39, 0xce, 0x0, 0x0, 0xe6, 0x73, 0x19, 0x80,

    /* U+3C "<" */
    0x0, 0x10, 0xf, 0x3, 0xc1, 0xe0, 0x78, 0xe,
    0x0, 0x78, 0x1, 0xe0, 0x3, 0xc0, 0xf, 0x0,
    0x10,

    /* U+3D "=" */
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xf0,

    /* U+3E ">" */
    0x80, 0xf, 0x0, 0x3c, 0x0, 0x78, 0x1, 0xe0,
    0x7, 0x1, 0xe0, 0x78, 0x3c, 0xf, 0x0, 0x80,
    0x0,

    /* U+3F "?" */
    0x3e, 0x1f, 0xee, 0x1f, 0x3, 0x0, 0xc0, 0x70,
    0xf8, 0x3c, 0xc, 0x3, 0x0, 0x0, 0x0, 0x1c,
    0x7, 0x1, 0xc0,

    /* U+40 "@" */
    0x1, 0xf8, 0x3, 0x81, 0x81, 0x80, 0x10, 0x80,
    0x2, 0x60, 0x0, 0xd0, 0x7a, 0x1c, 0x71, 0x86,
    0x18, 0x61, 0x8c, 0x18, 0x63, 0x4, 0x28, 0xc3,
    0xa, 0x38, 0xcc, 0x47, 0x9e, 0x18, 0x0, 0x3,
    0x0, 0x10, 0x30, 0x38, 0x3, 0xf8, 0x0,

    /* U+41 "A" */
    0x3, 0x0, 0x1e, 0x0, 0x78, 0x3, 0x70, 0xc,
    0xc0, 0x33, 0x1, 0x8e, 0x6, 0x18, 0x38, 0x70,
    0xc1, 0xc3, 0xff, 0x1f, 0xfe, 0x60, 0x39, 0x80,
    0x6e, 0x1, 0xc0,

    /* U+42 "B" */
    0xff, 0x1f, 0xf3, 0x7, 0x60, 0x6c, 0xd, 0x83,
    0xbf, 0xe7, 0xfe, 0xc0, 0xf8, 0xf, 0x1, 0xe0,
    0x3c, 0xf, 0xff, 0xbf, 0xc0,

    /* U+43 "C" */
    0xf, 0x83, 0xfe, 0x38, 0x66, 0x2, 0x60, 0xc,
    0x0, 0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0, 0x60,
    0x6, 0x0, 0x38, 0x61, 0xfe, 0xf, 0xc0,

    /* U+44 "D" */
    0xff, 0x87, 0xfe, 0x30, 0x39, 0x80, 0xec, 0x3,
    0x60, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0xd, 0x80, 0xec, 0xe, 0x7f, 0xe3, 0xfc,
    0x0,

    /* U+45 "E" */
    0xff, 0xff, 0xff, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x3f, 0xff, 0xff, 0xc0, 0x18, 0x3, 0x0, 0x60,
    0xc, 0x1, 0xff, 0xff, 0xf8,

    /* U+46 "F" */
    0xff, 0xff, 0xff, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x3f, 0xf7, 0xfe, 0xc0, 0x18, 0x3, 0x0, 0x60,
    0xc, 0x1, 0x80, 0x30, 0x0,

    /* U+47 "G" */
    0x7, 0xc0, 0x7f, 0xc3, 0x83, 0x9c, 0x4, 0x60,
    0x3, 0x0, 0xc, 0x0, 0x30, 0x3f, 0xc0, 0xff,
    0x0, 0x36, 0x0, 0xdc, 0x6, 0x38, 0x30, 0x7f,
    0x80, 0xfc, 0x0,

    /* U+48 "H" */
    0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xff, 0xff, 0xff, 0xc0, 0x3c, 0x3, 0xc0,
    0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x30,

    /* U+49 "I" */
    0xff, 0xff, 0xff, 0xfc,

    /* U+4A "J" */
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
    0x3, 0x3, 0x3, 0x43, 0xe7, 0x7e, 0x3c,

    /* U+4B "K" */
    0xc0, 0xe6, 0xe, 0x30, 0xe1, 0x8e, 0xc, 0xe0,
    0x6e, 0x3, 0x60, 0x1f, 0x0, 0xdc, 0x6, 0x70,
    0x31, 0xc1, 0x87, 0xc, 0x1c, 0x60, 0x73, 0x1,
    0xc0,

    /* U+4C "L" */
    0xc0, 0x18, 0x3, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x60,
    0xc, 0x1, 0xff, 0xff, 0xf8,

    /* U+4D "M" */
    0x1c, 0xe, 0x7, 0x3, 0x83, 0xc0, 0xf0, 0xf0,
    0x3c, 0x36, 0x1b, 0xd, 0x86, 0xc3, 0x61, 0xb1,
    0x8c, 0xce, 0x63, 0x31, 0x98, 0xcc, 0x66, 0x12,
    0x19, 0x87, 0x86, 0xe1, 0xe1, 0xf0, 0x70, 0x3c,
    0xc, 0xc,

    /* U+4E "N" */
    0xe0, 0x7c, 0xf, 0xc1, 0xf8, 0x3f, 0x87, 0xb8,
    0xf3, 0x1e, 0x73, 0xc6, 0x78, 0xef, 0xf, 0xe0,
    0xfc, 0x1f, 0x81, 0xf0, 0x38,

    /* U+4F "O" */
    0xf, 0x81, 0xff, 0x1e, 0x3c, 0xc0, 0x6e, 0x3,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf8, 0xe, 0xc0, 0x67, 0x7, 0x1f, 0xf0, 0x3e,
    0x0,

    /* U+50 "P" */
    0xff, 0x1f, 0xfb, 0x3, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x3f, 0xfe, 0xff, 0x18, 0x3, 0x0, 0x60,
    0xc, 0x1, 0x80, 0x30, 0x0,

    /* U+51 "Q" */
    0xf, 0x81, 0xff, 0x1e, 0x3c, 0xc0, 0x6e, 0x3,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x38,
    0xf8, 0xee, 0xc3, 0xe7, 0xf, 0x1f, 0xf0, 0x3f,
    0xc0, 0x7,

    /* U+52 "R" */
    0xff, 0xf, 0xfc, 0xc0, 0xec, 0x6, 0xc0, 0x6c,
    0x6, 0xc0, 0xef, 0xfc, 0xff, 0x8c, 0xe0, 0xc7,
    0xc, 0x38, 0xc1, 0xcc, 0xe, 0xc0, 0x70,

    /* U+53 "S" */
    0x1e, 0xf, 0xc7, 0x19, 0x80, 0x60, 0x1c, 0x3,
    0xc0, 0x3c, 0x3, 0x80, 0x34, 0xd, 0x83, 0x71,
    0xcf, 0xe1, 0xf0,

    /* U+54 "T" */
    0xff, 0xff, 0xff, 0x6, 0x0, 0x60, 0x6, 0x0,
    0x60, 0x6, 0x0, 0x60, 0x6, 0x0, 0x60, 0x6,
    0x0, 0x60, 0x6, 0x0, 0x60, 0x6, 0x0,

    /* U+55 "U" */
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xf, 0x1, 0xf0,
    0x77, 0x1c, 0x7f, 0x7, 0xc0,

    /* U+56 "V" */
    0xe0, 0xd, 0x80, 0x66, 0x1, 0x9c, 0xe, 0x30,
    0x30, 0xc0, 0xc1, 0x86, 0x6, 0x18, 0x1c, 0xe0,
    0x33, 0x0, 0xcc, 0x1, 0xe0, 0x7, 0x80, 0x1e,
    0x0, 0x30, 0x0,

    /* U+57 "W" */
    0xc0, 0xc0, 0xf0, 0x78, 0x36, 0x1e, 0x19, 0x87,
    0x86, 0x61, 0x21, 0x98, 0xcc, 0x63, 0x33, 0x30,
    0xcc, 0xcc, 0x32, 0x13, 0xd, 0x86, 0xc1, 0xe1,
    0xe0, 0x78, 0x78, 0x1c, 0xe, 0x7, 0x3, 0x80,
    0xc0, 0xc0,

    /* U+58 "X" */
    0x70, 0x1c, 0x70, 0x70, 0x70, 0xc0, 0x63, 0x0,
    0xee, 0x0, 0xf8, 0x0, 0xe0, 0x1, 0xc0, 0x7,
    0xc0, 0x1d, 0xc0, 0x31, 0xc0, 0xc3, 0x83, 0x83,
    0x8e, 0x3, 0xb8, 0x3, 0x80,

    /* U+59 "Y" */
    0xe0, 0x1d, 0xc0, 0x63, 0x3, 0xe, 0x1c, 0x1c,
    0x60, 0x33, 0x0, 0xfc, 0x1, 0xe0, 0x3, 0x0,
    0xc, 0x0, 0x30, 0x0, 0xc0, 0x3, 0x0, 0xc,
    0x0, 0x30, 0x0,

    /* U+5A "Z" */
    0x7f, 0xef, 0xf8, 0x7, 0x0, 0xc0, 0x30, 0xe,
    0x1, 0x80, 0x70, 0xc, 0x3, 0x80, 0x60, 0x1c,
    0x7, 0x0, 0xff, 0xff, 0xf8,

    /* U+5B "[" */
    0xfb, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xc,
    0x30, 0xc3, 0xc, 0x30, 0xf8,

    /* U+5C "\\" */
    0x80, 0x40, 0x40, 0x60, 0x20, 0x20, 0x30, 0x10,
    0x10, 0x18, 0x8, 0xc, 0xc, 0x4, 0x6, 0x2,
    0x2, 0x3,

    /* U+5D "]" */
    0xfc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30,
    0xc3, 0xc, 0x30, 0xc3, 0xfc,

    /* U+5E "^" */
    0x6, 0x0, 0xf0, 0x19, 0x82, 0x4, 0x40, 0x20,

    /* U+5F "_" */
    0xff, 0xc0,

    /* U+60 "`" */
    0xc6, 0x23,

    /* U+61 "a" */
    0x3d, 0xbf, 0xd8, 0xfc, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xe3, 0xb1, 0xdf, 0xe7, 0xb0,

    /* U+62 "b" */
    0xc0, 0x60, 0x30, 0x18, 0xd, 0xe7, 0xfb, 0x8d,
    0x87, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x3f, 0x1b,
    0xfd, 0xbc,

    /* U+63 "c" */
    0x1f, 0x1f, 0xdc, 0x3c, 0xc, 0x6, 0x3, 0x1,
    0x80, 0xe0, 0x38, 0x4f, 0xe3, 0xe0,

    /* U+64 "d" */
    0x1, 0x80, 0xc0, 0x60, 0x33, 0xdb, 0xfd, 0x8f,
    0xc3, 0xc1, 0xe0, 0xf0, 0x78, 0x3e, 0x1b, 0x1d,
    0xfe, 0x7b,

    /* U+65 "e" */
    0x1e, 0xf, 0xc6, 0x1b, 0x87, 0xc0, 0xff, 0xff,
    0xff, 0x0, 0xc0, 0x18, 0x63, 0xf8, 0x78,

    /* U+66 "f" */
    0x1c, 0x78, 0xc1, 0x83, 0x1f, 0xbf, 0x18, 0x30,
    0x60, 0xc1, 0x83, 0x6, 0xc, 0x18,

    /* U+67 "g" */
    0x3d, 0xbf, 0xd8, 0xfc, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xe1, 0xb1, 0xdf, 0xe7, 0xb0, 0x1f, 0x19,
    0xfc, 0x7c,

    /* U+68 "h" */
    0xc0, 0x60, 0x30, 0x18, 0xc, 0xe6, 0xfb, 0xcf,
    0xc3, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf,
    0x7, 0x83,

    /* U+69 "i" */
    0xf0, 0xff, 0xff, 0xff,

    /* U+6A "j" */
    0xf0, 0xff, 0xff, 0xff, 0xff,

    /* U+6B "k" */
    0xc0, 0x60, 0x30, 0x18, 0xc, 0x76, 0x33, 0x31,
    0xb0, 0xf0, 0x7c, 0x37, 0x19, 0x8c, 0xe6, 0x33,
    0xd, 0x87,

    /* U+6C "l" */
    0xff, 0xff, 0xff, 0xff,

    /* U+6D "m" */
    0xdc, 0x7b, 0xfb, 0xee, 0x79, 0xf8, 0xe3, 0xc3,
    0xf, 0xc, 0x3c, 0x30, 0xf0, 0xc3, 0xc3, 0xf,
    0xc, 0x3c, 0x30, 0xf0, 0xc3,

    /* U+6E "n" */
    0xce, 0x6f, 0xbc, 0xfc, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x30,

    /* U+6F "o" */
    0x1e, 0xf, 0xc7, 0x3b, 0x87, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xe1, 0xd8, 0x63, 0xf0, 0x78,

    /* U+70 "p" */
    0xde, 0x7f, 0xb8, 0xd8, 0x7c, 0x1e, 0xf, 0x7,
    0x83, 0xc3, 0xf1, 0xbf, 0xdb, 0xcc, 0x6, 0x3,
    0x1, 0x80,

    /* U+71 "q" */
    0x3d, 0xbf, 0xd8, 0xfc, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xe3, 0xb1, 0xdf, 0xe7, 0xb0, 0x18, 0xc,
    0x6, 0x3,

    /* U+72 "r" */
    0xdf, 0xfe, 0x38, 0xc3, 0xc, 0x30, 0xc3, 0xc,
    0x30,

    /* U+73 "s" */
    0x78, 0xfe, 0xc6, 0xc0, 0xf0, 0x7c, 0xe, 0x3,
    0x43, 0xc7, 0x7e, 0x3c,

    /* U+74 "t" */
    0x30, 0xc3, 0xc, 0xff, 0xf3, 0xc, 0x30, 0xc3,
    0xc, 0x30, 0xc3, 0xc,

    /* U+75 "u" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xf1, 0xdf, 0xc7, 0xc0,

    /* U+76 "v" */
    0xe0, 0xf8, 0x76, 0x19, 0x86, 0x73, 0x8c, 0xc3,
    0x30, 0xec, 0x1e, 0x7, 0x81, 0xe0, 0x30,

    /* U+77 "w" */
    0xc3, 0x87, 0x87, 0xd, 0x8e, 0x33, 0x1c, 0x66,
    0x6c, 0xcc, 0xd9, 0x89, 0xb6, 0x1a, 0x2c, 0x34,
    0x58, 0x78, 0xf0, 0x71, 0xc0, 0xe3, 0x80,

    /* U+78 "x" */
    0xe1, 0xdc, 0x63, 0x38, 0xfc, 0x1e, 0x7, 0x81,
    0xe0, 0x7c, 0x3b, 0x1c, 0xe6, 0x1b, 0x87,

    /* U+79 "y" */
    0xe0, 0xd8, 0x66, 0x19, 0xc6, 0x33, 0xc, 0xc3,
    0xb0, 0x78, 0x1e, 0x7, 0x80, 0xc0, 0x30, 0x1c,
    0x6, 0x1, 0x80, 0xe0,

    /* U+7A "z" */
    0x7f, 0xbf, 0x81, 0xc0, 0xc0, 0xe0, 0x60, 0x70,
    0x70, 0x38, 0x38, 0x1f, 0xff, 0xf0,

    /* U+7B "{" */
    0xe, 0x30, 0x60, 0xc1, 0x83, 0x6, 0xc, 0x31,
    0xc0, 0xe0, 0xc1, 0x83, 0x6, 0xc, 0x18, 0x1c,

    /* U+7C "|" */
    0xff, 0xff, 0xf0,

    /* U+7D "}" */
    0xe0, 0x60, 0xc1, 0x83, 0x6, 0xc, 0x18, 0x18,
    0x1c, 0xe1, 0x83, 0x6, 0xc, 0x18, 0x31, 0xc0,

    /* U+7E "~" */
    0x7c, 0x1c, 0x3e, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_h = 0, .box_w = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 87, .box_h = 0, .box_w = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 94, .box_h = 15, .box_w = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 96, .box_h = 5, .box_w = 4, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 9, .adv_w = 246, .box_h = 14, .box_w = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 173, .box_h = 17, .box_w = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 54, .adv_w = 325, .box_h = 15, .box_w = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 234, .box_h = 15, .box_w = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 50, .box_h = 5, .box_w = 1, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 118, .adv_w = 136, .box_h = 17, .box_w = 6, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 131, .adv_w = 136, .box_h = 17, .box_w = 6, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 144, .adv_w = 144, .box_h = 8, .box_w = 9, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 153, .adv_w = 267, .box_h = 11, .box_w = 11, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 87, .box_h = 6, .box_w = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 173, .adv_w = 117, .box_h = 2, .box_w = 5, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 175, .adv_w = 87, .box_h = 3, .box_w = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 177, .adv_w = 100, .box_h = 18, .box_w = 8, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 195, .adv_w = 173, .box_h = 15, .box_w = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 173, .box_h = 15, .box_w = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 173, .box_h = 15, .box_w = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 173, .box_h = 15, .box_w = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 258, .adv_w = 173, .box_h = 15, .box_w = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 173, .box_h = 15, .box_w = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 173, .box_h = 15, .box_w = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 173, .box_h = 15, .box_w = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 173, .box_h = 15, .box_w = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 173, .box_h = 15, .box_w = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 94, .box_h = 11, .box_w = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 371, .adv_w = 94, .box_h = 12, .box_w = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 379, .adv_w = 267, .box_h = 11, .box_w = 12, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 396, .adv_w = 267, .box_h = 5, .box_w = 12, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 404, .adv_w = 267, .box_h = 11, .box_w = 12, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 421, .adv_w = 193, .box_h = 15, .box_w = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 320, .box_h = 17, .box_w = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 479, .adv_w = 237, .box_h = 15, .box_w = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 506, .adv_w = 239, .box_h = 15, .box_w = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 527, .adv_w = 213, .box_h = 15, .box_w = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 550, .adv_w = 266, .box_h = 15, .box_w = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 575, .adv_w = 254, .box_h = 15, .box_w = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 596, .adv_w = 227, .box_h = 15, .box_w = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 617, .adv_w = 250, .box_h = 15, .box_w = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 644, .adv_w = 267, .box_h = 15, .box_w = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 667, .adv_w = 113, .box_h = 15, .box_w = 2, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 180, .box_h = 15, .box_w = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 686, .adv_w = 238, .box_h = 15, .box_w = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 711, .adv_w = 218, .box_h = 15, .box_w = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 732, .adv_w = 326, .box_h = 15, .box_w = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 766, .adv_w = 257, .box_h = 15, .box_w = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 787, .adv_w = 243, .box_h = 15, .box_w = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 812, .adv_w = 238, .box_h = 15, .box_w = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 833, .adv_w = 243, .box_h = 16, .box_w = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 859, .adv_w = 242, .box_h = 15, .box_w = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 882, .adv_w = 195, .box_h = 15, .box_w = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 901, .adv_w = 221, .box_h = 15, .box_w = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 924, .adv_w = 253, .box_h = 15, .box_w = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 945, .adv_w = 235, .box_h = 15, .box_w = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 972, .adv_w = 320, .box_h = 15, .box_w = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1006, .adv_w = 238, .box_h = 15, .box_w = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1035, .adv_w = 231, .box_h = 15, .box_w = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1062, .adv_w = 203, .box_h = 15, .box_w = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1083, .adv_w = 136, .box_h = 17, .box_w = 6, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 1096, .adv_w = 100, .box_h = 18, .box_w = 8, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 1114, .adv_w = 136, .box_h = 17, .box_w = 6, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1127, .adv_w = 320, .box_h = 5, .box_w = 12, .ofs_x = 4, .ofs_y = 9},
    {.bitmap_index = 1135, .adv_w = 160, .box_h = 1, .box_w = 10, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 1137, .adv_w = 160, .box_h = 4, .box_w = 4, .ofs_x = 2, .ofs_y = 13},
    {.bitmap_index = 1139, .adv_w = 188, .box_h = 12, .box_w = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1153, .adv_w = 196, .box_h = 16, .box_w = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1171, .adv_w = 167, .box_h = 12, .box_w = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1185, .adv_w = 196, .box_h = 16, .box_w = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1203, .adv_w = 178, .box_h = 12, .box_w = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1218, .adv_w = 110, .box_h = 16, .box_w = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1232, .adv_w = 193, .box_h = 16, .box_w = 9, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1250, .adv_w = 193, .box_h = 16, .box_w = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1268, .adv_w = 87, .box_h = 16, .box_w = 2, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1272, .adv_w = 87, .box_h = 20, .box_w = 2, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 1277, .adv_w = 178, .box_h = 16, .box_w = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1295, .adv_w = 87, .box_h = 16, .box_w = 2, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1299, .adv_w = 289, .box_h = 12, .box_w = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1320, .adv_w = 193, .box_h = 12, .box_w = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1334, .adv_w = 178, .box_h = 12, .box_w = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1349, .adv_w = 196, .box_h = 16, .box_w = 9, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 1367, .adv_w = 196, .box_h = 16, .box_w = 9, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1385, .adv_w = 117, .box_h = 12, .box_w = 6, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1394, .adv_w = 162, .box_h = 12, .box_w = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1406, .adv_w = 103, .box_h = 16, .box_w = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1418, .adv_w = 193, .box_h = 12, .box_w = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1432, .adv_w = 167, .box_h = 12, .box_w = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1447, .adv_w = 256, .box_h = 12, .box_w = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1470, .adv_w = 158, .box_h = 12, .box_w = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1485, .adv_w = 165, .box_h = 16, .box_w = 10, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1505, .adv_w = 151, .box_h = 12, .box_w = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1519, .adv_w = 160, .box_h = 18, .box_w = 7, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1535, .adv_w = 160, .box_h = 20, .box_w = 1, .ofs_x = 4, .ofs_y = -5},
    {.bitmap_index = 1538, .adv_w = 160, .box_h = 18, .box_w = 7, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 1554, .adv_w = 267, .box_h = 3, .box_w = 12, .ofs_x = 2, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY,
        .glyph_id_start = 1, .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    14, 36,
    14, 40,
    14, 43,
    14, 48,
    14, 50,
    14, 53,
    14, 55,
    14, 56,
    14, 58,
    14, 80,
    34, 13,
    34, 15,
    34, 27,
    34, 28,
    34, 53,
    34, 55,
    34, 56,
    34, 58,
    34, 87,
    34, 88,
    34, 90,
    35, 14,
    37, 34,
    37, 55,
    37, 56,
    37, 58,
    39, 13,
    39, 15,
    39, 27,
    39, 28,
    39, 34,
    39, 66,
    39, 83,
    39, 86,
    40, 14,
    40, 53,
    40, 58,
    44, 34,
    44, 36,
    44, 48,
    44, 56,
    44, 58,
    44, 66,
    44, 70,
    44, 80,
    44, 86,
    44, 90,
    45, 14,
    45, 48,
    45, 53,
    45, 54,
    45, 55,
    45, 56,
    45, 58,
    45, 90,
    48, 13,
    48, 14,
    48, 15,
    48, 27,
    48, 28,
    48, 57,
    48, 58,
    49, 13,
    49, 14,
    49, 15,
    49, 27,
    49, 28,
    49, 34,
    49, 66,
    49, 70,
    49, 74,
    49, 79,
    49, 80,
    49, 83,
    49, 84,
    49, 86,
    50, 14,
    51, 13,
    51, 14,
    51, 15,
    51, 66,
    51, 70,
    51, 80,
    51, 86,
    53, 13,
    53, 14,
    53, 15,
    53, 27,
    53, 28,
    53, 34,
    53, 36,
    53, 66,
    53, 68,
    53, 70,
    53, 80,
    53, 83,
    53, 84,
    53, 86,
    53, 88,
    53, 90,
    55, 13,
    55, 14,
    55, 15,
    55, 27,
    55, 28,
    55, 34,
    55, 66,
    55, 70,
    55, 80,
    55, 86,
    56, 13,
    56, 14,
    56, 15,
    56, 27,
    56, 28,
    56, 34,
    56, 66,
    56, 70,
    56, 80,
    56, 83,
    56, 86,
    57, 36,
    57, 48,
    58, 13,
    58, 14,
    58, 15,
    58, 27,
    58, 28,
    58, 34,
    58, 36,
    58, 48,
    58, 66,
    58, 70,
    58, 74,
    58, 80,
    58, 86,
    59, 14,
    71, 13,
    71, 15,
    76, 66,
    76, 70,
    76, 80,
    76, 86,
    80, 14,
    83, 13,
    83, 14,
    83, 15,
    87, 13,
    87, 15,
    88, 13,
    88, 15,
    90, 13,
    90, 15
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static int8_t kern_pair_values[] =
{
    6, 6, 6, 6, 6, -17, -14, -7,
    -13, 6, 10, 10, 6, 6, -9, -6,
    -6, -6, -6, -6, -6, 9, -6, -6,
    -6, -6, -46, -46, -13, -13, -6, -6,
    -9, -6, 7, -6, -6, -6, -11, -11,
    -6, -11, -6, -6, -6, -6, -11, -11,
    -6, -17, -6, -17, -11, -19, -11, -13,
    6, -13, 6, 6, -6, -6, -59, -19,
    -59, -20, -20, -14, -11, -11, -6, -6,
    -11, -6, -6, -6, 6, 6, -9, 6,
    -6, -6, -6, -6, -29, -17, -29, -32,
    -32, -9, -6, -26, -26, -26, -26, -26,
    -25, -26, -26, -26, -29, -14, -29, -16,
    -16, -6, -11, -11, -11, -11, -16, -7,
    -16, -13, -13, -6, -9, -9, -9, -9,
    -6, -6, -6, -42, -13, -42, -34, -34,
    -6, -6, -6, -20, -20, -6, -20, -20,
    -6, -6, -6, -6, -6, -6, -6, 6,
    -20, -6, -20, -19, -19, -17, -17, -16,
    -16
};

/*Collect the kern pair's data in one place*/
static lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 153,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .cmap_num = 1,
    .bpp = 1,

    .kern_scale = 16,
    .kern_dsc = &kern_pairs,
    .kern_classes = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t Geometr = {
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .line_height = 22,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
};

#endif /*#if GEOMETR*/

