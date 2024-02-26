#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	char src[100];
	int i,j=0;
	printf("enter string\n");
	scanf("%[^\n]s",str);
	src[j]=str[0];
	j=j+1;
	for(i=0;str[i]!='\0';i++)
	{	
		if(str[i]==' ')
		{
	//		src[j]=str[0];

			src[j]=str[i+1];
			j++;
		}

	}
	printf("%s\n",src);
}
