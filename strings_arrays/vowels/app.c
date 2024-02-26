#include"stdio.h"
#include<string.h>
void main()
{
	char str[50];
	printf("enter string\n");
	scanf("%[^\n]s",str);
	vowels(str);
}
