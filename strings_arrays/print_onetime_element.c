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
	int i,l=10,k,j,n;
	int last_duplicate=0;
	for(i=0;i<l;i++)
	{
			if(arr[i]==arr[i+1])
			{
				for(k=i;k<l;k++)
				{
					arr[k]=arr[j];
				}
			}
		i--;
		l--;
	}
	for(n=0;n<10;n++)
	{
	printf("%d ",arr[n]);
}
}




