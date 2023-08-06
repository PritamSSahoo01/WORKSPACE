#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <stdlib.h>
#include <stdio.h>

#define KEY 1234

int main()
{
	int semid;
	semid= semget(KEY, 1, IPC_CREAT|0666);
	printf("the semid is :%d\n",semid);
}
