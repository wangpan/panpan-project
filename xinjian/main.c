#include<stdio.h>
#include"func.h"
#include "various.h"
#include<unistd.h>
int main(int argc, const char *argv[])//注意：每个程序只有一个主函数  即便是分开成若干个文件夹也只有一个主函数
{
    init_data();
    print_board();//调用画底盘函数 功能：在显示器上画出五子棋底盘的形状
    mouse_doing();//调用鼠标工作函数  功能：实现鼠标子啊显示器上自由移动的功能
    save_bg(500,300);//调用保存函数  功能：先记录鼠标位置以及形状
    draw_cursor(500,300);//调用画鼠标函数  功能：在显示器上画出鼠标形状以及在显示器上的位置
    sleep(2);//等待2秒 等待下一个功能的实现
    restore_bg(500,300);//调用恢复函数  功能：将鼠标的形状以及位置恢复到原来记录的地方  即：清除鼠标子啊显示器上的形状  以等待下一个鼠标的输入
    
    draw_cursor(600,300);//重新导入一个鼠标  在显示器是上输出
    

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
