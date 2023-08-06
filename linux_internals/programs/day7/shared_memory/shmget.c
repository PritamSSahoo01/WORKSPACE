#include<stdio.h>
#include<unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#define KEY 1234

int main()
{
	int shmid;
	shmid=shmget(KEY,8,IPC_CREAT);
	printf("the memory address is:%d\n",shmid);
}
