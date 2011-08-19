#include<stdio.h>
#define N 10
int main()
{
    int array[N];
    int *ptr;
    int i = 0;
    ptr=&array[0];
    for(i=0;i<N;i++,ptr++)
    {
        *ptr=i+1;
    }
    for(i=0;i<N;i++)
    {
        printf("%4d",array[i]);
    }
    printf("\n");
    return 0;
}
