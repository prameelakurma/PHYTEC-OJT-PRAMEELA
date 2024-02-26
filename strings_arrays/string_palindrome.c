#include<stdio.h>
#include<string.h>
void main()
{
	char str[10];
	int i,k,l,j,c=0;
	char temp[10];
	char str2[10];
	printf("enter string\n");
	scanf("%s",str);
	//strcpy(str2,str);
	l=strlen(str);
	strcpy(str2,str);
	for(i=l-1,j=0;i>=0,j<=l;i--,j++)
	{
		temp[j]=str2[i];
	}
//	temp[j]='\0';
	if(strcmp(temp,str2)==0)
	{
		printf("palendrome\n");
	}
	else
	{
		printf("not \n");
	}
}

