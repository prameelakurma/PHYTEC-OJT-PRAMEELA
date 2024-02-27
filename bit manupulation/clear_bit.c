#include<stdio.h>
void main()
{
	int num,bit,i;
	printf("enter number\n");
	scanf("%d",&num);
	__fpurge(stdin);
	printf("enter bit\n");
	scanf("%d",&bit);
	num=num&(~(0x1<<bit));
	printf("%d\n",num);
}
