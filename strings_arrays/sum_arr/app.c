#include<stdio.h>
void sum_arr(int arr[]);
void main()
{
	int arr[5];
	int i;
	printf("enter array element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	sum_arr(arr);
}


