#include <pthread.h>
#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>


#define MAX 100
static void *threadFunc(void *arg)
{
        char *str = (char *) arg;
        printf("\nThreadfun:started\n");
        //sleep(10);
	while(1)
	{
		sleep(2);
		printf("threadfun executing...\n");		
	}
	sleep(10);

        printf("\nThreadfunc:terminating now\n");
        pthread_exit(0);

        return 0;
}

int main()
{
        int pthread,count=0;

        pthread_t tid;
        pthread= pthread_create(&tid,NULL,threadFunc,NULL);

        if(pthread!=0)
        {
                perror("Thread create error:");
        }
        /*else
        {
                printf("main thread:Meassage from main(),pid=(%d)\n",getpid());
        }*/
	for(count=0;count<10;count++)
	{
		sleep(2);
		printf("Main thread:count value:%d\n",count);

	}
//	pthread_cancel(tid);

        //sleep(2);
        printf("\nMain process terminating...\n");
//      exit(0);
        pthread_exit(NULL);
}

