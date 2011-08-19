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
}
