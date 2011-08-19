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
}
