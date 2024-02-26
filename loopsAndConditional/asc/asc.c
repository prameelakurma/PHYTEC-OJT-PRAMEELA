#include<stdio.h>
void asc(int arr[5])
{
	//int arr[5];
	int i,j,temp,n;
        
	printf("enter 5  elements for ascending function\n");
        for(i=0;i<5;i++)
        {
                scanf("%d",&arr[i]);
        }

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
		for(n=0;n<5;n++)
		{
		printf("%d ",arr[n]);
	}
		printf("\n");

}
