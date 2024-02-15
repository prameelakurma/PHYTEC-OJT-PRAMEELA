#include<stdio.h>
#include<string.h>
#include<sys/msg.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#define MSG_TYPE 1
#define KEY 0x1998860
struct msg
{
	long msgtype;
	long pid;
	char buf[100];
};
int main()
{
	int msgid;
	int ret;
	struct msg message;
	msgid=msgget(KEY,0);
	message.msgtype=MSG_TYPE;
	message.pid=getpid();
	strcpy(message.buf,"hello");
	printf("%s\n",message.buf);
	ret=msgsnd(msgid,&message,sizeof(message),0);
	if(ret<0)
	{
		printf("no data\n");
		exit(5);
	}
}
