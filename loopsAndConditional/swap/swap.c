#include<stdio.h>
void swap(int a ,int b)
{
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after swaping :%d %d\n",a,b);
}
