#include <stdlib.h>
#include <unistd.h>
#include<stdio.h>
#include<fcntl.h>
int main()
{
	char buff[256];
	int fd,r,n;

	fd=open("file.txt",O_CREAT|O_TRUNC|O_RDWR,0666);
	if(fd<0)
	{
		printf("failed to create\n");
		exit(1);
	}
	while(1)
	{
		r=read(0,buff,sizeof(buff));


		write(fd,buff,r);
	}

			buff[256]='\0';
	close(fd);

}


