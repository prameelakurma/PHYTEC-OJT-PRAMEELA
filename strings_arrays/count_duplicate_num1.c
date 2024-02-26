#include<stdio.h>
int count_duplicate(int arr[]);
void main()
{
	int arr[10],i;
	printf("enter array\n");
	for(i=0;i<10;i++)
	{
	scanf("%d",arr);
	}
	count_duplicate(arr);
}
int count_duplicate(int arr[])
{
	int i,c=0,j;
	for(i=0;i<10;i++)
	{
		if(arr[i]==arr[i+1])
		{
			j=i+1;
			while(arr[i]==arr[j])
			{
				j++;
			}
		printf("%d-%d\n",arr[j],j-i);
		}
	i=j;
	}
}

