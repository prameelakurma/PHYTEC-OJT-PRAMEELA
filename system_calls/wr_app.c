#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
int main()
{
	int fd,ret;
	char buf[100];
	fd=open("proc/pramee",O_WRONLY);
	if(fd<0)	
	{
		printf("no file to access\n");
		exit(1);
	}
	printf("enter input\n");
	scanf("%s",buf);
	ret=write(fd,buf,strlen(buf));
	if(ret<0)
	{
		printf("fail to write data\n");
		exit(2);
	}
printf("write return value->%d\n",ret);
close(fd);
}





}

