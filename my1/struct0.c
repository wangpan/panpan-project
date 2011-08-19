#include<stdio.h>
#include<string.h>
typedef struct date  DA;
struct date
{
    int number;
    char name[20];
    struct date *p;
};
/*int main(void)
{
    DA m;
    m.number=20;
    strcpy(m.name,"zhang");
    printf("number  name\n");
    printf("%-5d     %s\n",m.number,m.name);
    return 0;
}*/
int main(int argc, const char *argv[])
{
    DA *ptr=NULL;
    DA m;
    DA n;
    ptr=&m;

    ptr->p=&n;
    ptr->p->number=5;
    strcpy(ptr->p->name,"wang");

    ptr->number=20;
    strcpy(ptr->name,"zhang");
    printf("number  name\n");

    printf("%5d  %s\n",ptr->number,ptr->name);

    printf("%5d  %s\n",ptr->p->number,ptr->p->name);
    return 0;
}
