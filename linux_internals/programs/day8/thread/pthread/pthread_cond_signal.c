#include <pthread.h>
#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

//static int global=0;
pthread_mutex_t mut = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t mycondvar = PTHREAD_COND_INITIALIZER;

int doneflag=0;
char buf[100];

/*this is the producer side*/
static void *threadFunc1(void *arg)
{

       /* int var1=0,i;
	pthread_mutex_lock(&mut);
        for(i=0;i<10000;i++)
        {
                var1=global;
                var1++;
                global=var1;
                //printf("threadfun1:variable value--%d\n",var1);
        }
	pthread_mutex_unlock(&mut);*/

	printf("\nthreadA scheduled first\n");
	sleep(1);
	pthread_mutex_lock(&mut);
	printf("\nthreadA:critical section execute always first\n");
	sprintf(buf,"This is the data buffer");
	doneflag=1;
	pthread_cond_signal(&mycondvar);
	pthread_mutex_unlock(&mut);

        return 0;
}

/*this is the consumer side*/
static void *threadFunc2(void *arg)
{
        /*int var2=0,i;
	pthread_mutex_lock(&mut);
        for(i=0;i<10000;i++)
        {
                var2=global;
                var2++;
                global=var2;
                //printf("threadfun2:variable value--%d\n",var2);
        }
	pthread_mutex_unlock(&mut);*/

	printf("\nthreadB scheduled first\n");
	pthread_mutex_lock(&mut);
	if(doneflag==0)
	{
		pthread_cond_wait(&mycondvar,&mut);
	}
	printf("\nthreadB:signal received from threadA,this is always executed after threadA critical section %d\n",doneflag);
	printf("\nThe buffer received from the producer thread is(%s)\n",buf);
	pthread_mutex_unlock(&mut);

        return 0;
}


int main()
{
        int pthread1;
        pthread_t threadA;
        pthread_t threadB;
        pthread1= pthread_create(&threadA,NULL,threadFunc1,NULL);
        pthread1= pthread_create(&threadB,NULL,threadFunc2,NULL);

        if(pthread1!=0)
        {
                perror("Thread create error pthread1:\n");
        }
        pthread1=pthread_join(threadA,NULL);
        if(pthread1!=0)
        {
                perror("Thread create error pthread2:\n");
        }

        pthread1=pthread_join(threadB,NULL);



        //sleep(1);
       // printf("The value of the global variable is:%d\n",global);
        printf("\nMain process terminating...\n");
        exit(0);
//        pthread_exit(0);
}

