#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */
#include <semaphore.h>
#include <unistd.h>
#include <stdio.h>


int main()
{
	int svalue;
        unsigned int value;
        sem_t *sem1;

        sem1 = sem_open("/pritam",O_CREAT | O_RDWR,0666,2);

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

}

