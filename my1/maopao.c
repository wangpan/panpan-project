
#include <stdio.h>
void main()
{
    int i, n=30, j, m;
    int a[]={210,108,65,49,72,88,67,5,19,36,
             90,35,1,112,215,6,23,46,51,29,
             77,19,0,55,27,48,18,22,30,56};
    printf("\nThese integers are as below:\n\n");
    for (i=0; i<n; i++)
    {
        printf("%6d",a[i]);
        if ((i+1)%10==0)
        printf("\n");
    }
    for (i=1;i<n;i++)
   {
       for (j=0; j<n-i; j++)
            {
                if (a[j]>a[j+1])
                    {
                        m=a[j];
                        a[j]=a[j+1];
                        a[j+1]=m;
                    }
            }
    }
    printf("\nThe sorted integers:\n\n");
    for (i=0; i<n; i++)
    {
        printf("%6d",a[i]);
        if ((i+1)%10==0)
        printf("\n");
    }
}
