// range between armstrong number

#include<stdio.h>
void main()
{
	int min,max,num,i,x,sum=0,c=0;
	int temp,rem,samp,tag;
	printf("enter min to  max values\n");
	scanf("%d-%d",&min,&max);
	if(min>=max)
	{
		samp=min;
		min=max;
		max=samp;
	}
	for(num=min;num<max;num++)
	{
		temp=num;
		 sum=0,c=0;
		 tag=num;
		while(temp!=0)
		{
			temp=temp/10;
			c++;
		}
		while(tag!=0)
		{
			rem=tag%10;
			 i=1;
			 x=c;
			while(x!=0)
			{
				i=i*rem;
				x--;
			}
			sum=sum+i;
			tag=tag/10;
		}
		if(sum==num)

			printf("armstrong num is %d\n",sum);

	}
}



