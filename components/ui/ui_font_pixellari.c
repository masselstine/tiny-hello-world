/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --no-compress --font ../../Downloads/Pixellari.ttf --range 32-127 --format lvgl
 ******************************************************************************/

#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl.h"
#endif

#ifndef UI_FONT_PIXELLARI
#define UI_FONT_PIXELLARI 1
#endif

#if UI_FONT_PIXELLARI

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0x3c,

    /* U+0022 "\"" */
    0xde, 0xf7, 0xb0,

    /* U+0023 "#" */
    0x66, 0x66, 0x66, 0xff, 0xff, 0x66, 0x66, 0xff,
    0xff, 0x66, 0x66, 0x66,

    /* U+0024 "$" */
    0x30, 0xc7, 0xff, 0xf3, 0xe7, 0xcf, 0xff, 0xe3,
    0xc,

    /* U+0025 "%" */
    0x30, 0x63, 0xc7, 0x33, 0x71, 0x9b, 0xc, 0xf6,
    0x3f, 0xf8, 0xde, 0x61, 0xb3, 0x1d, 0x99, 0xc7,
    0x8c, 0x18,

    /* U+0026 "&" */
    0x3c, 0x7e, 0xe6, 0xce, 0xec, 0x78, 0x78, 0xfe,
    0xce, 0xc6, 0xff, 0x7f,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0x6f, 0x6d, 0xb6, 0xd9, 0xb0,

    /* U+0029 ")" */
    0xd9, 0xb6, 0xdb, 0x6f, 0x60,

    /* U+002A "*" */
    0x33, 0xff, 0xde, 0xff, 0x30,

    /* U+002B "+" */
    0x30, 0xcf, 0xff, 0x30, 0xc0,

    /* U+002C "," */
    0xf6,

    /* U+002D "-" */
    0xff, 0xf0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0xc, 0x31, 0xc6, 0x38, 0xc3, 0x1c, 0x63, 0x8c,
    0x30,

    /* U+0030 "0" */
    0x7d, 0xff, 0x7e, 0xfd, 0xfa, 0xfd, 0xfb, 0xf7,
    0xfd, 0xf0,

    /* U+0031 "1" */
    0x31, 0xcf, 0x3c, 0x30, 0xc3, 0xc, 0x33, 0xff,
    0xc0,

    /* U+0032 "2" */
    0x7b, 0xfc, 0xc3, 0xc, 0x73, 0x9c, 0xf3, 0xff,
    0xc0,

    /* U+0033 "3" */
    0x7b, 0xfc, 0xc3, 0x1c, 0x61, 0xc3, 0xcf, 0xf7,
    0x80,

    /* U+0034 "4" */
    0xc, 0x38, 0xf3, 0xee, 0xd9, 0xbf, 0xff, 0xc,
    0x18, 0x30,

    /* U+0035 "5" */
    0xff, 0xfc, 0x30, 0xfb, 0xf0, 0xc3, 0xcf, 0xf7,
    0x80,

    /* U+0036 "6" */
    0x7b, 0xfc, 0xf0, 0xfb, 0xfc, 0xf3, 0xcf, 0xf7,
    0x80,

    /* U+0037 "7" */
    0xff, 0xfc, 0x18, 0x71, 0xc7, 0xc, 0x18, 0x30,
    0x60, 0xc0,

    /* U+0038 "8" */
    0x7b, 0xfc, 0xf3, 0x7b, 0xfc, 0xf3, 0xcf, 0xf7,
    0x80,

    /* U+0039 "9" */
    0x7b, 0xfc, 0xf3, 0xfd, 0xf0, 0xc3, 0xcf, 0xf7,
    0x80,

    /* U+003A ":" */
    0xf0, 0xf,

    /* U+003B ";" */
    0xf0, 0xf, 0x60,

    /* U+003C "<" */
    0x3, 0xc3, 0xf3, 0xf3, 0xe0, 0xf8, 0xf, 0xc0,
    0xfc, 0xf,

    /* U+003D "=" */
    0xff, 0xf0, 0x0, 0xff, 0xf0,

    /* U+003E ">" */
    0xf0, 0x3f, 0x3, 0xf0, 0x1f, 0x7, 0xcf, 0xcf,
    0xc3, 0xc0,

    /* U+003F "?" */
    0x7b, 0xfc, 0xc3, 0x1c, 0xe3, 0xc, 0x0, 0xc3,
    0x0,

    /* U+0040 "@" */
    0x3f, 0xc7, 0xfe, 0xe0, 0x7c, 0xf3, 0xdf, 0xbd,
    0x9b, 0xd9, 0xbd, 0x9b, 0xd9, 0xbd, 0xff, 0xcf,
    0xee, 0x0, 0x7f, 0xe3, 0xfe,

    /* U+0041 "A" */
    0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0xff, 0xff, 0xc3,
    0xc3, 0xc3, 0xc3,

    /* U+0042 "B" */
    0xfe, 0xff, 0xc3, 0xc3, 0xff, 0xfe, 0xc3, 0xc3,
    0xc3, 0xff, 0xfe,

    /* U+0043 "C" */
    0x7d, 0xff, 0x1e, 0xc, 0x18, 0x30, 0x60, 0xc7,
    0xfd, 0xf0,

    /* U+0044 "D" */
    0xfe, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xff, 0xfe,

    /* U+0045 "E" */
    0xff, 0xfc, 0x30, 0xff, 0xfc, 0x30, 0xc3, 0xff,
    0xc0,

    /* U+0046 "F" */
    0xff, 0xfc, 0x30, 0xff, 0xfc, 0x30, 0xc3, 0xc,
    0x0,

    /* U+0047 "G" */
    0x7d, 0xff, 0x1e, 0xc, 0x19, 0xf3, 0xe3, 0xc7,
    0xfd, 0xf0,

    /* U+0048 "H" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xff, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3,

    /* U+0049 "I" */
    0xff, 0x66, 0x66, 0x66, 0x6f, 0xf0,

    /* U+004A "J" */
    0x1e, 0x3c, 0x30, 0x60, 0xc1, 0x83, 0x6, 0xcd,
    0xf9, 0xe0,

    /* U+004B "K" */
    0xc3, 0xc7, 0xce, 0xdc, 0xf8, 0xf0, 0xf8, 0xdc,
    0xce, 0xc7, 0xc3,

    /* U+004C "L" */
    0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xff,
    0xc0,

    /* U+004D "M" */
    0xc0, 0xf8, 0x7f, 0x3f, 0xff, 0xde, 0xf3, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x3c, 0xc,

    /* U+004E "N" */
    0xc1, 0xf0, 0xfc, 0x7f, 0x3f, 0xde, 0xef, 0x7f,
    0x9f, 0xc7, 0xe1, 0xf0, 0x60,

    /* U+004F "O" */
    0x7e, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xff, 0x7e,

    /* U+0050 "P" */
    0xfd, 0xff, 0x1e, 0x3c, 0x7f, 0xff, 0x60, 0xc1,
    0x83, 0x0,

    /* U+0051 "Q" */
    0x7e, 0x7f, 0xb0, 0xd8, 0x6c, 0x36, 0x1b, 0xd,
    0x86, 0xc7, 0x7f, 0x9f, 0xe0,

    /* U+0052 "R" */
    0xfe, 0xff, 0xc3, 0xc3, 0xff, 0xfe, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3,

    /* U+0053 "S" */
    0x7e, 0xff, 0xc3, 0xc0, 0xfe, 0x7f, 0x3, 0x3,
    0xc3, 0xff, 0x7e,

    /* U+0054 "T" */
    0xff, 0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18,

    /* U+0055 "U" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xff, 0x7e,

    /* U+0056 "V" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xe7,
    0x7e, 0x3c, 0x18,

    /* U+0057 "W" */
    0xc0, 0xf0, 0x3c, 0xf, 0x33, 0xcc, 0xf3, 0x3c,
    0xcf, 0x33, 0xff, 0xdf, 0xe3, 0x30,

    /* U+0058 "X" */
    0xc3, 0xe7, 0x66, 0x7e, 0x3c, 0x18, 0x3c, 0x7e,
    0x66, 0xe7, 0xc3,

    /* U+0059 "Y" */
    0xc3, 0xe7, 0x66, 0x7e, 0x3c, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18,

    /* U+005A "Z" */
    0xff, 0xff, 0xf0, 0x38, 0x1c, 0xe, 0x3, 0x1,
    0xc0, 0xe0, 0x70, 0x3f, 0xff, 0xfc,

    /* U+005B "[" */
    0xff, 0x6d, 0xb6, 0xdb, 0xf0,

    /* U+005C "\\" */
    0xc3, 0xe, 0x18, 0x70, 0xc3, 0xe, 0x18, 0x70,
    0xc3,

    /* U+005D "]" */
    0xfd, 0xb6, 0xdb, 0x6f, 0xf0,

    /* U+005E "^" */
    0x10, 0x71, 0xf7, 0x7c, 0x60,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0060 "`" */
    0xdd, 0x80,

    /* U+0061 "a" */
    0x7b, 0xfc, 0xf3, 0xcf, 0x3f, 0xdf,

    /* U+0062 "b" */
    0xc1, 0x83, 0x6, 0xef, 0xfc, 0xf1, 0xe3, 0xe7,
    0xff, 0x70,

    /* U+0063 "c" */
    0x7b, 0xfc, 0xf0, 0xc3, 0x3f, 0xde,

    /* U+0064 "d" */
    0x6, 0xc, 0x1b, 0xbf, 0xf9, 0xf1, 0xe3, 0xcf,
    0xfd, 0xd8,

    /* U+0065 "e" */
    0x7b, 0xfc, 0xff, 0xc3, 0x3f, 0xde,

    /* U+0066 "f" */
    0x37, 0x6f, 0xf6, 0x66, 0x66, 0x60,

    /* U+0067 "g" */
    0x77, 0xff, 0x3e, 0x3c, 0x79, 0xff, 0xbb, 0x7,
    0xff, 0xf0,

    /* U+0068 "h" */
    0xc1, 0x83, 0x6, 0xef, 0xfc, 0xf1, 0xe3, 0xc7,
    0x8f, 0x18,

    /* U+0069 "i" */
    0xf3, 0xff, 0xfc,

    /* U+006A "j" */
    0x33, 0x3, 0x33, 0x33, 0x33, 0x33, 0xfe,

    /* U+006B "k" */
    0xc1, 0x83, 0x6, 0x3c, 0xfb, 0xbe, 0x7c, 0xdd,
    0x9f, 0x18,

    /* U+006C "l" */
    0xff, 0xff, 0xfc,

    /* U+006D "m" */
    0xff, 0xbf, 0xfc, 0xcf, 0x33, 0xcc, 0xf3, 0x3c,
    0xcf, 0x33,

    /* U+006E "n" */
    0xfb, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3,

    /* U+006F "o" */
    0x7b, 0xfc, 0xf3, 0xcf, 0x3f, 0xde,

    /* U+0070 "p" */
    0xdd, 0xff, 0x9e, 0x3c, 0x7c, 0xff, 0xee, 0xc1,
    0x83, 0x0,

    /* U+0071 "q" */
    0x77, 0xff, 0x3e, 0x3c, 0x79, 0xff, 0xbb, 0x6,
    0xc, 0x18,

    /* U+0072 "r" */
    0xfb, 0xfc, 0xf0, 0xc3, 0xc, 0x30,

    /* U+0073 "s" */
    0x7f, 0xfc, 0x3e, 0x7c, 0x3f, 0xfe,

    /* U+0074 "t" */
    0x66, 0x6f, 0xf6, 0x66, 0x67, 0x30,

    /* U+0075 "u" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3f, 0xdf,

    /* U+0076 "v" */
    0xcf, 0x3c, 0xf3, 0xcf, 0xf7, 0x8c,

    /* U+0077 "w" */
    0xcc, 0xf3, 0x3c, 0xcf, 0x33, 0xcc, 0xf3, 0x3f,
    0xfd, 0xff,

    /* U+0078 "x" */
    0xcf, 0xf7, 0x8c, 0x31, 0xef, 0xf3,

    /* U+0079 "y" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3f, 0xde, 0x3b, 0xce,
    0x0,

    /* U+007A "z" */
    0xff, 0xf1, 0x8c, 0x31, 0x8f, 0xff,

    /* U+007B "{" */
    0x39, 0xd8, 0xc6, 0x63, 0xc, 0x63, 0xe, 0x70,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xc0,

    /* U+007D "}" */
    0xe7, 0xc, 0x63, 0xc, 0x66, 0x31, 0xb9, 0xc0,

    /* U+007E "~" */
    0x73, 0xff, 0xce
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 80, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 64, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 112, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 7, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 144, .box_w = 6, .box_h = 12, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 28, .adv_w = 224, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 160, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 64, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 59, .adv_w = 80, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 64, .adv_w = 96, .box_w = 3, .box_h = 12, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 69, .adv_w = 112, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 74, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 79, .adv_w = 64, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 80, .adv_w = 128, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 82, .adv_w = 64, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 112, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 144, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 144, .box_w = 6, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 144, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 139, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 144, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 64, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 64, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 190, .adv_w = 176, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 200, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 205, .adv_w = 176, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 215, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 224, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 245, .adv_w = 160, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 160, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 267, .adv_w = 160, .box_w = 7, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 176, .box_w = 8, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 144, .box_w = 6, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 144, .box_w = 6, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 306, .adv_w = 160, .box_w = 7, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 160, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 96, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 343, .adv_w = 160, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 363, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 176, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 176, .box_w = 8, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 401, .adv_w = 144, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 411, .adv_w = 192, .box_w = 9, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 424, .adv_w = 160, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 435, .adv_w = 160, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 160, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 457, .adv_w = 176, .box_w = 8, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 468, .adv_w = 176, .box_w = 8, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 160, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 504, .adv_w = 160, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 515, .adv_w = 176, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 529, .adv_w = 80, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 534, .adv_w = 112, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 543, .adv_w = 96, .box_w = 3, .box_h = 12, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 548, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 553, .adv_w = 144, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 555, .adv_w = 80, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 557, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 563, .adv_w = 144, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 573, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 579, .adv_w = 144, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 589, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 595, .adv_w = 96, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 601, .adv_w = 144, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 611, .adv_w = 144, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 621, .adv_w = 64, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 624, .adv_w = 64, .box_w = 4, .box_h = 14, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 631, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 641, .adv_w = 64, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 644, .adv_w = 192, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 654, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 660, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 666, .adv_w = 144, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 676, .adv_w = 144, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 686, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 692, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 698, .adv_w = 80, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 704, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 710, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 716, .adv_w = 192, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 726, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 732, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 741, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 747, .adv_w = 96, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 755, .adv_w = 64, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 759, .adv_w = 96, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 767, .adv_w = 160, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_pixellari = {
#else
lv_font_t ui_font_pixellari = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 15,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_PIXELLARI*/

