#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student 
{
    int data;
    struct student *next;
};
typedef struct student STU;

int main(int argc, const char *argv[])
{
    int n = 0;//总数
    int m = 0;//出局数
    int k = 0; //从第k个数开始
    int i = 0;//循环变量
    int total = 0;
    STU *head,*p,*s,*q;
    printf("请输入总数:");
    scanf("%d",&n);
    printf("请输入从第几个数开始：");
    scanf("%d",&k);
    printf("请输入出局数字:");
    scanf("%d",&m);
    head = malloc(sizeof(STU));
    p=head;
    p->data = 1;
    p->next = p;
    for (i =2 ;i<=n;i++)
    {
        s=malloc(sizeof(STU));
        s->data=i;
        s->next=p->next;
        p->next=s;
        p=p->next;
    }
    p=head;

    
    for(i=1;i<k;i++)
    {
        p=p->next;
    }
    total=n;
    printf("出局序列为：");
    q=head;
    while(total!=1)
    {
        for(i=1;i<m;i++)
        {
        p=p->next;
        }
        printf("[%d]",p->data);
        while(q->next!=p)
        {
            q=q->next;
        }
        q->next=p->next;
        s=p;
        p=p->next;
        free(s);
        total--;
    }
    printf("\n\n剩下为第[%d]号\n\n",p->data);
    free(p);
    
    return 0;
}
