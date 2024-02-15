//2 way communication of server to client
#include<stdio.h>
#include<sys/msg.h>
#include<sys/types.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
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
	int i;
	struct msqid_ds buf;
	struct msg message;
	int msqid;
	while(1)
	{
	msqid=msgget(KEY,IPC_CREAT|0640);
	printf("return value of msqid is:%d\n",msqid);
	msgrcv(msqid,&message,sizeof(message),MSG_TYPE,0);
	 for(i=0;message.rbuf[i]!='\0';i++)
        {
                if((message.rbuf[i]>='A')&&(message.rbuf[i]<='Z'))
                        message.rbuf[i]=message.rbuf[i]+32;
                else if((message.rbuf[i]>='a')&&(message.rbuf[i]<='z'))
                        message.rbuf[i]=message.rbuf[i]-32;
        }

	printf("%s\n",message.rbuf);
	//------------------------- write operation---------------------
	
//	 msqid=msgget(KEY,0);
       // printf("return value of msqid:%d\n",msqid);

        message.msgtype=MSG_TYPE;
        printf("return value of message type:%d\n",message.msgtype);

        message.pid=getpid();
        printf("return value of pid:%d\n",message.pid);

        printf("server message:\n");
        scanf("%[^\n]s",message.rbuf);
	__fpurge(stdin);

        //msgsnd(msqid,&message,(2*sizeof(long int))+strlen(message.rbuf)+1,0);
        msgsnd(msqid,&message,sizeof(message),0);
	msgctl(msqid,IPC_RMID,&buf);

	}
	

	
}
