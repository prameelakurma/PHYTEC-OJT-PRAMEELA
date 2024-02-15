//client
#include<stdio.h>
#include<string.h>
#include<sys/shm.h>
#include<stdlib.h>
#define key 0x1998860
void main()
{
	int shmid,ret;
	char *ptr;
	shmid=shmget(key,512,0);
	if(shmid<0)
	{
		printf("failed to open shared memory :\n");
		exit(1);
	}
	ptr=shmat(shmid,NULL,0);
	if(ptr<0)
	{
		printf("failed to attached:\n");
		exit(1);
	}
	strcpy(ptr,"hello aruna");
	//sleep(2);
	ret=shmdt(ptr);
	if(ret<0)
	{
		printf("failed to dettached:\n");
		exit(1);
	}

}
