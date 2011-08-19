
#include <stdio.h> 
#define N 50 
#define S 3 

int  main() 
{ 
    int a[N]; 
    int i,k; 
    int sum=N; 

    k=0; 

    for(i=0;i<N;i++) 
        a[i]=i+1; 

    for (i=0;i<N;i++) 
        printf("%-4d",a[i]); 

    printf("\n"); 

    for(i=0;;i++) 
    { 
    if(sum==1) 
    break; 

    if(a[i%N]!=0) 
        { 
        k++; 
        } 

    if(k==S) 
        { 
        k=0; 
        printf("%4d",a[i%N]); 
        a[i%N]=0; 
        sum--; 
        } 
    } 

    for(i=0;i<N;i++) 
    if(a[i]!=0) 
    printf("\n最后一个数为:%d\n",a[i]); 
    return 0;
}
