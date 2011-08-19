#include<stdio.h>
#include<string.h>
int main(int argc, const char *argv[])
{
	int i = 0;
	char *s1[]={"hello world"};
	char *s2[]={"hello"};
//	i = strcmp(*s1,*s2);//比较s1，s2
	i = strncmp(*s1,*s2,8);//比较s1与s2中的8个字符
	if(i!=0)
	{
		printf("s1!=s2\n");
	}
	else
	{
		printf("s1=s2\n");
	}
	/*strtok用法如下：*/
	char str[20]="gcc main.c -o main";
	char *p[4]={0};
	i = 0;
	p[0]=strtok(str," ");//第一次调用：str为str数组的首地址 “”中内容为空格 即遇到空格就停止此次调用
	printf("%s\n",p[0]);
	for(i = 1;i<4;i++)
	{
		p[i]=strtok(NULL," ");//第一次以外的调用：NULL为首地址 还是遇到空格就停止
		printf("%s\n",p[i]);
	}
	return 0;
}
