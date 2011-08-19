#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 20
struct student
{
    int number;
    char name[N];
    struct student *next;
};
typedef struct student DA
DA *creat_link(int n)
{
    DA *head=NULL;
    DA *p=NULL;
    DA m;
    int i = 0;
    head=p=malloc(sizeof(DA));
    if (p==NULL)
    {
        perror("create");
        exit(0);

    }
    m.number=1;
    strcpy(m.name,"zhang");
    m.next=NULL;
    for(i=1;i<n;i++)
    {
        m.next=malloc(sizeof(DA));
        if(m.next==NULL)
        {
            perror("create");
            exit(0);
        }
        m.next.number=i+1;
        strcpy(m.next.name,"yang");
        m.next.next=NULL;
        p=m.next;

    }
    return head;


}
void print_link(DA *p)
{
    DA m;
    while(p!=NULL)
    {
        printf("%-5d   %s\n",m.number,m.name);
        p=m.next;
    }
}
int main(int argc, const char *argv[])
{
    DA *head=NULL;
    head=creat_link(N);
    print_link(head);
    return 0;
}
