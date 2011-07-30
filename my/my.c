
#include<stdio.h>
int main(int argc, const char *argv[])
{
    int a = -5;
    unsigned int b = 1;
    if ((a+b)<1)
    {
        printf("hello\n");

    }
    else 
    {
        printf("w\n");
    }
    return 0;
}/*变量类型由简单向复杂转换
   结果：打印w ( 1 )*/





#include<stdio.h>
int main(int argc, const char *argv[])
{
    int i =0;
    int array[200];
    for(i=0;i<200;i ++)
    {
        array[i]=i;/*给数组赋值*/
    }
    for(i=0;i<200;i++)
    {
        printf("%4d",array[i]);
    }
        printf("\n");
    return 0;
}/*结果：打印0～199数字（2）*/





#include<stdio.h>
int main(int argc, const char *argv[])
{
    int i =0;
    int array[100];
   
    while(i<100)
    {
        array[i]=i;
        i++;
    
    }
    i=0;
    while(i<100)
    {
        
        printf("%4d",array[i]);
        i++；
    }
    return 0;
}/*打印0～99（3）*/






#include<stdio.h>
#define N 10
int main(int argc, const char *argv[])
{
    char array[N]={0};
    int i =0;
    int interval = 4;/*间隔为4*/
    int out_counter = 0;/*计数值*/
    int sum=0;
    for(i=0;sum<N-1;i++)
    {
        if(i ==N)
        {
            i=0;
        }
        if (array[i]==0)
        {
            out_counter++;
            if(out_counter==interval)
            {
                out_counter=0;
                array[i]=1;
                
                printf("%5d(out)\n",i+1);
                sum++;
            }
            else
            {
                printf("%5d",i+1);
            }
        }
    }
    i=0;
    for(i=0;i<N;i++)
    {
        if(array[i]==0)
        printf("the last number is:%d\n",i+1);
    }
    
    return 0;
 }/*约瑟夫环（4）*/






#include<stdio.h>
int main(int argc, const char *argv[])
{
    unsigned int a = 9;
    unsigned int b = 0;
    unsigned int *ptr = &a;
    printf("a=%x\n",a);
    printf("&a=%x\n",&a);

    printf("ptr=%x\n",ptr);
    printf("*ptr=%x\n",*ptr);
    printf("&ptr=%x\n",&ptr);
    return 0;
}/*（5）*/







#include<stdio.h>
#define N 10
int main()
{
    char str[N];
    char *ptr;
    int i = 0;
    ptr=str;/*数组中数组名即为地址  给指针赋地址*/
    for(i=0;i<N-1;i++,ptr++)
    {
        *ptr='a'+i;
    }
    *ptr='\0';
    printf("str=%s\n",str);
    return 0;
}/*打印abcdefghij（6）*/





#include<stdio.h>
#define N 30
int main(int argc, const char *argv[])
{
    char str[N]="abcdefghijk";
    char *ptr;
    ptr=str;
    printf("%c",*ptr);
    printf("\n");
    ptr--;
    while(ptr>=str)
    {
        printf("%c",*ptr);
        ptr--;
    }
    return 0;
}/*正 反打印abcdefghijk（7）*/




#include <stdio.h>
#define N 30

char *my_copy(char*t,char*s)
{
        char *m =t;
        while((*s=*t)!='\0')
        {
            
            *s++;
            *t++;
        }
        return m;
        
}

int main()
{

    char zifuchuan[N]="welcome to china!";
    char p_s[N];

    my_copy(zifuchuan,p_s);
    printf("%s\n",p_s);
    return 0;
}/*将zifuchuan数组中的内容复制到p_s数组中（8）*/


#include<stdio.h>
char str[128] =" ./a.out 100  200";
int argc= 0;
char *argv[16]={};

void parse(void)
{
    int i = 0;
    int state = 0;
    while (str[i])
    {
        if ((state == 0) && (str[i]) != ' ')
        {
            state=1;
            argv[argc++]=str+i;
        }
        if ((state==1)&&(str[i])==' ')
        {
            state=0;
            str[i]='\0';
        }
        i++;
    }
    
}/*（9）*/





#include<stdio.h>
int main()
{  
    unsigned    int c=10;
    unsigned    int b=0x1;
    unsigned    int a[32];
    int i=0;
    for (i = 0; i < 32; i++) {
        a[i]=c&b;
        c=c>>1;
    }
    for (i = 31; i >=0; i--) {
        printf ("%d",a[i]);
        
    }
    printf("\n");            
    return 0;
}/*a[i]=c&b  输出a[i]的内容（10）*/





#include<stdio.h>
#define n 30
#define s 3
int main(int argc, const char *argv[])
{
    int a[n];
    int i;
    int k;
    int sum=n;
    k=0;
    for(i =0;i < n;i++)
    {
        a[i]=i + 1;
    }
    for(i=0;i<n;i++)
    {
        printf("%-4d",a[i]);
    }
    printf("\n");
    for(i=0;;i++)
    {
        if(sum==1)
        break;
        if(a[i%n]!=0)
        {
            k++;
        }
        if(k==s)
        {
            k=0;
            printf("%4d",a[i%n]);
            a[i%n]=0;
            sum--;

        }
     }
     for(i=0;i<n;i++)
     if(a[i]!=0)
     printf("\n the last number is：%d\n",a[i]);

    return 0;
}/*约瑟夫环1～30（11）*/




#include<stdio.h>
int main(int argc, const char *argv[])
{
    int i = 0;
    printf("argc=%d\n",argc);
    for(i=0;i<argc;i++)
    {
        printf("%s\n",argv[i]);
    }
    return 0;
}/*main函数问题（12）*/




#include <stdio.h> 
#define N 50 
#define S 3 

int  main() 
{ 
    int a[N]; 
    int i,k; 
    int sum=N; 

    k=0; 

    for(i=0;i<N;i++) 
        a[i]=i+1; 

    for (i=0;i<N;i++) 
        printf("%-4d",a[i]); 

    printf("\n"); 

    for(i=0;;i++) 
    { 
    if(sum==1) 
    break; 

    if(a[i%N]!=0) 
        { 
        k++; 
        } 

    if(k==S) 
        { 
        k=0; 
        printf("%4d",a[i%N]); 
        a[i%N]=0; 
        sum--; 
        } 
    } 

    for(i=0;i<N;i++) 
    if(a[i]!=0) 
    printf("\n最后一个数为:%d\n",a[i]); 
    return 0;
}/*约瑟夫环（13）*/



#include<stdio.h>
int main(int argc, const char *argv[])
{
    int a = 7;
    int i = 0;
    int b = 6;
    for (i = 0 ;i < 100 ;i++)
    {
        printf("%4d",i);
    }
        printf("\n");
    if (a > b)
        printf("hello\n");
    else if (a == b)
        printf("ho\n");
    else 
        printf("hi\n");
    return 0;
}/*(13）*/




#include<stdio.h>
#define N 10
int main()
{
    int array[N];
    int *ptr;
    int i = 0;
    ptr=&array[0];
    for(i=0;i<N;i++,ptr++)
    {
        *ptr=i+1;
    }
    for(i=0;i<N;i++)
    {
        printf("%4d",array[i]);
    }
    printf("\n");
    return 0;
}/*打印1～10（14）*/





#include<stdio.h>
#define N 30
int main(int argc, const char *argv[])
{
    char str[N]="abcdefghijk";
    char *ptr;
    ptr=str;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;

    
    }
    printf("\n");
    return 0;
}/*（15）*/




#include<stdio.h>
#define N 30
int main(int argc, const char *argv[])
{
    char str[N]="abcdefghijk";
    char *ptr;
    ptr=str;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");
    ptr --;
    while(ptr>=str)
    {
        printf("%c",*ptr);
        ptr--;
    }
    printf("\n");
    return 0;
}/*正  反 打印abcdefghijk（16）*/





#include<stdio.h>
#define N 30
char *my_copy(char*d,char*s)
{
    char *m=d;
    while(*s!='\0')
    {
        *d=*s;
        s++;
        d++;
    }
    *d='\0';
    return m;
}

int main(int argc, const char *argv[])
{
    char str[N]="hello world";
    char c_str[N];
    my_copy(c_str,str);
    printf("%s\n",c_str);
    return 0;
}/*（17 ）将str【】的内容复制给c—str*/





#include"stdio.h"
#include"string.h"
int main()
{
    char str[20];
    char search;
    int i;
    printf("请输入一行字符串:");
    gets(str);
    
    printf("请输入你要查找的字母:");
    scanf("%c",&search);
    for( i=0;i<20;i++)
    {
        if(search==str[i])
        printf("字符在字符串中的位置是：%d\n",i+1);
    }
    
    
    printf("\n");
    
    return 0;
}/*（18）查找字符在字符串中的位置*/




#include<stdio.h>
int main()
{
    unsigned int a = 0x33aa;
    unsigned int mask = 0x0f;
    unsigned int i = 0;
    unsigned int move = 28;

    char str[17] = "0123456789abcdef";
    for (i = 0; i < 8 ; i ++)
    {
        printf("%c",str[(a>>move)&mask]);
        move=move-4;
    }
    printf("\n");
    return 0;
}/*打印出16进制的形式（19）*/




