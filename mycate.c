//create the cat command line by using the file management system calls
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
	char buf[200];
	int fd,ret;
	if(argc<2)
	{
		printf("Enter command with file name\n");
		exit(0);
	}
	fd=open(argv[1],O_RDONLY);
	perror("open");
	if(fd<0)
	{
		printf("Faild to open the file\n");
		exit(2);
	}
	while(ret=read(fd,buf,199))
	{
		//	perror("read");
		if(ret<0)
		{
			printf("Faild to read the file\n");
			exit(3);
		}
		//	printf("%d\n",ret);
		buf[ret]='\0';
		printf("%s\n",buf);
	}
	close(fd);
}
