
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define M 8
#define N 10
void init_array(int *p,int n)
{
    srand(time(NULL));
    int i = 0;
    for (i=0;i<n;i++)
    {
        p[i]=rand()%(n*2);
    }
}
void sort_array(int *p,int n)
{
    int i = 0;
    int j = 0;
    int temp;
    for (i=1;i<n;i++)
        for (j=0;j<n;j++)
        {
            if (p[j]>p[j+1])
            {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
                
            }
        }
}
void print_array(int *p,int n)
{
    int i = 0;
    for (i=0;i<n;i++)
    {
        printf("%5d",p[i]);
        if((i+1)%8==0)
        {
            printf("\n");
        }
    }
    printf("\n");
}
int main(int argc, const char *argv[])
{
    int array[M][N];
    int *p=NULL;
    init_array(p,M*N);
    print_array(p,M*N);
    sort_array(p,M*N);
    print_array(p,M*N);
    return 0;
}
