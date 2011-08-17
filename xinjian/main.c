#include<stdio.h>
#include"func.h"
#include "various.h"
#include<unistd.h>
int main(int argc, const char *argv[])//注意：每个程序只有一个主函数  即便是分开成若干个文件夹也只有一个主函数
{
    init_data();
    print_board();
    mouse_doing();
/*    save_bg(500,300);
    draw_cursor(500,300);
    sleep(2);
    restore_bg(500,300);
    
    draw_cursor(600,300);*/

//    fb_one_pixel(fb_v.w/2,fb_v.h/2,0x00ff0000);
//    fb_line(0,0,fb_v.w-1,fb_v.h-1,0x0000ff00);
//    fb_line(fb_v.w-1,0,0,fb_v.h-1,0x0000ff00);
//    fb_line(300,fb_v.h-1,400,0,0x0000ff00);
//    fb_circle(fb_v.w/2,fb_v.h/2,150,0x000000ff00);

/*    int i,j;
    for(j=0;j<100;j++)
    {
    	for(i=0;i<100;i++)
	{
	    fb_one_pixel(i+500,j+300,0x00ff0000);
	}
    }
*/
   
    return 0;
}
