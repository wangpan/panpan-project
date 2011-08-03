
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define M 8
#define N 10
void init_array(int *p,int n)
{
    int i = 0;
    
    
srand(time(NULL));

    
    for(i=0;i<n;i++)
    {
        p[i]=rand()%(n*2);
    }
 
}
void sort_array(int *p,int n)
{

	int i = 0;
	int j = 0;
	int temp;
	int k = 0;

	for(i=0; i<(n-1); i++)
	{
		k = i;
		for(j=i+1; j<n; j++)
		{
			if(p[k] > p[j])
			{
				k = j;
			}
		}
		if(i != k)
		{
			temp = p[i];
			p[i] = p[k];
			p[k] = temp;
		}

	}

}
void print_array(int *p,int n)
{
    int i = 0;

    for(i=0;i<n;i++)
    {
        if (i%10==0)
        {
            printf("\n");
        }
        printf("%5d",p[i]);
    }
    printf("\n");
}
int main(int argc, const char *argv[])
{
    int array[M][N];
    int *p=NULL;
    p=&array[0][0];
    init_array(p,M*N);
    print_array(p,M*N);
    sort_array(p,M*N);
    print_array(p,M*N);
    return 0;
}
