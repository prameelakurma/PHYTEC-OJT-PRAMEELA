
//2 way communication of client to server
#include<stdio.h>
#include<sys/msg.h>
#include<string.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/ipc.h>
#include<unistd.h>
#define MSG_TYPE 1
#define KEY 0x1998860
struct msg
{
	long msgtype;
	long pid;
	char buf[100];
};
void main()
{
	int i;
	struct msqid_ds buf;
	int msqid;
	struct msg message;
	while(1)
	{
	msqid=msgget(KEY,0);
	printf("return value of msqid:%d\n",msqid);

	message.msgtype=MSG_TYPE;
	printf("return value of message type:%ld\n",message.msgtype);

	message.pid=getpid();
	printf("return value of pid:%ld\n",message.pid);

	printf("client message:\n");
        scanf("%[^\n]s",message.buf);
	__fpurge(stdin);

	//printf("return value of message.buf:%s\n",message.buf);
	//msgsnd(msqid,&message,2*(sizeof(long int))+strlen(message.buf)+1,0);
	msgsnd(msqid,&message,sizeof(message),0);
	

	//------------------------------read operation-----------------------
	//msqid=msgget(KEY,IPC_CREAT|0640);
        printf("return value of msqid is:%d\n",msqid);
        msgrcv(msqid,&message,sizeof(message),MSG_TYPE,0);
	for(i=0;message.buf[i]!='\0';i++)
	{
		if((message.buf[i]>='A')&&(message.buf[i]<='Z'))
			message.buf[i]=message.buf[i]+32;
		else if((message.buf[i]>='a')&&(message.buf[i]<='z'))
			message.buf[i]=message.buf[i]-32;
	}
        printf("%s\n",message.buf);
	msgctl(msqid,IPC_RMID,&buf);

	}

}
