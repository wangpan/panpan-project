#include<stdio.h>
int main(int argc, const char *argv[])
{
    unsigned int a = 9;
    unsigned int b = 0;
    unsigned int *ptr = &a;
    printf("a=%x\n",a);
    printf("&a=%x\n",&a);

    printf("ptr=%x\n",ptr);
    printf("*ptr=%x\n",*ptr);
    printf("&ptr=%x\n",&ptr);
    return 0;
}
