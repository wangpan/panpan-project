#include<stdio.h>//<>作用：在标准库中展开
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>//open在此头文件中
#include<sys/ioctl.h>//ioctl在此头文件中
#include<linux/fb.h>//fb在此头文件中
#include<sys/mman.h>//mmap在系统函数中
#include"func.h"//""作用：只在当前目录下查看
fbscr_t fb_v;//定义结构体变量fb_v
int mx;
int my;
char chess_board[X_NUM*Y_NUM];
char player;
u32_t current_color;
int init_data(void)
{
	int fd = 0;
	struct fb_var_screeninfo fb_var;//fb_var为机构体变量
	fd = open("/dev/fb0",O_RDWR);//打开/dev/fb0文件
	if(fd<0)
	{
		perror("open fb0");
		exit(0);
	}
	if(ioctl(fd,FBIOGET_VSCREENINFO,&fb_var)<0)//fd：设备文件，FBIO..:设备信息 此处指的是屏幕信息，&fb_var指的是数据结构
	{
		perror("ioctl");
		exit(0);
	}
	fb_v.w = fb_var.xres;//将bf_var的宽度値赋给fb_v.w
	fb_v.h = fb_var.yres;
	fb_v.bpp = fb_var.bits_per_pixel;
	fb_v.memo = mmap(NULL,fb_v.w*fb_v.h*fb_v.bpp/8,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);//第一个变量意义：赋初值，第二个：总体大小，3：读写权限，4：是否共享 此处设置的是可以共享，5：设备文件，6：从什么地方开始
	if (fb_v.memo == MAP_FAILED)
	{
		perror("mmap");
		exit(0);
	}
	memset(fb_v.memo,0,fb_v.w*fb_v.h*fb_v.bpp/8);//将第二个变量放到从指针开始处开始数第三个变量大小的字节的地方 0 代表黑色  此处意义：初始化一个空间
	memset(chess_board,0,X_NUM*Y_NUM);
	current_color = BLACK;
	player = 1;
/*	int i = 0;
	u32_t *p = fb_v.memo;
	for(i = 0;i<fb_v.w;i++)
	{
		p[i]=0x00ff0000;//确定位置与颜色
	}
	for(i=0;i<fb_v.h;i++)
	{
		p[i*fb_v.w]=0x0000ff00;
	}
*/	return 0;
}
