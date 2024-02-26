#include<stdio.h>
void bit(int x,int pos)
{
	int i;
//	for(i=0;i<8;i++)
//	{
		if((x&0x1<<pos)==0)
		
			printf("bit is off\n");
		else
			printf("bit is on\n");

	//}
}

