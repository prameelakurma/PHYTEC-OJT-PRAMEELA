#include<stdio.h>
#include<string.h>
void in_val(int arr[],int num);
void main()
{
	int arr[5];
	int i,num;
	printf("enter numbers\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	in_val(arr,num);
}
void in_val(int arr[],int num)
{
	int i,j;
	printf("enter index number\n");
	scanf("%d",&num);
	for(i=0;i<5;i++)
	{
		if(i==num)
		printf("%d\n",arr[i-1]);
	}
}
