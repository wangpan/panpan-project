#include <stdio.h>
#define N 30

char *my_copy(char*t,char*s)
{
        char *m =t;
        while((*s=*t)!='\0')
        {
            
            *s++;
            *t++;
        }
        return m;
        
}

int main()
{

    char zifuchuan[N]="welcome to china!";
    char p_s[N];

    my_copy(zifuchuan,p_s);
    printf("%s\n",p_s);
    return 0;
}
