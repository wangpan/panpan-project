#include<stdio.h>
#define n 30
#define s 3
int main(int argc, const char *argv[])
{
    int a[n];
    int i;
    int k;
    int sum=n;
    k=0;
    for(i =0;i < n;i++)
    {
        a[i]=i + 1;
    }
    for(i=0;i<n;i++)
    {
        printf("%-4d",a[i]);
    }
    printf("\n");
    for(i=0;;i++)
    {
        if(sum==1)
        break;
        if(a[i%n]!=0)
        {
            k++;
        }
        if(k==s)
        {
            k=0;
            printf("%4d",a[i%n]);
            a[i%n]=0;
            sum--;

        }
     }
     for(i=0;i<n;i++)
     if(a[i]!=0)
     printf("\n the last number is：%d\n",a[i]);

    return 0;
}
