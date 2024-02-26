// cprogram for prime number in between range

#include<stdio.h>
void main()
{
	int max,min;
	printf("enter range:\n");
	scanf("%d-%d",&max,&min);
	int i,j,c1=0;
	for(i=max+1;i<min;i++)
	{
		int c=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				c++;
			}
	
		}
		if(c==1)
		{
			c1++;
	printf("%d ",i);
	}
	}
	printf("total prime num: %d\n",c1);
}

