#include<stdio.h>
void sb(int arr[5])
{
//	int arr[5];
        int i,s,b;
        printf("enter 5 elements for small or big\n");
        for(i=0;i<5;i++)
        {
                scanf("%d",&arr[i]);
        }

	s=b=arr[0];
	for(i=2;i<5;i++)
	{
		if(arr[i]>b)
			b=arr[i];
		if(arr[i]<s)
			s=arr[i];
	}
	printf("s=%d b=%d \n",s,b);
	printf("\n");
}
