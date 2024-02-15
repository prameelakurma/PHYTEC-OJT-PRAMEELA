//To creating the stat command by using the stat 
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
void main(int args,char *argv[])
{
	struct stat v;
	if(args<0)
	{
		printf("Enter the two inputs\n");
		exit(2);
	}
	if(stat(argv[1],&v)!=0)
	{
		printf("fail to read\n");
		exit(2);
	}
	else
	{
		printf("file :%s\n",argv[1]);
		printf("Device :%lu\n",v.st_dev);
		printf("File serial number : %lu\n",v.st_ino);
		printf("file mode : %u\n",v.st_mode);
		printf("Link count : %lu\n",v.st_nlink);
		printf("User Id of the file's ower : %u\n",v.st_uid);
		printf("Group ID of the file's group : %u\n",v.st_gid);
		printf("Device number,if device : %lu\n",v.st_rdev);
		printf("size :  %ld\n",v.st_size);
		printf("Optimal block sizefor I/O : %ld\n",v.st_blksize);
		printf("Number 512-byte blocks allocated : %ld\n",v.st_blocks);
		printf("Time of last access : %ld\n",v.st_atime);

	}
}

