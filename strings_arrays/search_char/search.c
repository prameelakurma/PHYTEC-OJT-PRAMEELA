#include<stdio.h>
#include<string.h>
void search(char str[],char x)
{
	int i;
//	printf("enter search character\n");
//	scanf("%c",&x);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==x)
		       printf("found\n");
			printf("not found\n");
		continue;
	}
}	
