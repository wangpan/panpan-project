#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student 
{
    int number;
    char name[20];
    struct student *next;
};
typedef struct student STU;
STU *create_link(int n)
{
    int i = 0;
    STU *head=NULL;
    STU *p=NULL;
    

/*    if(p==NULL)
    {
        perror("create");
        exit(0);
    }*/
    for (i=0;i<n;i++)
    {
        p=malloc(sizeof(STU));
        if(p)
        {
            printf("input the number of%d:",i+1);
            scanf("%d",&p->number);
            printf("input the name :");
            scanf("%s",&p->name);
            p->next=head;
            head=p;
        }
        else
        {
            printf("memory in not enough for malloc.\n");
            break;
        }
        
    }
    return head;
}
void print_link(STU *head)
{
    STU *p=head;
    while(p)
    {
        printf("number name\n");
        printf("%d   %s\n",p->number,p->name);
        p=p->next;
    }
    printf("\n");
}
int main(int argc, const char *argv[])
{
    STU *head=NULL;
    STU *p=NULL;
    int i = 0;
    int n = 0;
    printf("请输入要创建的链表的长度：");
    scanf("%d",&n);
    head=create_link(n);
    printf("输出建立的链表:\n");
    print_link(head);
    while(head!=NULL)
    {
        p=head;
        head=head->next;
        free(p);

    }
    p=NULL;
    head=NULL;

    return 0;
}
