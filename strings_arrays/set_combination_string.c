// c program for set of combinations in 3 character string

 
 #include<stdio.h>
void main()
{
	char str[100];
	printf("enter string:\n");
	scanf("%s",str);
	for(int i=0;str[i]!='\0';i++)
	{
		for(int j=0;str[j]!='\0';j++)
		{
			for(int k=0;str[k]!='\0';k++)
			{
				if(str[i]!=str[j]&&str[j]!=str[k]&&str[k]!=str[i])
					printf("%c %c %c\n",str[i],str[j],str[k]);
			}
		}
	}
}
