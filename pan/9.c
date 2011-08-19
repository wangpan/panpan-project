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
}

