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
int get_number(STU *p)
{
    int counter=0;
    while(p!=0)
    {
        counter++;
        p=p->next;          //p!=0时 counter(记录数值)自加，p指向下一个地址
    }
    printf("counter is :%d\n",counter);

    return counter;
}
STU *create_link(int n)     //创建链表
{
    int i = 0;
    STU *head = NULL;
    STU *p = NULL;
    head = p = malloc(sizeof(STU));//开辟空间
    if (p==NULL)
    {
        perror("create");
        exit(0);
    }
    p->number=1;
    strcpy(p->name,"student");
    p->next=NULL;
    for(i=1;i<n;i++)
    {
        p->next=malloc(sizeof(STU));
        if(p->next==NULL)
        {
            perror("create");
            exit(0);
        }
        p->next->number=i+1;
        strcpy(p->next->name,"yang");
        p->next->next=NULL;
        p=p->next;
    }
    return head;

}
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
STU *delete_link(STU *p)
{
    STU *head = p;
    STU *temp = NULL;
    
    int num = 0;
    if(p==NULL)
    {
        printf("empty\n");
        return NULL;
    }
    printf("please input number to delete:\n");
    scanf("%d",&num);
    if(p->number==num)
    {
        head=p->next;
        free(p);
        return head;
    }
    while(p->next != NULL)
    {
        if(p->next->number == num)
        {
            break;
        }
        p = p->next;
    }
    if(p->next == NULL)
    {
        printf("not found\n");
        return head;
    }
    temp = p->next;
    p->next = p->next->next;
    free(temp);

    return head;
        

}
/*int main(int argc, const char *argv[])
{
    STU *ptr = NULL;
    ptr = malloc(sizeof(STU));
    if (ptr==NULL)
    {
        perror("malloc");
        exit(0);
    }
    ptr->number=20;
    strcpy(ptr->name,"zhang");
    printf("number   name\n");
    printf("%5d      %s\n",ptr->number,ptr->name);
    return 0;
}*/
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
    head = create_link(10);
    print_link(head);
//    get_number(head);

    head=add_node(head);
    print_link(head);
    head=delete_link(head);
    print_link(head);
//    get_number(head);
    return 0;
}
