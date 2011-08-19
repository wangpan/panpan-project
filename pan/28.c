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
}
