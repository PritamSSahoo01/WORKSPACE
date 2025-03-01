#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
#include <unistd.h>

#define KEY 1234

typedef struct
{
        long mtype;       /* message type, must be > 0 */
        char mtext[1];    /* message data */
}msg;

int main()
{
        int qid;
        int i;
	msg m1,m2;
        qid=msgget(KEY,IPC_CREAT);
	printf("%d\n",qid);
	i=msgrcv(qid,&m1,sizeof(msg),1,0);
        for(i=0;i<100;i++)
               printf("%c", m1.mtext[i]);
	printf("\n");
	printf("%d\n",qid);
        i=msgrcv(qid,&m2,sizeof(msg),2,0);
        for(i=0;i<100;i++)
               printf("%c", m2.mtext[i]);
        printf("\n");

}
