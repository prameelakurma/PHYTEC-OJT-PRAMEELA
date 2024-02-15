#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
void main(int argc, char *argv[])
{
	struct stat a;
	if(argc<0)
	{
		printf("failed  arguments\n");
		exit(1);
	}
	else
		printf("file : %s\n",argv[1]);
	printf("device : %lu\n",a.st_dev);
//	printf("inode number : %d\n",a.stx_ino);

	printf("size :%ld\n",a.st_size);
	printf("time of last access :%lu\n",a.st_atime);
	printf("time of last modification : %lu\n",a.st_mtime);
	printf("time of last status change : %lu\n",a.st_ctime);
	printf("user id of file owner :%lu\n",a.st_uid);
	printf("group id of file group : %lu\n",a.st_gid);
}
