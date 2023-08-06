#include <pthread.h>
#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

static int global=0;
pthread_mutex_t mut = PTHREAD_MUTEX_INITIALIZER;


static void *threadFunc1(void *arg)
{

        int var1=0,i;
	pthread_mutex_lock(&mut);
        for(i=0;i<10000;i++)
        {
                var1=global;
                var1++;
                global=var1;
                //printf("threadfun1:variable value--%d\n",var1);
        }
	pthread_mutex_unlock(&mut);

        return 0;
}
static void *threadFunc2(void *arg)
{
        int var2=0,i;
	pthread_mutex_lock(&mut);
        for(i=0;i<10000;i++)
        {
                var2=global;
                var2++;
                global=var2;
                //printf("threadfun2:variable value--%d\n",var2);
        }
	pthread_mutex_unlock(&mut);

        return 0;
}


int main()
{
        int pthread1;
        pthread_t tid;
        pthread_t tid1;
        pthread1= pthread_create(&tid,NULL,threadFunc1,NULL);
        pthread1= pthread_create(&tid1,NULL,threadFunc1,NULL);

        if(pthread1!=0)
        {
                perror("Thread create error pthread1:\n");
        }
        pthread1=pthread_join(tid,NULL);
        if(pthread1!=0)
        {
                perror("Thread create error pthread2:\n");
        }

        pthread1=pthread_join(tid1,NULL);



        //sleep(1);
        printf("The value of the global variable is:%d\n",global);
        printf("\nMain process terminating...\n");
        exit(0);
//        pthread_exit(0);
}

