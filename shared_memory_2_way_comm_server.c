
//2 way communication server to client 
#include<stdio.h>
#include<sys/shm.h>
#include<stdlib.h>
#include<unistd.h>
#define key 0x1998860
void main()
{
	int shmid,ret;
	char *ptr;
	shmid=shmget(key,512,IPC_CREAT|0664);
	if(shmid<0)
	{
		printf("failed to create shared memory:\n");
		exit(1);
	}
	ptr=shmat(shmid,NULL,0);
	if(ptr<0)
	{
		printf("failed to create shared memory attachment:\n");
		exit(1);
	}
	while(1)
	{
	ptr[0]='\0';
	while(ptr[0]=='\0');
	printf("%s\n",ptr);
	sleep(1);
//----------------------------------------write operation-------------------------
	printf("server message:\n");
	scanf("%[^\n]s",ptr);
	__fpurge(stdin);
	sleep(2);
	//ret=shmdt(ptr);
	
	}

}
