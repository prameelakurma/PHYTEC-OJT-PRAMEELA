#include<stdio.h>
int miss(int arr[]);
void main()
{
	int arr[5];
	int i;
	printf("enter arra\n");
	for(i=0;i<5;i++)
	{
	scanf("%d",arr);
	}
	miss(arr);
}
int miss(int arr[])
{
	int i,l,h,d;
	for(i=0;i<5;i++)
	{
//		l=arr[0];
//		h=arr[4];
		d=arr[i]-i;
		if(arr[i]!=d)
			printf("%d\n",d);
		else if	(d<arr[i]-i)
			printf("%d\n",d);
		d++;
	}
}

