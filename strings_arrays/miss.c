#include<stdio.h>
int main()
{
	int a[]={1,1,2,3,3};
	int i,lastnum=0;
	int b;
	b=sizeof(a)/sizeof(a[0]);
	for(i=0;i<b;i++)
	{
		if((a[i]==a[i+1])&&(lastnum=a[i]));
		printf("%d",a[i]);

	
	}
	lastnum=a[i];
}
