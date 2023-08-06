#include <pthread.h>
#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

static void *threadFunc(void *arg)
{
	char *str = (char *) arg;
	printf("\nThreadfun:argument passed to the thread function are :%s,pid=%d\n",str,getpid());
	sleep(10);
	printf("\nThreadfunc:terminating now\n");
	pthread_exit(0);

	return 0;
}

int main()
{
	int pthread;
	pthread_t tid;
	pthread= pthread_create(&tid,NULL,threadFunc,"Hii to all");

	if(pthread!=0)
	{
		perror("Thread create error:");
	}
	else
	{
		printf("main thread:Meassage from main(),pid=(%d)\n",getpid());
	}

	sleep(2);
	printf("\nMain process terminating...\n");
//	exit(0);
	pthread_exit(0);
}
