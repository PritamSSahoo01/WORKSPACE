#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */
#include <semaphore.h>
#include <unistd.h>
#include <stdio.h>


int main()
{
        int svalue,res;
        unsigned int value;
        sem_t *sem1;

        sem1 = sem_open("/pri",O_CREAT | O_RDWR);

        if(sem1==SEM_FAILED)
        {
                perror("sem_open failed");
        }
        else
        {
                printf("\nsem_open success\n");
        }

        sem_getvalue(sem1,&svalue);
        printf("the value of the svalue is %d\n",svalue);
        res=sem_wait(sem1);
        sem_getvalue(sem1,&svalue);
       

        printf("the process 1:executing critical section\n");
        sleep(2);
 
        printf("the res is %d \n",res);
	printf("Process 2......\n");
	sem_post(sem1);
        printf("Process 2 is executed critical section %d\n",svalue);
}
