#include<stdio.h>
#include<sys/msg.h>
#define MSG_TYPE 1
#define KEY 0x1998860
struct msg
{
        long msgtype;
        long pid;
        char rbuf[100];
};
void main()
{
	struct msg message;
	int msqid;
	msqid=msgget(KEY,IPC_CREAT|0640);
	printf("return value of msqid is:%d\n",msqid);
	msgrcv(msqid,&message,100,MSG_TYPE,0);
	printf("%s\n",message.rbuf);
}
