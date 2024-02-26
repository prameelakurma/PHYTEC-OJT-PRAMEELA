#include<stdio.h>
void main()
{
	char str[100];
	int n;
	char ch;
	printf("enter string\n");
	scanf("%[^\n]",str);
	__fpurge(stdin);
	printf("enter position\n");
	scanf("%d",&n);
	__fpurge(stdin);
	printf("enter character\n");
	scanf("%c",&ch);
	for(int i=1;str[i]!='\0';i++)
	{
		if(n-1==i-1)
		{
			str[i-1]=ch;
		}
	}
	printf("%s\n",str);
}




