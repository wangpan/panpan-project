#ifndef _VAR_H_
#define _VAR_H_
#include "func.h"

extern fbscr_t fb_v;//extern意思：fbscr_t fn_v为以前文件中的变量
extern int mx;
extern int my;
extern char chess_board[X_NUM*Y_NUM];
extern char player;
extern u32_t current_color;
#endif
