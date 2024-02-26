// c program for swap without temp variable
 
 #include<stdio.h>
void main()
{
	int a,b;
	printf("enter number1 and number2\n");
	scanf("%d-%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a= %d,b=%d\n",a,b);
}
