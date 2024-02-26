//c program for print sum in between range without divisible by 5


#include<stdio.h>
void main()
{
	int min,max,sum=0;
	printf("enter numbers\n");
	scanf("%d-%d",&min,&max);
	if(min>max)
	{
		int temp =min;
		min=max;
		max=temp;
	}

	while(min<max)
	{
		if(min%5==0)
		{
			min++;
		}
		else
		{
			sum=sum+min;
			min++;
		}
	}
	printf("sum=%d\n",sum);
}

