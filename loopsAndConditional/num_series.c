// cprogram for  number series

#include<stdio.h>
void main()
{
	int range;
	printf("enter range\n");
	scanf("%d",&range);
	int count=1;
	while(count<=range)
	{
		printf("%d %d ",count*1,count*2);
		count=count+2;
	}
}
