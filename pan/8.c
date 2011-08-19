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
}
