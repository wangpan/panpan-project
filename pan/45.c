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
}
