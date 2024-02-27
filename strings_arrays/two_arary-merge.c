#include<stdio.h>
#include<stdlib.h>
void sorting(int arr[]);
int  total_store(int arr1[],int arr2[],int arr3[]);
void main()
{
	int arr1[5];
	int arr2[5];
	int arr3[10];
	int i,j;

		printf("enter arr1\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}

	printf("enter arra2\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr2[i]);
	}
	sorting(arr1);
	sorting(arr2);
	total_store(arr1,arr2,arr3);

}
void sorting(int arr[])
{
	int i,j;
	int temp;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}


	

}

int total_store(int arr1[],int arr2[],int arr3[])
{
	int i,j=0;
	for(i=0;i<5;i++)
	
		{
			arr3[j]=arr1[i];
			j++;
		}
	for(i=0;i<5;i++)
		{	
			arr3[j]=arr2[i];
			j++;
		}
	for(j=0;j<10;j++)
	{
		printf("out:%d\n",arr3[j]);
		
	}
}
