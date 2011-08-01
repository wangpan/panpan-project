#include<stdio.h>
#define M 8
#define N 10
int main(int argc, const char *argv[])
{
    int i = 0;
    int j = 0;
    int array[M][N];
    int (*p)[N];//指向数组的指针
    p=array;
//    printf("&array[0][0]  :%p\n",&array[0][0]);

//    printf("array[0]      :%p\n",array[0]);

//    printf("&array[0]     :%p\n",&array[0]);//二位数组是指向一位数组的一位数组 0代表第一个一位数组

//    printf("array         :%p",array);
    for(j=0;j<M;j++)
    {
        for(i=0;i<N;i++)
        {
            array[j][i]=rand()%(M*N);
        }
    }
     
    for(j=0;j<M;j++)
    {
        for(i=0;i<N;i++)
        {
            if (i%10==0)
            {
                printf("\n");
            }
            printf("%5d",array[j][i]);
        }
    }
    printf("\n");
    printf("%p\n",array);

    return 0;
}
