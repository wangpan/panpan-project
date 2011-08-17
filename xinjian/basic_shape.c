#include<stdio.h>
#include<stdlib.h>
#include"various.h"//当前目录下的函数



int fb_one_pixel(int x,int y,u32_t color)//画点函数
{
	*((u32_t *)fb_v.memo+x+y*fb_v.w) = color;//定义每一个点的颜色
	return 0;
}
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int fb_line(int x1,int y1,int x2,int y2,u32_t color)//画线函数
{
	int dx = x2-x1;//线的横坐标宽度
	int dy = y2-y1;//线的纵坐标宽度
	int inc = ((dx*dy) > 0 ? 1 : -1);
	int p = 0;
	if(abs(dx)>abs(dy))//从上往下画线
	{
		if(dx<0)//此时x2<x1  可以交换x1与x2的位置和y1与y2的位置eg：从右上角往左下角画线  可以看成时从左下角往右上角画线
		{
			swap(&x1,&x2);//调用swap函数 用来交换x1与x2
			swap(&y1,&y2);
			dx = -dx;
			dy = -dy;
		}
		dy = abs(dy);
		p = 2*dy-dx;//固定算法公式
		while(x1 <= x2)//起点坐标小于等于终点坐标时
		{
			fb_one_pixel(x1,y1,color);//起始点
			x1++;//横坐标自加
			if(p<0)//p<0时y1的値不用加
			{
				p += 2*dy;
			}
			else//p>=0时y1的値用加
			{
				y1 += inc;
				p += 2*(dy-dx);
			}
		}
	}
	else//从下往上画线
	{
		if(dy < 0)//斜率较大时 将衡纵坐标互换			
		{
			swap(&x1,&x2);
			swap(&y1,&y2);
			dx = -dx;
			dy = -dy;
		}
		dx = abs(dx);
		p = 2*dx-dy;
		while(y1 <= y2)//
		{
			fb_one_pixel(x1,y1,color);//起始点
			y1++;//横坐标自加
			if(p<0)//p<0时y1的値不用加
			{
				p += 2*dx;
			}
			else//p>=0时y1的値用加
			{
				x1 += inc;
				p += 2*(dx-dy);
			}
		}
	}
	
	return 0;
}
int fb_circle(int x0,int y0,int r,u32_t color)
{
	int x = 0;
	int y = r;
	int p = 3-2*r;
	while(x <= y)
	{
		/*画实心圆：n条线组成了圆*/
		fb_line(x0+x,y0+y,x0-x,y0+y,color);//前两个坐标确定画圆的第一条线
		fb_line(x0+y,y0+x,x0-y,y0+x,color);//前两个坐标与y=x对称 只需交换x与y；后两个坐标与y轴对称 只需将x换成-x
		fb_line(x0+y,y0-x,x0-y,y0-x,color);//前两个坐标与x轴对称 后两个坐标同上
		fb_line(x0+x,y0-y,x0-x,y0-y,color);//同上
		/*画空心圆*/
		/*fb_one_pixel(x0+x,y0+y,color);
		fb_one_pixel(x0+y,y0+x,color);
		fb_one_pixel(x0+y,y0-x,color);
		fb_one_pixel(x0+x,y0-y,color);
	        	
		fb_one_pixel(x0-x,y0+y,color);
		fb_one_pixel(x0-y,y0+x,color);
		fb_one_pixel(x0-y,y0-x,color);
		fb_one_pixel(x0-x,y0-y,color);*/
		x++;
		if(p<0)
		{
			p += 4*x+6;
		}
		else
		{
			y--;
			p += 4*(x-y)+10;
		}
	
	}
	return 0;
}
