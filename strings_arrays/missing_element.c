#include<stdio.h>
int missing(int arr[],int l);
void main()
{
	int i,l=10;
	int arr[l];
	printf("enter elements\n");
	for(i=1;i<=l;i++)
	{
		scanf("%d",&arr[i]);
	}
	missing(arr,l);
}
int missing(int arr[],int l)
{
	int i,diff=0;
	for(i=l;i>=1;i--)
	{
		diff=arr[i]-arr[i-1];
		if(diff!=1)
		{
		printf("%d\n",arr[i]-1);
		break;
		}
	}

	
}
