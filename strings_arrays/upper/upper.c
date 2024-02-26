#include<stdio.h>
void upper(char str[])
{
	int i;

	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a')&&(str[i]<='z'))
		{
			str[i]=str[i]-32;
			printf("%c",str[i]);
		}
	}
}
