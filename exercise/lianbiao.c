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
int main(int argc, const char *argv[])
{
	STU *head = NULL;
	
	return 0;
}
