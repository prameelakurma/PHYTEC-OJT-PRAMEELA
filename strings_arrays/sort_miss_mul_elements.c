#include<stdio.h>
int sort_miss(int arr[]);
void miss_element(int arr[]);
void main()
{
	int arr[5];
	int i;
	printf("enter array elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort_miss(arr);
	miss_element(arr);
}
int sort_miss(int arr[])
{
	int i,temp,j,k;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if((arr[i])> (arr[j]))
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}

	}
	return arr;
}
void miss_element(int arr[])
{
	int n;
	for(n=0;n<5;n++)
	{
		if(arr[n]+1!=arr[n+1])
		{
			printf("%d\n",arr[n]+1);
		
		} 
	}
}


