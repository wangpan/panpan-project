#include<stdio.h>
#define N 30
#include<string.h>
/*char *strstr(const char *haystack , const char *needle)
{
    char haystack[N]={welcome to china!};
    char needle[N]={to};
}*/
int main(int argc, const char *argv[])
{

    char haystack[N]="welcome to china!";
    char needle[N]="e";
    char *p;
    p=strstr(haystack ,needle);
    if(p)
    {
        printf("%s\n",p);
    }
    else 
    {
        printf("Not Found!");
    }
    return 0;
}
