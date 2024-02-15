//message send and receiving the client side
#include<stdio.h>
#include<sys/msg.h>
#include<string.h>
#include<sys/types.h>
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
	int msqid;
	struct msg message;
	msqid=msgget(KEY,0);
	printf("return value of msqid:%d\n",msqid);
	message.msgtype=MSG_TYPE;
	message.pid=getpid();
	strcpy(message.buf,"hello hi");
	printf("return value of message.buf:%s\n",message.buf);
	msgsnd(msqid,&message,(2*sizeof(long int))+strlen(message.buf)+1,0);
}
