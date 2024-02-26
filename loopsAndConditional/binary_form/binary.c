#include<stdio.h>
void binary(int x)
{
	int i,z,o;
	for(i=0;i<8;i++)
	{
		if(x=x&0x1<<i==0)
		{
			z=0;
			printf("%d",x);
		}
		else
		{
			o=1;
			printf("%d",x);
		}
	}
}
