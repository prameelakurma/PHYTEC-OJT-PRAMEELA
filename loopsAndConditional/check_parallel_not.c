// c program for check parallel or not

#include<stdio.h>
void main()
{
	int x1,x2,y1,y2,x3,x4,y3,y4;
	int line1,line2;
	printf("enter line1:\n");
	scanf("%d-%d-%d-%d",&x1,&x2,&y1,&y2);
	printf("enter line2:\n ");
	scanf("%d-%d-%d-%d",&x3,&x4,&y3,&y4);
	line1=( (y2-y1)/(x2-x1));
	line2=((y4-y3)/(x4-x3));
	if (line1==line2)
	{
		printf("parallel lines\n");
	}
	else
	{
		printf("not parallel lines\n");
	}
}
