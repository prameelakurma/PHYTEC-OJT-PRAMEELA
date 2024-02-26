#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
int main()
{
	int fd,ret;
	char buf[10];
	fd=open("proc/pramee",O_RDONLY);
	if(fd<0)	
	{
		printf("no file to access\n");
		exit(1);
	}
	
	ret=read(fd,buf,sizeof(buf));
	if(ret<0)
	{
		printf("fail to read operation\n");
		exit(2);
	}
	printf("read return value: %d\n",ret);

	printf("%s",buf);
	close(fd);


}


