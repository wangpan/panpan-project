#include<stdio.h>
int main(int argc, const char *argv[])
{
    int i =0;
    int array[200];
    for(i=0;i<200;i ++)
    {
        array[i]=i;
    }
    for(i=0;i<200;i++)
    {
        printf("%4d",array[i]);
    }
        printf("\n");
    return 0;
}
