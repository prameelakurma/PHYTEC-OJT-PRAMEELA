#include<stdio.h>
void avg(int arr[5])
{
	int i,sum=0,avg=0;
      //  int arr[5];
        printf("enter 5 elements for avg \n");
        for(i=0;i<5;i++)
        {
                scanf("%d",&arr[i]);
        }

	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];

	}
	avg=sum/5;
	printf("%d ",avg);
	printf("\n");
}
