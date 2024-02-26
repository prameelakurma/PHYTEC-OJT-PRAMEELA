#include<stdio.h>

int count_duplicate(int arr[]);
void main()
{
	int arr[10],i;
	printf("enter array\n");
	for(i=0;i<10-1;i++)
	{
		scanf("%d",arr);
	}
	count_duplicate(arr);
}

int count_duplicate(int arr[])
{
	int i,count=1,last_duplicate=0;

	for(i=0;i<10-1;i++)
	{
		if(arr[i]==arr[i+1])
		{
			count++;
		}

	}

	printf("c:%d\n",count);
	count=0;
}


