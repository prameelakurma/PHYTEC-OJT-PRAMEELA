#include<stdio.h>
void main()
{
	char str[100];
	char x;
	printf("enter string\n");
	scanf("%[^\n]s",str);
	__fpurge(stdin);
	printf("enter search character\n");
        scanf("%c",&x);

		search(str,x);
}
