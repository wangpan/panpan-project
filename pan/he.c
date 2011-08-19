#include<stdio.h>
int  main()
{
    unsigned    int a=0xbb;
    unsigned    int b=0xf0;
    unsigned    int c;
    c=a&b;
    c>>=4;
    
    printf("%u\n",c);
    
}
