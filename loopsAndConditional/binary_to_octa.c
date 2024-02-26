// c progrm  binary to octa


#include<stdio.h>
void main()
{
	int num,temp,rem,sum=0,i=1;
	printf("enter number\n");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+rem*i;
		i=i*2;
		temp=temp/10;
	}
	printf("%o\n",sum);
}

