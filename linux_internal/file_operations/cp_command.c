//create the file copy command by using the file system calls
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
void main()
{
	int fd1,fd2,ret1,ret2,w;
	char str[200];
	fd1=open("verify.txt",O_RDWR);
	if(fd1<0)
	{
		printf("failt to open\n");
		exit(2);
	}
	fd2=open("murali.txt",O_CREAT|O_RDWR|O_TRUNC,0664);
	if(fd2<0)
	{
		printf("open or create is faild\n");
		exit(2);
	}
	while(ret1=read(fd1,str,199))
	{
		if(ret1<0)
		{
			printf("read is faild\n");
			exit(3);
		}
		w=write(fd2,str,ret1);
		if(w<0)
		{
			printf("write is faild\n");
			exit(3);
		}
	}
	close(3);
	close(4);
}

