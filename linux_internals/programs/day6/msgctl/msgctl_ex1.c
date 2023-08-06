#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <unistd.h>
#include<stdio.h>

#define KEY 1234

struct msqid_ds buf;
int main()
{
        int qid;
        qid=msgget(KEY,IPC_CREAT);
	msgctl(qid,IPC_RMID,&buf);
	printf("no of msg in queue %ld \n",buf.msg_qnum);
	printf("no of bytes acquired is %ld\n",buf.msg_qbytes);
        
}

