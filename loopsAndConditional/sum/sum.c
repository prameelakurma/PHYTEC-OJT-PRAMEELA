#include<stdio.h>
void sum(int arr[5])
{
	int i,j,num;
//	int arr[5];
	printf("enter 5 elements for sum index\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("enter sum value\n");
	scanf("%d",&num);
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]+arr[j]==num)
			printf("%d-%d\n",i,j);
		}
	}
	printf("\n");
}
