/ c program binay to hexa

#include<stdio.h>
void main()
{
	int num,rem,sum=0;
	int i=1;
	printf("enter number\n");
	scanf("%d",&num);
	int temp=num;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+rem*i;
		i=i*2;
		temp=temp/10;
	}
	printf("%x\n",num);
}
