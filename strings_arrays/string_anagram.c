// c program for check string anagram

#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100];
	char str2[100];
	int i,j,l1,l2,c,c1=0,sum=0;
	printf("enter string1:\n");
	scanf("%s",str1);
	printf("enter string2:\n");
	scanf("%s",str2);

	l1=strlen(str1);
	l2=strlen(str2);
	if(l1==l2)
	{
	for(i=0;str1[i]!='\0';i++)
	{
		c=0;
		for(j=0;str2[j]!='\0';j++)
		{
	
			if(str1[i]==str2[j])
			{

				c++;
				if(c==1)
					sum=sum+c;
			}
			else 
				c1++;
		
		}

	}
	if((c1==0)||(sum==l1))
		printf("anagram\n");
	else
		printf("not anagram\n");

	}
	else if(l1!=c)
	{
		printf("not anagram\n");
	}

}

