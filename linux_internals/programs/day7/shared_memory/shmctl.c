#include<stdio.h>
#include<unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include<string.h>

#define KEY 1234
struct shmid_ds buf;
int main()
{
        int shmid;
        void *ptr;
        shmid=shmget(KEY,8,IPC_CREAT);
        ptr=shmat(shmid,(const void *)0,0);
        //strcpy((char *)ptr,"hello world");
        printf("address of shmat:%s\n",(char *)ptr);
        printf("the memory address is:%d\n",shmid);
       // shmdt((char *)ptr);

       // printf("address of shmat:%s\n",(char *)ptr);
       shmctl(shmid,IPC_STAT,&buf);
       printf("Last attach time:%ld\n",buf.shm_atime);
       printf("Last detach time:%ld\n",buf.shm_atime);
       printf("PID of last shmat(2)/shmdt(2):%ld\n",buf.shm_atime);
       printf("No. of current attaches:%ld\n",buf.shm_atime);


}

