#include<stdio.h>
int main()
{  
    unsigned    int c=10;
    unsigned    int b=0x1;
    unsigned    int a[32];
    int i=0;
    for (i = 0; i < 32; i++) {
        a[i]=c&b;
        c=c>>1;
    }
    for (i = 31; i >=0; i--) {
        printf ("%d",a[i]);
        
    }
    printf("\n");            
    return 0;
}
