// display the duplicate elements
#include<stdio.h>
int duplicate(int arr[]);
void main()
{
	int l=10;
	int arr[l];
	int i;
	printf("enter array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}

	duplicate(arr);
}
int duplicate(int arr[])
{
	int i,l;
        int last_duplicate=0;
	for(i=0;i<10;i++)
	{
		if((arr[i]==arr[i+1])&&(arr[i]!=last_duplicate))
		{

			printf("duplicate value is %d\n",arr[i+1]);
			last_duplicate=arr[i+1];
		
		}
	}
}
