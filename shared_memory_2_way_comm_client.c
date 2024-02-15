//2way communication in client to server
#include<stdio.h>
#include<string.h>
#include<sys/shm.h>
#include<stdlib.h>
#include<unistd.h>
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
	while(1)
	{
	printf("client message:\n");
	scanf("%[^\n]s",ptr);
	__fpurge(stdin);
	sleep(1);
//------------------------------read operation-------------------------
	ptr[0]='\0';
	while(ptr[0]=='\0');
	//sleep(2);
	printf("%s\n",ptr);
	
	//ret=shmdt(ptr);
	sleep(2);
	}

}
