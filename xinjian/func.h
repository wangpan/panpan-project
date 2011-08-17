#ifndef _FUNC_H_
#define _FUNC_H_   //不重复展开include中的内容

typedef unsigned char u8_t;
typedef unsigned int u32_t;
#define ST_X 100
#define ST_Y 40
#define SPACE 30
#define X_NUM 29
#define Y_NUM 24
typedef struct 
{
	int w;
	int h;
	int bpp;

	void *memo;
}fbscr_t;//fbscr_t相当于以前写过的STU
typedef struct
{
	int dx;
	int dy;
	char button;
}mouse_event;
int init_data(void);//初始化函数
int fb_one_pixel(int x ,int y ,u32_t color);//画点函数
int fb_line(int x1,int y1,int x2,int y2,u32_t color);//画线函数
int fb_circle(int x0,int y0,int r,u32_t color);
int print_board(void);
int draw_cursor(int x,int y);
int save_bg(int x,int y);
int restore_bg(int x,int y);
int mouse_doing(void);
#endif
