#include<stdio.h>
void hanio(char a,char b, char c, int n)
{
    if (n==1)
    {
        printf("%c----->%c\n",a,c);
        return;                     //跳出栈
    }
    hanio(a,c,b,n-1);
    printf("%c----->%c\n",a,c);
    hanio(b,a,c,n-1);
}
int main(int argc, const char *argv[])
{
    int n = 5;
    hanio('A','B','C',n);
    return 0;
}
