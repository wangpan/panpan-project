#include<stdio.h>
#include<stdlib.h>
int main(int argc, const char *argv[])
{
    FILE *fp=NULL;
    char str[1024]="this is a c program";
    char r_str[1024]={0};
//    printf("%s\n",str);
//    fp = fopen("1.txt","a+");//a+追加 不会破坏之前的东西；w+ 先清空在㝍；r+直接在原来的上面写
    fp =fopen("2.txt","r+");//w+ 可以重新㝍一个2.txt的文件  r+ 与w+ 的最大区别。
    if(fp==NULL)
    {
        perror("open");
        exit(0);
    }
//    fscanf(fp,"%s",r_str);//用r_str将fp需要打开的内容输出
//    fgets(r_str,1023,fp);//同上
//    printf("%s\n",r_str);
//    fprintf(fp,"%s\n",str);//将str数组中的内容直接㝍入到1.txt中。
//    fputs(str, fp);//同上。
//    gets(r_str);
//    printf("%s",r_str);
//    puts(r_str);




    int i = 0;
    while((r_str[i]=getc(fp))!=EOF)//getc从fp中取出的内容送到r_str数组中   EOF为结束标志
    {
        i++;
    }
    r_str[i]='\0';
    printf("%s\n",r_str);



//    while(str[i]!='\0')
//    {
//        putc(str[i],fp);//读出str【i】中的内容。
//        i++;
//    }
    fclose(fp);//关闭fp。
    return 0;
}
