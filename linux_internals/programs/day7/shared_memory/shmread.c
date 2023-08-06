#include<stdio.h>
#include<unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include<string.h>

#define KEY 1234

int main()
{
        int shmid;
        void *ptr;
        shmid=shmget(KEY,8,IPC_CREAT);
        ptr=shmat(shmid,(const void *)0,0);
        //strcpy((char *)ptr,"hello world");
        printf("address of shmat:%s\n",(char *)ptr);
        printf("the memory address is:%d\n",shmid);
	shmdt((char *)ptr);
       
        printf("address of shmat:%s\n",(char *)ptr);


}

