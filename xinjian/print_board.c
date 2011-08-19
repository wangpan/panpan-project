#include<stdio.h>
#include"various.h"
#include"func.h"
int print_board(void)//打印棋盘函数  功能：在显示器上打印棋盘
{
	int i = 0;
	int j = 0;
	for(j=ST_Y-20;j<Y_NUM*SPACE+30;j++)
	{
		for(i=ST_X-20;i<X_NUM*SPACE+SPACE*2+50;i++)
		{
			fb_one_pixel(i,j,YELLOW);
		}
	}
	for(i = 0;i<Y_NUM;i++)//横坐标
	{
		fb_line(ST_X,ST_Y+i*SPACE,ST_X+(X_NUM-1)*SPACE,ST_Y+i*SPACE,BLACK);//确定横坐标的起点终点以及颜色
	}
	for(i = 0;i<X_NUM;i++)//纵坐标
	{
		fb_line(ST_X+i*SPACE,ST_Y,ST_X+i*SPACE,ST_Y+(Y_NUM-1)*SPACE,BLACK);//确定纵坐标起点终点以及颜色
	}
	return 0;
}
