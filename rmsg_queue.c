#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/msg.h>
#include<stdlib.h>
#define MSG_TYPE 1
#define KEY 0x1998860
struct msg
{
	char buf[100];
};
int main()
{
	struct msg  message;
	int msgid;
	int ret;
	msgid=msgget(KEY,IPC_CREAT|0660);
	if(msgid<0)
	{
		printf("failed to get pid\n");
		exit(2);
	}
	printf("return value of msg id:%d\n",msgid);
    ret=msgrcv(msgid,&message.buf,sizeof(message),MSG_TYPE,0);
       if(ret<0)
       {
	       printf("no data received\n");
	       exit(3);
       }
       printf("%s\n",message.buf);
}

