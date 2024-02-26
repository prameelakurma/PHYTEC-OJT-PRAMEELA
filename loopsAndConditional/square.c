// c program for square

#include<stdio.h>
void main()
{
	int r,c;
	printf("enter rows  and colums\n");
	scanf("%d-%d",&r,&c);
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			if((i==1)||(i==r)||(j==1)||(j==r))
			{
				printf("#");
			}
			else if ((i<=j)||(j!=r))
			{
		            printf(" ");
			}

		}
		printf("\n");
	}

}

