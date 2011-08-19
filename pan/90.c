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
    
}
