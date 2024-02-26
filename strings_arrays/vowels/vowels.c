#include<stdio.h>
void vowels(char str[])
{
	int i,c=0;
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u'))
			c++;
	}
	printf("%d\n",c);
}
