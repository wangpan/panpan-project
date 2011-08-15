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
typedef struct student STU;
int menu()//菜单代码
{
    puts("请选择：");
    puts("1.添加学生信息:");
    puts("2.删除学生信息:");
    puts("3.打印学生信息:");
    puts("4.保存学生信息:");
    puts("5.quit:");

/*    int *menu[N]={'********menu********',
                   '1.添加学生信息',
                   '2.删除学生信息',
                   '3.打印学生信息',
                   '4.保存学生信息',
                   '5.quit',
                   '********menu********'};
*/    return 0;
}
STU *add_node(STU *p)//添加学生信息 代码如下

{
    STU *head = p;
    STU *p_c = NULL;
    p_c = malloc(sizeof(STU));
    if(p_c==NULL)
    {
        perror("malloc");
        exit(0);

    }
    printf("please input number:\n");
    scanf("%d",&p_c->number);
    printf("please input name :\n");
    scanf("%s",p_c->name);
    getchar();//不读回车 必须用getchar将回车读出
    p_c->next = NULL;
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
STU *delete_node(STU  *p)//删除学生信息  代码如下
{
    STU *head = p;     
    STU *temp = NULL;
    int num = 0;
    if (p==NULL)
    {
        printf("empty\n");
        return NULL;
    }
    printf("please input number to delete:\n ");
    scanf("%d",&num);
    getchar();
    if(p->number==num)
    {
        head=p->next;
        free(p);      //删除信息时需释放结点
        return head;
    }
    while(p->next!=NULL)
    {
        if(p->next->number==num)
        {
            break;
        }
        p=p->next;
    }
    if (p->next== NULL)
    {
        printf("not found \n");
        return head;
    }
    temp = p->next;
    p->next = p->next->next;
    free(temp);
    return head;
}
void *show_link(STU *p)//打印学生信息  代码如下
{
    if(p==NULL)
    {
        printf("empty\n");
        return;
    }
    while(p!=NULL)
    {
        printf("%d   %s\n",p->number,p->name);
        p=p->next;
    }
    printf("\n");
    
}
void save_link(STU *p)//保存学生信息  代码如下
{
    FILE *fp=fopen("3.txt","w+");//将fp的内容写入到3.txt中
    if(fp==NULL)
    {
        perror("fopen");
        exit(0);
    }
    while(NULL!=p)
    {
        fprintf(fp,"%d   %s\n",p->number,p->name);
        p=p->next;
    }
    fclose(fp);
}
STU  *read_data(void)//将学生信息从文件中读取出来  读取时先读取信息后建立结点 避免读取信息出错时还错误的建立了结点
{
    STU *head = NULL;
    STU *p = NULL;
    int num ;
    char iname[20];
    FILE *fp=fopen("3.txt","r+");
    if (fp == NULL)
    {
        perror("malloc");
        exit(0);
    }
    if (fscanf(fp,"%d%s",&num,iname)==EOF)
    {
        return NULL;
    }
    head = p = malloc(sizeof(STU));//开辟头空间
    if(head==NULL)
    {
        perror("malloc");
        exit(0);
    }
    head->number=num;
    strncpy(head->name,iname,19);
    while(fscanf(fp,"%d%s",&num,iname)!=EOF)
    {
        p->next=malloc(sizeof(STU));//开辟头以外的空间
        if(p->next==NULL)
        {
            perror("fopen");
            exit(0);
        }
        p->next->number=num;
        strncpy(p->next->name,iname,19);//19：作用：控制数组范围
        p->next=NULL;
        p=p->next;

    }
    return head;
}
int main(int argc, const char *argv[])//主函数  代码如下
{
    STU *head = NULL;
    int flag = 1;
    char choice=0;
    head = read_data();
    while(flag>0)
    {
        menu();
        choice = getchar();
        getchar();
        switch(choice)
        {
            case '1' :head=add_node(head);break;
            case '2' :head=delete_node(head);break;
            case '3' :show_link(head);break;
            case '4' :save_link(head);break;
            case '5' :flag = 0;break;
            default:printf("error\n");
        }
    }
    return 0;
}
