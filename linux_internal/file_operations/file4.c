/* file3.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
	int n; char buff[1024];

	int fd = open("newdatafile.txt",O_CREAT|O_TRUNC|O_RDWR,0666); //file opened in write mode
	if (fd == -1)
	{
		printf("Error in creating file\n"); exit(1);}


	while( n = read (fd, buff, 244))
	{
		printf("%d\n",n);
		if (n<=0)    
		{
			printf("Error in reading source file.\n");
			exit(-n);
		}
		buff[n]='\0';
		write(1,buff,n);
		//printf("%s",buff);
	}
	close(fd);
	return 0;
}

