#include<stdio.h>
void main()
{
char str[100];
int c=0;
printf("enter string\n");
scanf("%[^\n]s",str);
for(int i=0;str[i];i++)
{
	c++;
	}
printf("%c%c",str[0],str[1]);
}

