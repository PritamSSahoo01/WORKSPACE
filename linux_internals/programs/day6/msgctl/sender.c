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
        qid=msgget(KEY,IPC_CREAT);
        msg m1,m2;
        m1.mtype=1;
        for (i=0;i<100;i++)
                m1.mtext[i]='a';
        i=msgsnd(qid,&m1,sizeof(msg),IPC_NOWAIT);
        printf("%d\n",qid);
        m2.mtype=2;
        for (i=0;i<100;i++)
                m2.mtext[i]='b';
        i=msgsnd(qid,&m1,sizeof(msg),IPC_NOWAIT);
        printf("%d\n",qid);

}
