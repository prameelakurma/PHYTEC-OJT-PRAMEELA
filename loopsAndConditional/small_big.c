// c program for print small and big number

#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("enter four numbers\n");
	scanf("%d-%d-%d-%d",&a,&b,&c,&d);
	if((a>b)&&(a>c)&&(c>d))
		printf("a is big %d\n",a);
	else if ((b>c)&&(b>d))
		printf("b is big %d \n",b);
	else if(c>d)
		printf("c is big %d \n",c);
	else 
		printf("d is big %d \n",d);
	if((a<b)&&(a<c)&&(a<d))
		printf("a is small %d \n",a);
	else if ((b<c)&&(b<d))
		printf("b is small %d \n",b);
	else if(c<d)
		printf("c is small %d \n",c);
	else
		printf("d is small %d \n",d);

}

