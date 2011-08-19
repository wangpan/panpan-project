
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student              //创建结构体
{
    int number;             
    char name[20];              
    struct student *next;   //指向自己的指针
};
typedef struct student STU;
STU *add_node(STU *p)
{
    STU *head=p;
    STU *p_c=NULL;
    
    p_c=malloc(sizeof(STU));
    if (p_c==NULL)
    {
        perror("malloc new");
        exit(0);
        
    }
    printf("please input number:\n");
    scanf("%d",&p_c->number);
    printf("please input name:\n");
    scanf("%s",p_c->name);
    p_c->next=NULL;
    if(p==NULL)
    {
        return p_c;
    }
    if(p_c->number<p->number)
    {
        p_c->next=p;
        return p_c;
    }
    while(p->next!=NULL)
    {
        if(p->next->number>p_c->number)
        {
            break;
        }
        p=p->next;
    }
    p_c->next=p->next;
    p->next=p_c;
    return head;
}
void print_link(STU *p)
{
    if(p==NULL)
    {
        printf("empty\n");
        return;
    }
    while(p!=NULL)
    {
        printf("%5d  %s\n",p->number,p->name);
        p=p->next;
    }
}
int main(int argc, const char *argv[])
{
    STU *head=NULL;
    int i = 0;
    for (i=0;i<5;i++)
    {
        head=add_node(head);     
    }
    print_link(head);
    return 0;
}
