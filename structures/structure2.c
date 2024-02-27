#include<stdio.h>
struct student
{
	char name[100];
	int roll_num;
	int id;
}s;
int main()
{
	printf("enter name of student:\n");
	scanf("%[^\n]s",&s.name);
	printf("enter roll num:\n");
	scanf("%d",&s.roll_num);
	printf("enter id:\n");
	scanf("%d",&s.id);
	printf("full details of student :\n");
	printf("%s-%d-%d\n",s.name,s.roll_num,s.id);
}


