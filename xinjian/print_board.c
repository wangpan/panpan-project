#include<stdio.h>
#include"various.h"
#include"func.h"
int print_board(void)//打印棋盘函数  功能：在显示器上打印棋盘
{
	int i = 0;
	for(i = 0;i<Y_NUM;i++)//横坐标
	{
		fb_line(ST_X,ST_Y+i*SPACE,ST_X+(X_NUM-1)*SPACE,ST_Y+i*SPACE,0x00ffffff);//确定横坐标的起点终点以及颜色
	}
	for(i = 0;i<X_NUM;i++)//纵坐标
	{
		fb_line(ST_X+i*SPACE,ST_Y,ST_X+i*SPACE,ST_Y+(Y_NUM-1)*SPACE,0x00ffffff);//确定纵坐标起点终点以及颜色
	}
	return 0;
}
