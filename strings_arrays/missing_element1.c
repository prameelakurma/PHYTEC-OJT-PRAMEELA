// multiple elements missing
#include<stdio.h>
int missing(int arr[],int l);
void main()
{
	//int arr[l];
	int l=5,i;
	int arr[l];
	printf("enter elements\n");
	for(i=0;i<=l-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	missing(arr,l);
}
int missing(int arr[],int l)
{
int i,d=0;
for(i=0;i<=l;i++)
{
	d=arr[i]+1;;
	if(arr[i+1]!=d)
		printf("%d\n",arr[i]+1);
	continue;
}
}

