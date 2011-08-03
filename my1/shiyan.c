#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define M 8
#define N 10
void init_array(int (*p)[N],int m,int n)
{
    int i = 0;
    int j = 0;
    
srand(time(NULL));

    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            p[j][i]=rand()%(m*n);
        }
    }
     
}
void sort_array(int (*p)[N],int m,int n)
{
/*    int k;
    int b[n];
    int i;
    int j;
    k=0;
    int temp;
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                b[k]=p[j][i];
            }
        }
    for(i=0;i<n;i++)
    {
        for(k=0;k<n;k++)
        {
            if(b[k]>b[k+1])
            {
                temp=b[k];
                b[k]=b[k+1];
                b[k+1]=temp;
            }
        }

    }*/
    int i = 0; 
    int j = 0;
    int k = 0;
    int *ptr;
    ptr=p;
    for(j = 0;j<n*m;j++)
    {
        for(i = 0;i<n*m;i++)
        {
            if(ptr[i]>ptr[j])
            {
                k=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=k;
            }
        }

    }

}
/*void print2_array(int (*P)[N],int m,int n)
{
    int b[n];
    int k = 0;
    for (k=0;k<n;k++)
    {
        printf("%d",b[k]);
    }
    printf("\n");
}*/
void print_array(int (*p)[N],int m,int n)
{
    int i = 0;
    int j = 0;

    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            if (i%10==0)
            {
                printf("\n");
            }
            printf("%5d",p[j][i]);
        }
    }
    printf("\n");
}
int main(int argc, const char *argv[])
{
    int array[M][N];
    init_array(array,M,N);
    print_array(array,M,N);
    sort_array(array,M,N);
    print_array(array,M,N);
    return 0;
}
