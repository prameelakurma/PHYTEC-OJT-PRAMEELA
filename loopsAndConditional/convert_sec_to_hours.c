// cprogram for convert sec into hours

#include<stdio.h>
void main()
{
	int sec,hrs,min;
	printf("enter seconds:\n");
	scanf("%d",&sec);
	hrs=(sec/60)/60;
	min=(sec/60)%60;
	sec=sec%60;
	printf("%dh-%dm-%ds\n",hrs,min,sec);
}

