#include"headers.h"

void main()
{
	int x,pos;
	printf("enter a number\n");
	scanf("%d",&x);
	printf("enter a bit position\n");
	__fpurge(stdin);
	scanf("%d",&pos);
	bit(x,pos);
}

