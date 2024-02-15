#include<stdio.h>
#include<stdlib.h>
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
        long msgtype;
        long pid;
};

