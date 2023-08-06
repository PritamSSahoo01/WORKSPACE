#include <pthread.h>
#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

#define MAX 100

static void *threadFunc(void *arg)
{
       // char *str = (char *) arg;
	int count=0;
        printf("\nThreadfun started..\n");
	for(count=0;count<MAX;count++);
        sleep(5);
        printf("\nThreadfunc:terminating now\n");
	if(count < 500)
	{
		return (void *) "count < 500";
	}
	else
	{
		return (void *) "count > 500";
	}
       // pthread_exit(0);

        return 0;
}

int main()
{
        int pthread;
        pthread_t tid;
	void *res;
        pthread= pthread_create(&tid,NULL,threadFunc,NULL);

        if(pthread!=0)
        {
                perror("Thread create error:");
        }
	
#if 0
	pthread= pthread_join(tid,&res);
	if(pthread!=0)
        {
                perror("Thread create error:");
        }


	printf("main thread:thread returned %s\n",(char *)res);

#endif	
	printf("\nMain process terminating...\n");
	pthread_exit(NULL);
}

