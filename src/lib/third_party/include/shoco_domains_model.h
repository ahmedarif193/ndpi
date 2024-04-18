/*
  Note
  This file has been generated (by ntop) as indicated in https://github.com/Ed-von-Schleck/shoco
  using generate_compression_model.py and trained using domain names for obtaining optimal
  performance when used with Internet domain names
*/

#ifndef _SHOCO_INTERNAL
#error This header file is only to be included by 'shoco.c'.
#endif
#pragma once
/*
This file was generated by 'generate_compressor_model.py'
so don't edit this by hand. Also, do not include this file
anywhere. It is internal to 'shoco.c'. Include 'shoco.h'
if you want to use shoco in your project.
*/

#define MIN_CHR 45
#define MAX_CHR 123

static const char chrs_by_chr_id[32] = {
  'o', '.', 'c', 'e', 'a', 'i', 'r', 'n', 's', 't', 'l', 'd', 'm', 'u', 'p', 'g', 'h', 'b', 'f', 'k', 'y', 'v', 'w', '-', 'x', 'j', 'z', 'q', '1', '2', '0', '3'
};

static const int8_t chr_ids_by_chr[256] = {
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 23, 1, -1, 30, 28, 29, 31, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 4, 17, 2, 11, 3, 18, 15, 16, 5, 25, 19, 10, 12, 7, 0, 14, 27, 6, 8, 9, 13, 21, 22, 24, 20, 26, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
};

static const int8_t successor_ids_by_chr_id_and_chr_id[32][32] = {
  {7, 3, 11, -1, -1, -1, 1, 2, 6, 8, 5, 12, 0, 4, 9, 15, -1, 13, -1, -1, -1, 10, 14, -1, -1, -1, -1, -1, -1, -1, -1, -1},
  {2, -1, 0, 6, 8, 3, 10, 1, 15, 11, -1, 5, 13, 4, 12, 7, -1, 9, -1, -1, -1, -1, -1, -1, -1, 14, -1, -1, -1, -1, -1, -1},
  {0, 4, 14, 3, 1, 8, 10, 9, 12, 6, 5, 13, -1, 11, -1, -1, 2, -1, -1, 7, -1, -1, -1, -1, -1, -1, 15, -1, -1, -1, -1, -1},
  {-1, 1, 8, 10, 7, -1, 0, 4, 3, 2, 6, 5, 9, -1, 13, -1, -1, 12, -1, -1, -1, 15, 11, -1, 14, -1, -1, -1, -1, -1, -1, -1},
  {-1, 4, 6, -1, -1, 10, 1, 0, 5, 3, 2, 8, 7, 12, 9, 11, -1, 13, -1, -1, 14, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
  {3, 10, 2, 8, 6, -1, 9, 0, 4, 1, 5, 7, 11, -1, 14, 12, -1, -1, 15, -1, -1, 13, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
  {2, 5, 9, 0, 1, 4, -1, 12, 8, 6, -1, 10, 13, 7, -1, 3, -1, -1, -1, 11, 14, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
  {9, 2, 8, 0, 5, 7, -1, 13, 6, 1, 10, 4, -1, 14, -1, 3, -1, -1, 12, 11, -1, -1, -1, 15, -1, -1, -1, -1, -1, -1, -1, -1},
  {6, 0, 8, 2, 4, 3, -1, -1, 7, 1, -1, 15, 11, 10, 9, -1, 5, -1, -1, 12, 14, -1, -1, 13, -1, -1, -1, -1, -1, -1, -1, -1},
  {4, 1, 11, 0, 3, 2, 5, -1, 7, 10, 14, -1, 15, 8, -1, -1, 6, -1, -1, -1, 9, 13, 12, -1, -1, -1, -1, -1, -1, -1, -1, -1},
  {3, 4, 11, 1, 2, 0, -1, -1, 8, 7, 5, 10, 13, 6, 12, -1, -1, 15, 14, -1, 9, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
  {5, 2, 9, 0, 3, 1, 8, 7, 6, -1, 12, 14, 11, 4, -1, 10, -1, 13, -1, -1, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
  {3, 2, 11, 1, 0, 4, -1, -1, 7, 13, -1, 15, 10, 8, 5, 14, -1, 9, -1, -1, 6, -1, -1, -1, 12, -1, -1, -1, -1, -1, -1, -1},
  {-1, 5, 14, 12, 11, 13, 1, 2, 0, 4, 9, 6, 8, -1, 7, 15, -1, 10, -1, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
  {1, 5, 12, 3, 0, 6, 2, -1, 8, 9, 4, 14, 13, 11, 7, -1, 10, -1, -1, -1, -1, -1, -1, 15, -1, -1, -1, -1, -1, -1, -1, -1},
  {0, 2, 13, 1, 3, 5, 4, 10, 9, 12, 6, -1, 15, 7, -1, 14, 8, -1, -1, -1, 11, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
  {1, 4, 10, 0, 2, 3, 7, 9, 8, 6, 13, -1, 14, 5, 15, -1, -1, -1, -1, 12, 11, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
  {4, 5, 9, 1, 0, 3, 2, 15, 8, 12, 6, -1, 14, 7, -1, 13, -1, 11, -1, -1, 10, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
  {0, 9, 10, 3, 4, 1, 2, -1, 11, 6, 5, 15, 13, 7, 14, -1, -1, -1, 8, -1, 12, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
  {6, 0, 12, 1, 3, 2, 5, 11, 4, 8, 9, -1, 14, 7, 13, -1, -1, -1, -1, -1, 10, -1, -1, 15, -1, -1, -1, -1, -1, -1, -1, -1},
  {3, 0, 4, 5, 2, 14, -1, 9, 1, 6, 10, -1, 7, 13, 8, -1, -1, 11, -1, -1, -1, -1, -1, 15, -1, -1, 12, -1, -1, -1, -1, -1},
  {4, 2, 6, 0, 3, 1, 8, 5, 7, 11, -1, 14, 12, 10, 9, -1, -1, -1, -1, -1, 15, -1, -1, 13, -1, -1, -1, -1, -1, -1, -1, -1},
  {2, 5, 8, 0, 1, 3, 9, 7, 4, 12, 11, 13, 14, -1, 10, -1, 6, -1, -1, -1, -1, -1, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1},
  {13, -1, 1, 7, 2, 5, 14, 12, 0, 6, 10, 8, 3, -1, 4, 11, -1, 9, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
  {10, 0, 6, 7, 5, 1, -1, 12, 8, 3, 15, -1, 13, 11, 2, -1, -1, -1, -1, -1, 4, -1, -1, 14, 9, -1, -1, -1, -1, -1, -1, -1},
  {1, 6, 8, 3, 2, 5, -1, 11, 7, 12, -1, 10, 9, 4, 0, -1, 14, 13, -1, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
  {4, 2, 11, 0, 1, 3, -1, 14, 10, 15, 9, 12, 13, 6, -1, -1, 7, -1, -1, -1, 8, -1, -1, -1, -1, -1, 5, -1, -1, -1, -1, -1},
  {7, 1, 4, 12, 3, 2, 8, -1, 6, 9, 5, 15, 10, 0, 14, -1, -1, 11, -1, -1, -1, -1, -1, -1, -1, -1, -1, 13, -1, -1, -1, -1},
  {-1, 0, 14, -1, 11, -1, -1, -1, 12, -1, -1, -1, -1, -1, 15, -1, -1, -1, -1, -1, -1, -1, -1, 13, -1, -1, -1, -1, 3, 1, 2, 6},
  {-1, 0, 7, -1, 15, -1, -1, -1, 8, -1, -1, 11, 14, -1, 10, 12, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 4, 5, 3, 2},
  {-1, 0, 13, -1, 10, -1, -1, -1, 14, -1, -1, -1, 15, -1, -1, -1, -1, 12, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, 3, 1, 7},
  {-1, 0, 5, -1, 14, -1, -1, -1, 13, -1, -1, 2, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 8, 6, 3, 4}
};

static const int8_t chrs_by_chr_and_successor_id[MAX_CHR - MIN_CHR][16] = {
  {'s', 'c', 'a', 'm', 'p', 'i', 't', 'e', 'd', 'b', 'l', 'g', 'n', 'o', 'r', 'f'},
  {'c', 'n', 'o', 'i', 'u', 'd', 'e', 'g', 'a', 'b', 'r', 't', 'p', 'm', 'j', 's'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'.', '0', '1', '2', '7', '5', '4', '3', '8', '6', 'a', '9', 'b', 'c', 's', 'm'},
  {'.', '2', '0', '1', '8', '6', '3', '9', '7', '4', '5', 'a', 's', '-', 'c', 'p'},
  {'.', '4', '3', '0', '1', '2', 'b', 'c', 's', '5', 'p', 'd', 'g', '6', 'm', 'a'},
  {'.', '6', 'd', '0', '3', 'c', '2', '4', '1', '8', '5', '7', '9', 's', 'a', 'm'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'n', 'r', 'l', 't', '.', 's', 'c', 'm', 'd', 'p', 'i', 'g', 'u', 'b', 'y', 'v'},
  {'a', 'e', 'r', 'i', 'o', '.', 'l', 'u', 's', 'c', 'y', 'b', 't', 'g', 'm', 'n'},
  {'o', 'a', 'h', 'e', '.', 'l', 't', 'k', 'i', 'n', 'r', 'u', 's', 'd', 'c', 'z'},
  {'e', 'i', '.', 'a', 'u', 'o', 's', 'n', 'r', 'c', 'g', 'm', 'l', 'b', 'd', 'y'},
  {'r', '.', 't', 's', 'n', 'd', 'l', 'a', 'c', 'm', 'e', 'w', 'b', 'p', 'x', 'v'},
  {'o', 'i', 'r', 'e', 'a', 'l', 't', 'u', 'f', '.', 'c', 's', 'y', 'm', 'p', 'd'},
  {'o', 'e', '.', 'a', 'r', 'i', 'l', 'u', 'h', 's', 'n', 'y', 't', 'c', 'g', 'm'},
  {'e', 'o', 'a', 'i', '.', 'u', 't', 'r', 's', 'n', 'c', 'y', 'k', 'l', 'm', 'p'},
  {'n', 't', 'c', 'o', 's', 'l', 'a', 'd', 'e', 'r', '.', 'm', 'g', 'v', 'p', 'f'},
  {'p', 'o', 'a', 'e', 'u', 'i', '.', 's', 'c', 'm', 'd', 'n', 't', 'b', 'h', 'k'},
  {'.', 'e', 'i', 'a', 's', 'r', 'o', 'u', 't', 'l', 'y', 'n', 'c', 'p', 'm', '-'},
  {'i', 'e', 'a', 'o', '.', 'l', 'u', 't', 's', 'y', 'd', 'c', 'p', 'm', 'f', 'b'},
  {'a', 'e', '.', 'o', 'i', 'p', 'y', 's', 'u', 'b', 'm', 'c', 'x', 't', 'g', 'd'},
  {'e', 't', '.', 'g', 'd', 'a', 's', 'i', 'c', 'o', 'l', 'k', 'f', 'n', 'u', '-'},
  {'m', 'r', 'n', '.', 'u', 'l', 's', 'o', 't', 'p', 'v', 'c', 'd', 'b', 'w', 'g'},
  {'a', 'o', 'r', 'e', 'l', '.', 'i', 'p', 's', 't', 'h', 'u', 'c', 'm', 'd', '-'},
  {'u', '.', 'i', 'a', 'c', 'l', 's', 'o', 'r', 't', 'm', 'b', 'e', 'q', 'p', 'd'},
  {'e', 'a', 'o', 'g', 'i', '.', 't', 'u', 's', 'c', 'd', 'k', 'n', 'm', 'y', 'v'},
  {'.', 't', 'e', 'i', 'a', 'h', 'o', 's', 'c', 'p', 'u', 'm', 'k', '-', 'y', 'd'},
  {'e', '.', 'i', 'a', 'o', 'r', 'h', 's', 'u', 'y', 't', 'c', 'w', 'v', 'l', 'm'},
  {'s', 'r', 'n', 'k', 't', '.', 'd', 'p', 'm', 'l', 'b', 'a', 'e', 'i', 'c', 'g'},
  {'e', 'i', '.', 'a', 'o', 'n', 'c', 's', 'r', 'p', 'u', 't', 'm', '-', 'd', 'y'},
  {'e', 'a', 'o', 'i', 's', '.', 'h', 'n', 'c', 'r', 'p', 'l', 't', 'd', 'm', 'w'},
  {'.', 'i', 'p', 't', 'y', 'a', 'c', 'e', 's', 'x', 'o', 'u', 'n', 'm', '-', 'l'},
  {'.', 's', 'a', 'o', 'c', 'e', 't', 'm', 'p', 'n', 'l', 'b', 'z', 'u', 'i', '-'},
  {'e', 'a', '.', 'i', 'o', 'z', 'u', 'h', 'y', 'l', 's', 'c', 'd', 'm', 'n', 't'}
};

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable: 4324)    // structure was padded due to __declspec(align())
#endif

typedef struct Pack {
  const uint32_t word;
  const unsigned int bytes_packed;
  const unsigned int bytes_unpacked;
  const unsigned int offsets[8];
  const int16_t _ALIGNED masks[8];
  const unsigned char header_mask;
  const unsigned char header;
} Pack;

#ifdef _MSC_VER
#pragma warning(pop)
#endif

#define PACK_COUNT 3
#define MAX_SUCCESSOR_N 7

static const Pack packs[PACK_COUNT] = {
  { 0x80000000, 1, 2, { 26, 24, 24, 24, 24, 24, 24, 24 }, { 15, 3, 0, 0, 0, 0, 0, 0 }, 0xc0, 0x80 },
  { 0xc0000000, 2, 4, { 25, 22, 19, 16, 16, 16, 16, 16 }, { 15, 7, 7, 7, 0, 0, 0, 0 }, 0xe0, 0xc0 },
  { 0xe0000000, 4, 8, { 23, 19, 15, 11, 8, 5, 2, 0 }, { 31, 15, 15, 15, 7, 7, 7, 3 }, 0xf0, 0xe0 }
};
