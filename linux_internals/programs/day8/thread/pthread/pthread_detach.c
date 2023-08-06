#include <pthread.h>
#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

#define MAX 100

static void *threadFunc(void *arg)
{
        //char *str = (char *) arg;
	//int count=0;
        printf("\nThreadfun:started...\n");
        pthread_detach(pthread_self());
        //for(count=0;count<MAX;count++);

        sleep(5);
        printf("\nThread: threadfunc terminating....\n");
        return 0;
}

int main()
{
        int pthread;
	
        pthread_t tid;
        pthread= pthread_create(&tid,NULL,threadFunc,NULL);

        if(pthread!=0)
        {
                perror("Thread create error:");
        }
       /* else
        {
                printf("main thread:Meassage from main(),pid=(%d)\n",getpid());
        }*/

        sleep(2);
        printf("\nMain process terminating...\n");
//      exit(0);
        pthread_exit(NULL);
}

