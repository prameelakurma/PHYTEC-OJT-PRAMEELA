// duplicate number print no of times repeated 
#include<stdio.h>
int duplicate_print(int arr[]);
void main()
{
	int arr[10],i;
	printf("enter aray\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	duplicate_print(arr);
}
int duplicate_print(int arr[])
{
	int i,j;
	for(i=0;i<10;i++)
	{
		if(arr[i]==arr[i+1])
		{
		j=i+1;
		while(arr[i]==arr[j])
		{
			j++;
		}
	printf("%d-%d\n",arr[i],j-i);
	i=j-1;
		}
	}
}
			
