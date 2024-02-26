// c program for decimal to binary


#include<stdio.h>
void main()
{
	int num,sum=0,rem,i=1,temp;
	printf("enter number:\n");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		rem=temp%2;
		sum=sum+rem*i;
		i=i*10;
	
		temp=temp/2;
		

	}
	printf("%d\n",sum);
}

