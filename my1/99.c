#include<stdio.h>
int main(int argc, const char *argv[])
{
    int i = 0;
    int t = 0;
    for (i=0;i<100;i++)
   {
        if (i%10==9)
        {
            t++;
        }
        if (i/10 == 9)
        {
            t++;
        }
    }
    printf("total:%d\n",t);
    return 0;
}
