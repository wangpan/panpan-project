
#include<stdio.h>
int main(int argc, const char *argv[])
{
    int i =0;
    int array[100];
   
    while(i<100)
    {
        array[i]=i;
        i++;
    
    }
    i=0;
    while(i<100)
    {
        printf("%4d",array[i]);
        i++;
    }
    return 0;
}
