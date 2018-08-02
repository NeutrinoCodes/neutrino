/// @file

#include "data.hpp"

#define ASCII_33 33
#define ASCII_126 126
#define ASCII_SCALE 0.01
#define ASCII_SPACE_LITTLE 4
#define ASCII_SPACE_BIG 16

int font_vertex[3646] = {
/* Ascii 33 */
   5,  21,   5,   7,   5,   2,   4,   1,   4,   1,   5,   0,   5,   0,   6,   1,
   6,   1,   5,   2,

/* Ascii 34 */
   4,  21,   4,  14,  12,  21,  12,  14,

/* Ascii 35 */
  11,  25,   4,  -7,  17,  25,  10,  -7,   4,  12,  18,  12,   3,   6,  17,   6,

/* Ascii 36 */
   8,  25,   8,  -4,  12,  25,  12,  -4,  17,  18,  15,  20,  15,  20,  12,  21,
  12,  21,   8,  21,   8,  21,   5,  20,   5,  20,   3,  18,   3,  18,   3,  16,
   3,  16,   4,  14,   4,  14,   5,  13,   5,  13,   7,  12,   7,  12,  13,  10,
  13,  10,  15,   9,  15,   9,  16,   8,  16,   8,  17,   6,  17,   6,  17,   3,
  17,   3,  15,   1,  15,   1,  12,   0,  12,   0,   8,   0,   8,   0,   5,   1,
   5,   1,   3,   3,

/* Ascii 37 */
  21,  21,   3,   0,   8,  21,  10,  19,  10,  19,  10,  17,  10,  17,   9,  15,
   9,  15,   7,  14,   7,  14,   5,  14,   5,  14,   3,  16,   3,  16,   3,  18,
   4,  20,   6,  21,   6,  21,   8,  21,   8,  21,  10,  20,  10,  20,  13,  19,
  13,  19,  16,  19,  16,  19,  19,  20,  19,  20,  21,  21,  17,   7,  15,   6,
  15,   6,  14,   4,  14,   4,  14,   2,  14,   2,  16,   0,  16,   0,  18,   0,
  18,   0,  20,   1,  20,   1,  21,   3,  21,   3,  21,   5,  21,   5,  19,   7,
  19,   7,  17,   7,

/* Ascii 38 */
  23,  12,  23,  13,  23,  13,  22,  14,  22,  14,  21,  14,  21,  14,  20,  13,
  20,  13,  19,  11,  19,  11,  17,   6,  17,   6,  15,   3,  15,   3,  13,   1,
  13,   1,  11,   0,  11,   0,   7,   0,   7,   0,   5,   1,   5,   1,   4,   2,
   4,   2,   3,   4,   3,   4,   3,   6,   3,   6,   4,   8,   4,   8,   5,   9,
   5,   9,  12,  13,  12,  13,  13,  14,  13,  14,  14,  16,  14,  16,  14,  18,
  14,  18,  13,  20,  13,  20,  11,  21,  11,  21,   9,  20,   9,  20,   8,  18,
   8,  18,   8,  16,   8,  16,   9,  13,   9,  13,  11,  10,  11,  10,  16,   3,
  16,   3,  18,   1,  18,   1,  20,   0,  20,   0,  22,   0,  22,   0,  23,   1,
  23,   1,  23,   2,

/* Ascii 39 */
   5,  19,   4,  20,   4,  20,   5,  21,   5,  21,   6,  20,   6,  20,   6,  18,
   6,  18,   5,  16,   5,  16,   4,  15,

/* Ascii 40 */
  11,  25,   9,  23,   9,  23,   7,  20,   7,  20,   5,  16,   5,  16,   4,  11,
   4,  11,   4,   7,   4,   7,   5,   2,   5,   2,   7,  -2,   7,  -2,   9,  -5,
   9,  -5,  11,  -7,

/* Ascii 41 */
   3,  25,   5,  23,   5,  23,   7,  20,   7,  20,   9,  16,   9,  16,  10,  11,
  10,  11,  10,   7,  10,   7,   9,   2,   9,   2,   7,  -2,   7,  -2,   5,  -5,
   5,  -5,   3,  -7,

/* Ascii 42 */
   8,  21,   8,   9,   3,  18,  13,  12,  13,  18,   3,  12,

/* Ascii 43 */
  13,  18,  13,   0,   4,   9,  22,   9,

/* Ascii 44 */
   6,   1,   5,   0,   5,   0,   4,   1,   4,   1,   5,   2,   5,   2,   6,   1,
   6,   1,   6,  -1,   6,  -1,   5,  -3,   5,  -3,   4,  -4,

/* Ascii 45 */
   4,   9,  22,   9,

/* Ascii 46 */
   5,   2,   4,   1,   4,   1,   5,   0,   5,   0,   6,   1,   6,   1,   5,   2,

/* Ascii 47 */
  20,  25,   2,  -7,

/* Ascii 48 */
   9,  21,   6,  20,   6,  20,   4,  17,   4,  17,   3,  12,   3,  12,   3,   9,
   3,   9,   4,   4,   4,   4,   6,   1,   6,   1,   9,   0,   9,   0,  11,   0,
  11,   0,  14,   1,  14,   1,  16,   4,  16,   4,  17,   9,  17,   9,  17,  12,
  17,  12,  16,  17,  16,  17,  14,  20,  14,  20,  11,  21,  11,  21,   9,  21,

/* Ascii 49 */
   6,  17,   8,  18,   8,  18,  11,  21,  11,  21,  11,   0,

/* Ascii 50 */
   4,  16,   4,  17,   4,  17,   5,  19,   5,  19,   6,  20,   6,  20,   8,  21,
   8,  21,  12,  21,  12,  21,  14,  20,  14,  20,  15,  19,  15,  19,  16,  17,
  16,  17,  16,  15,  16,  15,  15,  13,  15,  13,  13,  10,  13,  10,   3,   0,
   3,   0,  17,   0,

/* Ascii 51 */
   5,  21,  16,  21,  16,  21,  10,  13,  10,  13,  13,  13,  13,  13,  15,  12,
  15,  12,  16,  11,  16,  11,  17,   8,  17,   8,  17,   6,  17,   6,  16,   3,
  16,   3,  14,   1,  14,   1,  11,   0,  11,   0,   8,   0,   8,   0,   5,   1,
   5,   1,   4,   2,   4,   2,   3,   4,

/* Ascii 52 */
  13,  21,   3,   7,   3,   7,  18,   7,  13,  21,  13,   0,

/* Ascii 53 */
  15,  21,   5,  21,   5,  21,   4,  12,   4,  12,   5,  13,   5,  13,   8,  14,
   8,  14,  11,  14,  11,  14,  14,  13,  14,  13,  16,  11,  16,  11,  17,   8,
  17,   8,  17,   6,  17,   6,  16,   3,  16,   3,  14,   1,  14,   1,  11,   0,
  11,   0,   8,   0,   8,   0,   5,   1,   5,   1,   4,   2,   4,   2,   3,   4,

/* Ascii 54 */
  16,  18,  15,  20,  15,  20,  12,  21,  12,  21,  10,  21,  10,  21,   7,  20,
   7,  20,   5,  17,   5,  17,   4,  12,   4,  12,   4,   7,   4,   7,   5,   3,
   5,   3,   7,   1,   7,   1,  10,   0,  10,   0,  11,   0,  11,   0,  14,   1,
  14,   1,  16,   3,  16,   3,  17,   6,  17,   6,  17,   7,  17,   7,  16,  10,
  16,  10,  14,  12,  14,  12,  11,  13,  11,  13,  10,  13,  10 , 13,   7,  12,
   7,  12,   5,  10,   5,  10,   4,   7,

/* Ascii 55 */
  17,  21,   7,   0,   3,  21,  17,  21,

/* Ascii 56 */
   8,  21,   5,  20,   5,  20,   4,  18,   4,  18,   4,  16,   4,  16,   5,  14,
   5,  14,   7,  13,   7,  13,  11,  12,  11,  12,  14,  11,  14,  11,  16,   9,
  16,   9,  17,   7,  17,   7,  17,   4,  17,   4,  16,   2,  16,   2,  15,   1,
  15,   1,  12,   0,  12,   0,   8,   0,   8,   0,   5,   1,   5,   1,   4,   2,
   4,   2,   3,   4,   3,   4,   3,   7,   3,   7,   4,   9,   4,   9,   6,  11,
   6,  11,   9,  12,   9,  12,  13,  13,  13,  13,  15,  14,  15,  14,  16,  16,
  16,  16,  16,  18,  16,  18,  15,  20,  15,  20,  12,  21,  12,  21,   8,  21,

/* Ascii 57 */
  16,  14,  15,  11,  15,  11,  13,   9,  13,   9,  10,   8,  10,   8,   9,   8,
   9,   8,   6,   9,   6,   9,   4,  11,   4,  11,   3,  14,   3,  14,   3,  15,
   3,  15,   4,  18,   4,  18,   6,  20,   6,  20,   9,  21,   9,  21,  10,  21,
  10,  21,  13,  20,  13,  20,  15,  18,  15,  18,  16,  14,  16,  14,  16,   9,
  16,   9,  15,   4,  15,   4,  13,   1,  13,   1,  10,   0,  10,   0,   8,   0,
   8,   0,   5,   1,   5,   1,   4,   3,

/* Ascii 58 */
   5,  14,   4,  13,   4,  13,   5,  12,   5,  12,   6,  13,   6,  13,   5,  14,
   5,   2,   4,   1,   4,   1,   5,   0,   5,   0,   6,   1,   6,   1,   5,   2,

/* Ascii 59 */
   5,  14,   4,  13,   4,  13,   5,  12,   5,  12,   6,  13,   6,  13,   5,  14,
   6,   1,   5,   0,   5,   0,   4,   1,   4,   1,   5,   2,   5,   2,   6,   1,
   6,   1,   6,  -1,   6,  -1,   5,  -3,   5,  -3,   4,  -4,

/* Ascii 60 */
  20,  18,   4,   9,   4,   9,  20,   0,

/* Ascii 61 */
   4,  12,  22,  12,   4,   6,  22,   6,

/* Ascii 62 */
   4,  18,  20,   9,  20,  29,   4,   0,

/* Ascii 63 */
   3,  16,   3,  17,   3,  17,   4,  19,   4,  19,   5,  20,   5,  20,   7,  21,
   7,  21,  11,  21,  11,  21,  13,  20,  13,  20,  14,  19,  14,  19,  15,  17,
  15,  17,  15,  15,  15,  15,  14,  13,  14,  13,  13,  12,  13,  12,   9,  10,
   9,  10,   9,   7,   9,   2,   8,   1,   8,   1,   9,   0,   9,   0,  10,   1,
  10,   1,   9,   2,

/* Ascii 64 */
  18,  13,  17,  15,  17,  15,  15,  16,  15,  16,  12,  16,  12,  16,  10,  15,
  10,  15,   9,  14,   9,  14,   8,  11,   8,  11,   8,   8,   8,   8,   9,   6,
   9,   6,  11,   5,  11,   5,  14,   5,  14,   5,  16,   6,  16,   6,  17,   8,
  12,  16,  10,  14,  10,  14,   9,  11,   9,  11,   9,   8,   9,   8,  10,   6,
  10,   6,  11,   5,  18,  16,  17,   8,  17,   8,  17,   6,  17,   6,  19,   5,
  19,   5,  21,   5,  21,   5,  23,   7,  23,   7,  24,  10,  24,  10,  24,  12,
  24,  12,  23,  15,  23,  15,  22,  17,  22,  17,  20,  19,  20,  19,  18,  20,
  18,  20,  15,  21,  15,  21,  12,  21,  12,  21,   9,  20,   9,  20,   7,  19,
   7,  19,   5,  17,   5,  17,   4,  15,   4,  15,   3,  12,   3,  12,   3,   9,
   3,   9,   4,   6,   4,   6,   5,   4,   5,   4,   7,   2,   7,   2,   9,   1,
   9,   1,  12,   0,  12,   0,  15,   0,  15,   0,  18,   1,  18,   1,  20,   2,
  20,   2,  21,   3,  19,  16,  18,   8,  18,   8,  18,   6,  18,   6,  19,   5,

/* Ascii 65 */
   9,  21,   1,   0,   9,  21,  17,   0,   4,   7,  14,   7,

/* Ascii 66 */
   4,  21,   4,   0,   4,  21,  13,  21,  13,  21,  16,  20,  16,  20,  17,  19,
  17,  19,  18,  17,  18,  17,  18,  15,  18,  15,  17,  13,  17,  13,  16,  12,
  16,  12,  13,  11,   4,  11,  13,  11,  13,  11,  16,  10,  16,  10,  17,   9,
  17,   9,  18,   7,  18,   7,  18,   4,  18,   4,  17,   2,  17,   2,  16,   1,
  16,   1,  13,   0,  13,   0,   4,   0,

/* Ascii 67 */
  18,  16,  17,  18,  17,  18,  15,  20,  15,  20,  13,  21,  13,  21,   9,  21,
   9,  21,   7,  20,   7,  20,   5,  18,   5,  18,   4,  16,   4,  16,   3,  13,
   3,  13,   3,   8,   3,   8,   4,   5,   4,   5,   5,   3,   5,   3,   7,   1,
   7,   1,   9,   0,   9,   0,  13,   0,  13,   0,  15,   1,  15,   1,  17,   3,
  17,   3,  18,   5,

/* Ascii 68 */
   4,  21,   4,   0,   4,  21,  11,  21,  11,  21,  14,  20,  14,  20,  16,  18,
  16,  18,  17,  16,  17,  16,  18,  13,  18,  13,  18,   8,  18,   8,  17,   5,
  17,   5,  16,   3,  16,   3,  14,   1,  14,   1,  11,   0,  11,   0,   4,   0,

/* Ascii 69 */
   4,  21,   4,   0,   4,  21,  17,  21,   4,  11,  12,  11,   4,   0,  17,   0,

/* Ascii 70 */
   4,  21,   4,   0,   4,  21,  17,  21,   4,  11,  12,  11,

/* Ascii 71 */
  18,  16,  17,  18,  17,  18,  15,  20,  15,  20,  13,  21,  13,  21,   9,  21,
   9,  21,   7,  20,   7,  20,   5,  18,   5,  18,   4,  16,   4,  16,   3,  13,
   3,  13,   3,   8,   3,   8,   4,   5,   4,   5,   5,   3,   5,   3,   7,   1,
   7,   1,   9,   0,   9,   0,  13,   0,  13,   0,  15,   1,  15,   1,  17,   3,
  17,   3,  18,   5,  18,   5,  18,   8,  13,   8,  18,   8,

/* Ascii 72 */
   4,  21,   4,   0,  18,  21,  18,   0,   4,  11,  18,  11,

/* Ascii 73 */
   4,  21,   4,   0,

/* Ascii 74 */
  12,  21,  12,   5,  12,   5,  11,   2,  11,   2,  10,   1,  10,   1,   8,   0,
   8,   0,   6,   0,   6,   0,   4,   1,   4,   1,   3,   2,   3,   2,   2,   5,
   2,   5,   2,   7,

/* Ascii 75 */
   4,  21,   4,   0,  18,  21,   4,   7,   9,  12,  18,   0,

/* Ascii 76 */
   4,  21,   4,   0,   4,   0,  16,   0,

/* Ascii 77 */
   4,  21,   4,   0,   4,  21,  12,   0,  20,  21,  12,   0,  20,  21,  20,   0,

/* Ascii 78 */
   4,  21,   4,   0,   4,  21,  18,   0,  18,  21,  18,   0,

/* Ascii 79 */
   9,  21,   7,  20,   7,  20,   5,  18,   5,  18,   4,  16,   4,  16,   3,  13,
   3,  13,   3,   8,   3,   8,   4,   5,   4,   5,   5,   3,   5,   3,   7,   1,
   7,   1,   9,   0,   9,   0,   13,  0,  13,   0,  15,   1,  15,   1,  17,   3,
  17,   3,  18,   5,  18,   5,  19,   8,  19,   8,  19,  13,  19,  13,  18,  16,
  18,  16,  17,  18,  17,  18,  15,  20,  15,  20,  13,  21,  13,  21,   9,  21,

/* Ascii 80 */
   4,  21,   4,   0,   4,  21,  13,  21,  13,  21,  16,  20,  16,  20,  17,  19,
  17,  19,  18,  17,  18,  17,  18,  14,  18,  14,  17,  12,  17,  12,  16,  11,
  16,  11,  13,  10,  13,  10,   4,  10,

/* Ascii 81 */
   9,  21,   7,  20,   7,  20,   5,  18,   5,  18,   4,  16,   4,  16,   3,  13,
   3,  13,   3,   8,   3,   8,   4,   5,   4,   5,   5,   3,   5,   3,   7,   1,
   7,   1,   9,   0,   9,   0,  13,   0,  13,   0,  15,   1,  15,   1,  17,   3,
  17,   3,  18,   5,  18,   5,  19,   8,  19,   8,  19,  13,  19,  13,  18,  16,
  18,  16,  17,  18,  17,  18,  15,  20,  15,  20,  13,  21,  13,  21,   9,  21,
  12,   4,  18,  -2,

/* Ascii 82 */
   4,  21,   4,   0,   4,  21,  13,  21,  13,  21,  16,  20,  16,  20,  17,  19,
  17,  19,  18,  17,  18,  17,  18,  15,  18,  15,  17,  13,  17,  13,  16,  12,
  16,  12,  13,  11,  13,  11,   4,  11,  11,  11,  18,   0,

/* Ascii 83 */
  17,  18,  15,  20,  15,  20,  12,  21,  12,  21,   8,  21,   8,  21,   5,  20,
   5,  20,   3,  18,   3,  18,   3,  16,   3,  16,   4,  14,   4,  14,   5,  13,
   5,  13,   7,  12,   7,  12,  13,  10,  13,  10,  15,   9,  15,   9,  16,   8,
  16,   8,  17,   6,  17,   6,  17,   3,  17,   3,  15,   1,  15,   1,  12,   0,
  12,   0,   8,   0,   8,   0,   5,   1,   5,   1,   3,   3,

/* Ascii 84 */
   8,  21,   8,   0,   1,  21,  15,  21,

/* Ascii 85 */
   4,  21,   4,   6,   4,   6,   5,   3,   5,   3,   7,   1,   7,   1,  10,   0,
  10,   0,  12,   0,  12,   0,  15,   1,  15,   1,  17,   3,  17,   3,  18,   6,
  18,   6,  18,  21,

/* Ascii 86 */
   1,  21,   9,   0,  17,  21,   9,   0,

/* Ascii 87 */
   2,  21,   7,   0,  12,  21,   7,   0,  12,  21,  17,   0,  22,  21,  17,   0,

/* Ascii 88 */
   3,  21,  17,   0,  17,  21,   3,   0,

/* Ascii 89 */
   1,  21,   9,  11,   9,  11,   9,   0,  17,  21,   9,  11,

/* Ascii 90 */
  17,  21,   3,   0,   3,  21,  17,  21,   3,   0,  17,   0,

/* Ascii 91 */
   4,  25,   4,  -7,   5,  25,   5,  -7,   4,  25,  11,  25,   4,  -7,  11,  -7,

/* Ascii 92 */
   0,  21,  14,  -3,

/* Ascii 93 */
   9,  25,   9,  -7,  10,  25,  10,  -7,   3,  25,  10,  25,   3,  -7,  10,  -7,

/* Ascii 94 */
   6,  15,   8,  18,   8,  18,  10,  15,   3,  12,   8,  17,   8,  17,  13,  12,
   8,  17,   8,   0,

/* Ascii 95 */
   0,  -2,  16,  -2,

/* Ascii 96 */
   6,  21,   5,  20,   5,  20,   4,  18,   4,  18,   4,  16,   4,  16,   5,  15,
   5,  15,   6,  16,   6,  16,   5,  17,

/* Ascii 97 */
  15,  14,  15,   0,  15,  11,  13,  13,  13,  13,  11,  14,  11,  14,   8,  14,
   8,  14,   6,  13,   6,  13,   4,  11,   4,  11,   3,   8,   3,   8,   3,   6,
   3,   6,   4,   3,   4,   3,   6,   1,   6,   1,   8,   0,   8,   0,   11,  0,
  11,   0,  13,   1,  13,   1,  15,   3,

/* Ascii 98 */
   4,  21,   4,   0,   4,  11,   6,  13,   6,  13,   8,  14,   8,  14,  11,  14,
  11,  14,  13,  13,  13,  13,  15,  11,  15,  11,  16,   8,  16,   8,  16,   6,
  16,   6,  15,   3,  15,   3,  13,   1,  13,   1,  11,   0,  11,   0,   8,   0,
   8,   0,   6,   1,   6,   1,   4,   3,

/* Ascii 99 */
  15,  11,  13,  13,  13,  13,  11,  14,  11,  14,   8,  14,   8,  14,   6,  13,
   6,  13,   4,  11,   4,  11,   3,   8,   3,   8,   3,   6,   3,   6,   4,   3,
   4,   3,   6,   1,   6,   1,   8,   0,   8,   0,  11,   0,  11,   0,  13,   1,
  13,   1,  15,   3,

/* Ascii 100 */
  15,  21,  15,   0,  15,  11,  13,  13,  13,  13,  11,  14,  11,  14,   8,  14,
   8,  14,   6,  13,   6,  13,   4,  11,   4,  11,   3,   8,   3,   8,   3,   6,
   3,   6,   4,   3,   4,   3,   6,   1,   6,   1,   8,   0,   8,   0,  11,   0,
  11,   0,  13,   1,  13,   1,  15,   3,

/* Ascii 101 */
   3,   8,  15,   8,  15,   8,  15,  10,  15,  10,  14,  12,  14,  12,  13,  13,
  13,  13,  11,  14,  11,  14,   8,  14,   8,  14,   6,  13,   6,  13,   4,  11,
   4,  11,   3,   8,   3,   8,   3,   6,   3,   6,   4,   3,   4,   3,   6,   1,
   6,   1,   8,   0,   8,   0,  11,   0,  11,   0,  13,   1,  13,   1,  15,   3,

/* Ascii 102 */
  10,  21,   8,  21,   8,  21,   6,  20,   6,  20,   5,  17,   5,  17,   5,   0,
   2,  14,   9,  14,

/* Ascii 103 */
  15,  14,  15,  -2,  15,  -2,  14,  -5,  14,  -5,  13,  -6,  13,  -6,  11,  -7,
  11,  -7,   8,  -7,   8,  -7,   6,  -6,  15,  11,  13,  13,  13,  13,  11,  14,
  11,  14,   8,  14,   8,  14,   6,  13,   6,  13,   4,  11,   4,  11,   3,   8,
   3,   8,   3,   6,   3,   6,   4,   3,   4,   3,   6,   1,   6,   1,   8,   0,
   8,   0,  11,   0,  11,   0,  13,   1,  13,   1,  15,   3,

/* Ascii 104 */
   4,  21,   4,   0,   4,  10,   7,  13,   7,  13,   9,  14,   9,  14,  12,  14,
  12,  14,  14,  13,  14,  13,  15,  10,  15,  10,  15,   0,

/* Ascii 105 */
   3,  21,   4,  20,   4,  20,   5,  21,   5,  21,   4,  22,   4,  22,   3,  21,
   4,  14,   4,   0,

/* Ascii 106 */
   5,  21,   6,  20,   6,  20,   7,  21,   7,  21,   6,  22,   6,  22,   5,  21,
   6,  14,   6,  -3,   6,  -3,   5,  -6,   5,  -6,   3,  -7,   3,  -7,   1,  -7,

/* Ascii 107 */
   4,  21,   4,   0,  14,  14,   4,   4,   8,   8,  15,   0,

/* Ascii 108 */
   4,  21,   4,   0,

/* Ascii 109 */
   4,  14,   4,   0,   4,  10,   7,  13,   7,  13,   9,  14,   9,  14,  12,  14,
  12,  14,  14,  13,  14,  13,  15,  10,  15,  10,  15,   0,  15,  10,  18,  13,
  18,  13,  20,  14,  20,  14,  23,  14,  23,  14,  25,  13,  25,  13,  26,  10,
  26,  10,  26,   0,

/* Ascii 110 */
   4,  14,   4,   0,   4,  10,   7,  13,   7,  13,   9,  14,   9,  14,  12,  14,
  12,  14,  14,  13,  14,  13,  15,  10,  15,  10,  15,   0,

/* Ascii 111 */
   8,  14,   6,  13,   6,  13,   4,  11,   4,  11,   3,   8,   3,   8,   3,   6,
   3,   6,   4,   3,   4,   3,   6,   1,   6,   1,   8,   0,   8,   0,  11,   0,
  11,   0,  13,   1,  13,   1,  15,   3,  15,   3,  16,   6,  16,   6,  16,   8,
  16,   8,  15,  11,  15,  11,  13,  13,  13,  13,  11,  14,  11,  14,   8,  14,

/* Ascii 112 */
   4,  14,   4,  -7,   4,  11,   6,  13,   6,  13,   8,  14,   8,  14,  11,  14,
  11,  14,  13,  13,  13,  13,  15,  11,  15,  11,  16,   8,  16,   8,  16,   6,
  16,   6,  15,   3,  15,   3,  13,   1,  13,   1,  11,   0,  11,   0,   8,   0,
   8,   0,   6,   1,   6,   1,   4,   3,

/* Ascii 113 */
  15,  14,  15,  -7,  15,  11,  13,  13,  13,  13,  11,  14,  11,  14,   8,  14,
   8,  14,   6,  13,   6,  13,   4,  11,   4,  11,   3,   8,   3,   8,   3,   6,
   3,   6,   4,   3,   4,   3,   6,   1,   6,   1,   8,   0,   8,   0,  11,   0,
  11,   0,  13,   1,  13,   1,  15,   3,

/* Ascii 114 */
   4,  14,   4,   0,   4,   8,   5,  11,   5,  11,   7,  13,   7,  13,   9,  14,
   9,  14,  12,  14,

/* Ascii 115 */
  14,  11,  13,  13,  13,  13,  10,  14,  10,  14,   7,  14,   7,  14,   4,  13,
   4,  13,   3,  11,   3,  11,   4,   9,   4,   9,   6,   8,   6,   8,  11,   7,
  11,   7,  13,   6,  13,   6,  14,   4,  14,   4,  14,   3,  14,   3,  13,   1,
  13,   1,  10,   0,  10,   0,   7,   0,   7,   0,   4,   1,   4,   1,   3,   3,

/* Ascii 116 */
   5,  21,   5,   4,   5,   4,   6,   1,   6,   1,   8,   0,   8,   0,  10,   0,
   2,  14,   9,  14,

/* Ascii 117 */
   4,  14,   4,   4,   4,   4,   5,   1,   5,   1,   7,   0,   7,   0,  10,   0,
  10,   0,  12,   1,  12,   1,  15,   4,  15,  14,  15,   0,

/* Ascii 118 */
   2,  14,   8,   0,  14,  14,   8,   0,

/* Ascii 119 */
   3,  14,   7,   0,  11,  14,   7,   0,  11,  14,  15,   0,  19,  14,  15,   0,

/* Ascii 120 */
   3,  14,  14,   0,  14,  14,   3,   0,

/* Ascii 121 */
   2,  14,   8,   0,  14,  14,   8,   0,   8,   0,   6,  -4,   6,  -4,   4,  -6,
   4,  -6,   2,  -7,   2,  -7,   1,  -7,

/* Ascii 122 */
  14,  14,   3,   0,   3,  14,  14,  14,   3,   0,  14,   0,

/* Ascii 123 */
   9,  25,   7,  24,   7,  24,   6,  23,   6,  23,   5,  21,   5,  21,   5,  19,
   5,  19,   6,  17,   6,  17,   7,  16,   7,  16,   8,  14,   8,  14,   8,  12,
   8,  12,   6,  10,   7,  24,   6,  22,   6,  22,   6,  20,   6,  20,   7,  18,
   7,  18,   8,  17,   8,  17,   9,  15,   9,  15,   9,  13,   9,  13,   8,  11,
   8,  11,   4,   9,   4,   9,   8,   7,   8,   7,   9,   5,   9,   5,   9,   3,
   9,   3,   8,   1,   8,   1,   7,   0,   7,   0,   6,  -2,   6,  -2,   6,  -4,
   6,  -4,   7,  -6,   6,   8,   8,   6,   8,   6,   8,   4,   8,   4,   7,   2,
   7,   2,   6,   1,   6,   1,   5,  -1,   5,  -1,   5,  -3,   5,  -3,   6,  -5,
   6,  -5,   7,  -6,   7,  -6,   9,  -7,

/* Ascii 124 */
   4,  25,   4,  -7,

/* Ascii 125 */
   5,  25,   7,  24,   7,  24,   8,  23,   8,  23,   9,  21,   9,  21,   9,  19,
   9,  19,   8,  17,   8,  17,   7,  16,   7,  16,   6,  14,   6,  14,   6,  12,
   6,  12,   8,  10,   7,  24,   8,  22,   8,  22,   8,  20,   8,  20,   7,  18,
   7,  18,   6,  17,   6,  17,   5,  15,   5,  15,   5,  13,   5,  13,   6,  11,
   6,  11,  10,   9,  10,   9,   6,   7,   6,   7,   5,   5,   5,   5,   5,   3,
   5,   3,   6,   1,   6,   1,   7,   0,   7,   0,   8,  -2,   8,  -2,   8,  -4,
   8,  -4,   7,  -6,   8,   8,   6,   6,   6,   6,   6,   4,   6,   4,   7,   2,
   7,   2,   8,   1,   8,   1,   9,  -1,   9,  -1,   9,  -3,   9,  -3,   8,  -5,
   8,  -5,   7,  -6,   7,  -6,   5,  -7,

/* Ascii 126 */
   3,   6,   3,   8,   3,   8,   4,  11,   4,  11,   6,  12,   6,  12,   8,  12,
   8,  12,  10,  11,  10,  11,  14,   8,  13,   8,  16,   7,  16,   7,  18,   7,
  18,   7,  20,   8,  20,   8,  21,  10,   3,   8,   4,  10,   4,  10,   6,  11,
   6,  11,   8,  11,   8,  11,  10,  10,  10,  10,  14,   7,  14,   7,  16,   6,
  16,   6,  18,   6,  18,   6,  20,   7,  20,   7,  21,  10,  21,  10,  21,  12,
};

int font_index[94] = {
/* Ascii 33 */	0,
/* Ascii 34 */	20,
/* Ascii 35 */	28,
/* Ascii 36 */	44,
/* Ascii 37 */	128,
/* Ascii 38 */	228,
/* Ascii 39 */	360,
/* Ascii 40 */	384,
/* Ascii 41 */	420,
/* Ascii 42 */	456,
/* Ascii 43 */	468,
/* Ascii 44 */	476,
/* Ascii 45 */	504,
/* Ascii 46 */	508,
/* Ascii 47 */	524,
/* Ascii 48 */	528,
/* Ascii 49 */	592,
/* Ascii 50 */	604,
/* Ascii 51 */	656,
/* Ascii 52 */	712,
/* Ascii 53 */	724,
/* Ascii 54 */	788,
/* Ascii 55 */	876,
/* Ascii 56 */	884,
/* Ascii 57 */	996,
/* Ascii 58 */	1084,
/* Ascii 59 */	1116,
/* Ascii 60 */	1160,
/* Ascii 61 */	1168,
/* Ascii 62 */	1176,
/* Ascii 63 */	1184,
/* Ascii 64 */	1252,
/* Ascii 65 */	1444,
/* Ascii 66 */	1456,
/* Ascii 67 */	1528,
/* Ascii 68 */	1596,
/* Ascii 69 */	1644,
/* Ascii 70 */	1660,
/* Ascii 71 */	1672,
/* Ascii 72 */	1748,
/* Ascii 73 */	1760,
/* Ascii 74 */	1764,
/* Ascii 75 */	1800,
/* Ascii 76 */	1812,
/* Ascii 77 */	1820,
/* Ascii 78 */	1836,
/* Ascii 79 */	1848,
/* Ascii 80 */	1928,
/* Ascii 81 */	1968,
/* Ascii 82 */	2052,
/* Ascii 83 */	2096,
/* Ascii 84 */	2172,
/* Ascii 85 */	2180,
/* Ascii 86 */	2216,
/* Ascii 87 */	2224,
/* Ascii 88 */	2240,
/* Ascii 89 */	2248,
/* Ascii 90 */	2260,
/* Ascii 91 */	2272,
/* Ascii 92 */	2288,
/* Ascii 93 */	2292,
/* Ascii 94 */	2308,
/* Ascii 95 */	2328,
/* Ascii 96 */	2332,
/* Ascii 97 */	2356,
/* Ascii 98 */	2412,
/* Ascii 99 */	2468,
/* Ascii 100 */	2520,
/* Ascii 101 */	2576,
/* Ascii 102 */	2640,
/* Ascii 103 */	2660,
/* Ascii 104 */	2736,
/* Ascii 105 */	2764,
/* Ascii 106 */	2784,
/* Ascii 107 */	2816,
/* Ascii 108 */	2828,
/* Ascii 109 */	2832,
/* Ascii 110 */	2884,
/* Ascii 111 */	2912,
/* Ascii 112 */	2976,
/* Ascii 113 */	3032,
/* Ascii 114 */	3088,
/* Ascii 115 */	3108,
/* Ascii 116 */	3172,
/* Ascii 117 */	3192,
/* Ascii 118 */	3220,
/* Ascii 119 */	3228,
/* Ascii 120 */	3244,
/* Ascii 121 */	3252,
/* Ascii 122 */	3276,
/* Ascii 123 */	3288,
/* Ascii 124 */	3424,
/* Ascii 125 */	3428,
/* Ascii 126 */	3564
};

int font_numdata[94] = {
/* Ascii 33 */20,
/* Ascii 34 */8,
/* Ascii 35 */16,
/* Ascii 36 */84,
/* Ascii 37 */100,
/* Ascii 38 */132,
/* Ascii 39 */24,
/* Ascii 40 */36,
/* Ascii 41 */36,
/* Ascii 42 */12,
/* Ascii 43 */8,
/* Ascii 44 */28,
/* Ascii 45 */4,
/* Ascii 46 */16,
/* Ascii 47 */4,
/* Ascii 48 */64,
/* Ascii 49 */12,
/* Ascii 50 */52,
/* Ascii 51 */56,
/* Ascii 52 */12,
/* Ascii 53 */64,
/* Ascii 54 */88,
/* Ascii 55 */8,
/* Ascii 56 */112,
/* Ascii 57 */88,
/* Ascii 58 */32,
/* Ascii 59 */44,
/* Ascii 60 */8,
/* Ascii 61 */8,
/* Ascii 62 */8,
/* Ascii 63 */68,
/* Ascii 64 */192,
/* Ascii 65 */12,
/* Ascii 66 */72,
/* Ascii 67 */68,
/* Ascii 68 */48,
/* Ascii 69 */16,
/* Ascii 70 */12,
/* Ascii 71 */76,
/* Ascii 72 */12,
/* Ascii 73 */4,
/* Ascii 74 */36,
/* Ascii 75 */12,
/* Ascii 76 */8,
/* Ascii 77 */16,
/* Ascii 78 */12,
/* Ascii 79 */80,
/* Ascii 80 */40,
/* Ascii 81 */84,
/* Ascii 82 */44,
/* Ascii 83 */76,
/* Ascii 84 */8,
/* Ascii 85 */36,
/* Ascii 86 */8,
/* Ascii 87 */16,
/* Ascii 88 */8,
/* Ascii 89 */12,
/* Ascii 90 */12,
/* Ascii 91 */16,
/* Ascii 92 */6,
/* Ascii 93 */16,
/* Ascii 94 */20,
/* Ascii 95 */4,
/* Ascii 96 */24,
/* Ascii 97 */56,
/* Ascii 98 */56,
/* Ascii 99 */52,
/* Ascii 100 */56,
/* Ascii 101 */64,
/* Ascii 102 */20,
/* Ascii 103 */76,
/* Ascii 104 */28,
/* Ascii 105 */20,
/* Ascii 106 */32,
/* Ascii 107 */12,
/* Ascii 108 */4,
/* Ascii 109 */52,
/* Ascii 110 */28,
/* Ascii 111 */64,
/* Ascii 112 */56,
/* Ascii 113 */56,
/* Ascii 114 */20,
/* Ascii 115 */64,
/* Ascii 116 */20,
/* Ascii 117 */28,
/* Ascii 118 */8,
/* Ascii 119 */16,
/* Ascii 120 */8,
/* Ascii 121 */24,
/* Ascii 122 */12,
/* Ascii 123 */136,
/* Ascii 124 */4,
/* Ascii 125 */136,
/* Ascii 126 */80
};

int font_width[94] = {
/* Ascii 33 */10,
/* Ascii 34 */16,
/* Ascii 35 */21,
/* Ascii 36 */20,
/* Ascii 37 */24,
/* Ascii 38 */26,
/* Ascii 39 */10,
/* Ascii 40 */14,
/* Ascii 41 */14,
/* Ascii 42 */16,
/* Ascii 43 */26,
/* Ascii 44 */10,
/* Ascii 45 */26,
/* Ascii 46 */10,
/* Ascii 47 */22,
/* Ascii 48 */20,
/* Ascii 49 */20,
/* Ascii 50 */20,
/* Ascii 51 */20,
/* Ascii 52 */20,
/* Ascii 53 */20,
/* Ascii 54 */20,
/* Ascii 55 */20,
/* Ascii 56 */20,
/* Ascii 57 */20,
/* Ascii 58 */10,
/* Ascii 59 */10,
/* Ascii 60 */24,
/* Ascii 61 */26,
/* Ascii 62 */24,
/* Ascii 63 */18,
/* Ascii 64 */27,
/* Ascii 65 */18,
/* Ascii 66 */21,
/* Ascii 67 */21,
/* Ascii 68 */21,
/* Ascii 69 */19,
/* Ascii 70 */18,
/* Ascii 71 */21,
/* Ascii 72 */22,
/* Ascii 73 */8,
/* Ascii 74 */16,
/* Ascii 75 */21,
/* Ascii 76 */17,
/* Ascii 77 */24,
/* Ascii 78 */22,
/* Ascii 79 */22,
/* Ascii 80 */21,
/* Ascii 81 */22,
/* Ascii 82 */21,
/* Ascii 83 */20,
/* Ascii 84 */16,
/* Ascii 85 */22,
/* Ascii 86 */18,
/* Ascii 87 */24,
/* Ascii 88 */20,
/* Ascii 89 */18,
/* Ascii 90 */20,
/* Ascii 91 */14,
/* Ascii 92 */14,
/* Ascii 93 */14,
/* Ascii 94 */16,
/* Ascii 95 */16,
/* Ascii 96 */10,
/* Ascii 97 */19,
/* Ascii 98 */19,
/* Ascii 99 */18,
/* Ascii 100 */19,
/* Ascii 101 */18,
/* Ascii 102 */12,
/* Ascii 103 */19,
/* Ascii 104 */19,
/* Ascii 105 */8,
/* Ascii 106 */10,
/* Ascii 107 */17,
/* Ascii 108 */8,
/* Ascii 109 */30,
/* Ascii 110 */19,
/* Ascii 111 */19,
/* Ascii 112 */19,
/* Ascii 113 */19,
/* Ascii 114 */13,
/* Ascii 115 */17,
/* Ascii 116 */12,
/* Ascii 117 */19,
/* Ascii 118 */16,
/* Ascii 119 */22,
/* Ascii 120 */17,
/* Ascii 121 */16,
/* Ascii 122 */17,
/* Ascii 123 */14,
/* Ascii 124 */8,
/* Ascii 125 */14,
/* Ascii 126 */24
};

float4::float4(int num_data)
{
  x = new GLfloat[num_data];                                                    // "x" data array.
  y = new GLfloat[num_data];                                                    // "y" data array.
  z = new GLfloat[num_data];                                                    // "z" data array.
  w = new GLfloat[num_data];                                                    // "w" data array.
  size = num_data;                                                              // Array size (the same for all of them).
  vao = 0;                                                                      // OpenGL data VAO.
  vbo = 0;                                                                      // OpenGL data VBO.
  buffer = NULL;                                                                // OpenCL data buffer.

  data = new GLfloat[4*num_data];                                               // Allocating data array...

  // Filling arrays with default data:
  for (i = 0; i < num_data; i++)
  {
    data[4*i + 0] = x[i] = 0.0f;                                                // Setting "x" data...
    data[4*i + 1] = y[i] = 0.0f;                                                // Setting "y" data...
    data[4*i + 2] = z[i] = 0.0f;                                                // Setting "z" data...
    data[4*i + 3] = w[i] = 1.0f;                                                // Setting "w" data...
  }
}

float4::~float4()
{
  release_mem_object(buffer);                                                   // Releasing OpenCL data buffer...
  glDeleteBuffers(1, &vbo);                                                     // Releasing OpenGL VBO...
  glDeleteBuffers(1, &vao);                                                     // Releasing OpenGL VAO...
}

int4::int4(int num_data)
{
  x = new GLint[num_data];                                                      // "x" data array.
  y = new GLint[num_data];                                                      // "y" data array.
  z = new GLint[num_data];                                                      // "z" data array.
  w = new GLint[num_data];                                                      // "w" data array.
  size = num_data;                                                              // Array size (the same for all of them).
  vao = 0;                                                                      // OpenGL data VAO.
  vbo = 0;                                                                      // OpenGL data VBO.
  buffer = NULL;                                                                // OpenCL data buffer.

  data = new GLint[4*num_data];                                                 // Allocating data array...

  // Filling arrays with default data:
  for (i = 0; i < num_data; i++)
  {
    data[4*i + 0] = x[i] = 0.0f;                                                // Setting "x" data...
    data[4*i + 1] = y[i] = 0.0f;                                                // Setting "y" data...
    data[4*i + 2] = z[i] = 0.0f;                                                // Setting "z" data...
    data[4*i + 3] = w[i] = 1.0f;                                                // Setting "w" data...
  }
}

int4::~int4()
{
  release_mem_object(buffer);                                                   // Releasing OpenCL data buffer...
  glDeleteBuffers(1, &vbo);                                                     // Releasing OpenGL VBO...
  glDeleteBuffers(1, &vao);                                                     // Releasing OpenGL VAO...
}

point4::point4(int num_data)
{
  x = new GLfloat[num_data];                                                    // "x" data array.
  y = new GLfloat[num_data];                                                    // "y" data array.
  z = new GLfloat[num_data];                                                    // "z" data array.
  w = new GLfloat[num_data];                                                    // "w" data array.

  size = num_data;                                                              // Array size (the same for all of them).
  vao = 0;                                                                      // OpenGL data VAO.
  vbo = 0;                                                                      // OpenGL data VBO.
  buffer = NULL;                                                                // OpenCL data buffer.

  for (i = 0; i < num_data; i++)                                                // Filling arrays with default data...
  {
    x[i] = 0.0f;                                                                // Setting "x" data...
    y[i] = 0.0f;                                                                // Setting "y" data...
    z[i] = 0.0f;                                                                // Setting "z" data...
    w[i] = 1.0f;                                                                // Setting "w" data...
  }
}

point4::~point4()
{
  release_mem_object(buffer);                                                   // Releasing OpenCL data buffer...
  glDeleteBuffers(1, &vbo);                                                     // Releasing OpenGL VBO...
  glDeleteBuffers(1, &vao);                                                     // Releasing OpenGL VAO...
  delete[] x;                                                                   // Releasing "x" data...
  delete[] y;                                                                   // Releasing "y" data...
  delete[] z;                                                                   // Releasing "z" data...
  delete[] w;                                                                   // Releasing "w" data...
}

color4::color4(int num_data)
{
  r = new GLfloat[num_data];                                                    // "r" data array.
  g = new GLfloat[num_data];                                                    // "g" data array.
  b = new GLfloat[num_data];                                                    // "b" data array.
  a = new GLfloat[num_data];                                                    // "a" data array.

  size = num_data;                                                              // Array size (the same for all of them).
  vao = 0;                                                                      // OpenGL data VAO.
  vbo = 0;                                                                      // OpenGL data VBO.
  buffer = NULL;                                                                // OpenCL data buffer.


  for (i = 0; i < num_data; i++)                                                // Filling arrays with default data...
  {
    r[i] = 0.0f;                                                                // Setting "r" data...
    g[i] = 0.0f;                                                                // Setting "g" data...
    b[i] = 0.0f;                                                                // Setting "b" data...
    a[i] = 1.0f;                                                                // Setting "a" data...
  }
}

color4::~color4()
{
  release_mem_object(buffer);                                                   // Releasing OpenCL data buffer...
  glDeleteBuffers(1, &vbo);                                                     // Releasing OpenGL VBO...
  glDeleteBuffers(1, &vao);                                                     // Releasing OpenGL VAO...
  delete[] r;                                                                   // Releasing "r" data...
  delete[] g;                                                                   // Releasing "g" data...
  delete[] b;                                                                   // Releasing "b" data...
  delete[] a;                                                                   // Releasing "a" data...
}

text4::text4(const char* text, GLfloat R, GLfloat G, GLfloat B, GLfloat A)
{
  num_char = strlen(text);                                                      // Total # of characters in input string.
  num_data = 0;                                                                 // Total # of font data in input string.
  num_points = 0;                                                               // Total # of font points in input string.
  num_strokes = 0;                                                              // Total # of font strokes in input string.

  char_code         = new int[num_char];                                        // Ascii code for each character in input string.
  char_item         = new int[num_char];                                        // Font character position for each character in input string.
  char_numdata      = new int[num_char];                                        // # of font data for each character in input string.
  char_numpoints    = new int[num_char];                                        // # of font points for each character in input string.
  char_numstrokes   = new int[num_char];                                        // # of font strokes for each character in input string.
  char_kern         = new int[num_char];                                        // Kern spacing for each character in input string.

  for (i = 0; i < num_char; i++)                                                // Looping on all characters in input string...
  {
    char_code[i] = (int)text[i];                                                // Getting single character ascii code...

    if ( (ASCII_33 <= char_code[i]) && (char_code[i] <= ASCII_126) )            // Selecting character range...
    {
      char_item[i] = char_code[i] - ASCII_33;                                   // Computing font character position for character in input string...
      char_numdata[i] = font_numdata[char_item[i]];                             // Computing # of data for character in input string...
      char_kern[i]  = ASCII_SPACE_LITTLE;                                       // Setting kern spacing for character in input string...
    }

    if (char_code[i] == 32)                                                     // Handling "SPACE" special case...
    {
      char_item[i] = 0;                                                         // Computing font character position for character in input string...
      char_numdata[i] = 0;                                                      // Setting # of data for character in input string... ("SPACE" has no data)
      char_kern[i] = ASCII_SPACE_LITTLE + ASCII_SPACE_BIG;                      // Setting kern spacing for character in input string...
    }

    char_numpoints[i] = char_numdata[i]/2;                                      // Computing # of font points for each character in input string...
    char_numstrokes[i] = char_numpoints[i]/2;                                   // Computing # of font strokes for each character in input string...
    num_data += char_numdata[i];                                                // Accumulating total # of font data in input string...
    num_points += char_numpoints[i];                                            // Accumulating total # of font points in input string...
    num_strokes += char_numstrokes[i];                                          // Accumulating total # of font strokes in input string...
  }

  data_index = new int[num_data];                                               // Index of font data for each character in input string.
  kern = new int[num_points];                                                   // Kern character spacing for each font point in input string.
  offset = new int[num_points];                                                 // Character offset for each font point in input string.

  x = new GLfloat[num_points];                                                  // "x" data array.
  y = new GLfloat[num_points];                                                  // "y" data array.
  z = new GLfloat[num_points];                                                  // "z" data array.
  w = new GLfloat[num_points];                                                  // "w" data array.

  r = new GLfloat[num_points];                                                  // "r" data array.
  g = new GLfloat[num_points];                                                  // "g" data array.
  b = new GLfloat[num_points];                                                  // "b" data array.
  a = new GLfloat[num_points];                                                  // "a" data array.

  size = num_points;                                                            // Text array size.

  glyph_vao = 0;                                                                // OpenGL glyph data VAO.
  color_vao = 0;                                                                // OpenGL color data VAO.
  glyph_vbo = 0;                                                                // OpenGL glyph data VBO.
  color_vbo = 0;                                                                // OpenGL color data VBO.

  k = 0;                                                                        // Resetting "k" index...

  for (i = 0; i < num_char; i++)                                                // Looping on all characters in input string...
  {
    for (j = 0; j < char_numdata[i]; j++)                                       // Looping on all font data for each single character...
    {
      data_index[k + j] = font_index[char_item[i]] + j;                         // Computing index of font data for character in input string...
    }

    k += char_numdata[i];                                                       // Accumulating # of data...
  }

  k = 0;                                                                        // Resetting "k" index...
  shift = 0;                                                                    // Resetting character shift...

  for (i = 0; i < num_char; i++)                                                // Looping on all characters in input string...
  {
    for (j = 0; j < char_numpoints[i]; j++)                                     // Looping on all font strokes for each single character...
    {
      kern[k + j] = char_kern[i];                                               // Computing kern for characters in input string...
      offset[k + j] = shift;                                                    // Computing offset for characters in input string...
    }

    k += char_numpoints[i];                                                     // Accumulating # of points...
    shift += font_width[char_item[i]];                                          // Accumulating character shift...
  }

  for (i = 0; i < num_points; i++)                                              // Unwrapping text data...
  {
    even = 2*i;                                                                 // Computing "even" index...
    odd  = 2*i + 1;                                                             // Computing "odd" index...

    // Setting "x" data:
    x[i] = ASCII_SCALE*                                                         // Applying scaling...
           (font_vertex[data_index[even]] -                                     // Setting vertex data...
            font_vertex[data_index[0]] +                                        // Subtracting base point...
            offset[i] +                                                         // Adding offset...
            kern[i]);                                                           // Adding kern...

    y[i] = font_vertex[data_index[odd]]*ASCII_SCALE;                            // Setting "y" data...
    z[i] = 0.0f;                                                                // Setting "z" data...
    w[i] = 1.0f;                                                                // Setting "w" data...

    r[i] = R;                                                                   // Setting "r" data...
    g[i] = G;                                                                   // Setting "g" data...
    b[i] = B;                                                                   // Setting "b" data...
    a[i] = A;                                                                   // Setting "a" data...
  }
}

text4::~text4()
{
  glDeleteBuffers(1, &glyph_vbo);                                               // Releasing OpenGL glyph VBO...
  glDeleteBuffers(1, &glyph_vao);                                               // Releasing OpenGL glyph VAO...
  glDeleteBuffers(1, &color_vbo);                                               // Releasing OpenGL color VBO...
  glDeleteBuffers(1, &color_vao);                                               // Releasing OpenGL color VAO...
}
