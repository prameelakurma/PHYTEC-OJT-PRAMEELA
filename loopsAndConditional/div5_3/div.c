#include<stdio.h>
void div(int i,int num)
{
	printf("enter the last number\n ");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		if(i%3==0&&i%5==0)
		{
			printf("%d\n",i);
		}
	}
}

