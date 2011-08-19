#include<stdio.h>
#define N 10
int main()
{
    char str[N];
    char *ptr;
    int i = 0;
    ptr=str;
    for(i=0;i<N-1;i++,ptr++)
    {
        *ptr='a'+i;
    }
    *ptr='\0';
    printf("str=%s\n",str);
    return 0;
}
