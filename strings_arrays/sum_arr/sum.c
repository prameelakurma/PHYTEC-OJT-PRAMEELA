#include<stdio.h>
void sum_arr(int arr[])
{
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	printf("%d\n",sum);
}
