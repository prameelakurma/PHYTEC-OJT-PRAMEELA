// cprogram for reverse number

#include<stdio.h>
void main()
{
	int num,temp,rem,sum=0;
	printf("enter number:\n");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum*10+rem;
		temp=temp/10;
	}
	printf("reverse number is : %d\n",sum);
}
