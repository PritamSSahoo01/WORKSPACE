#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */
#include <semaphore.h>
#include <unistd.h>
#include <stdio.h>


int main()
{
	unsigned int value;
	sem_t *sem;

	sem = sem_open("/sem1",O_CREAT | O_RDWR,0666,1);

	if(sem==SEM_FAILED)
	{
		perror("sem_open failed");
	}
	else
	{
		printf("\nsem_open success\n");
	}
}

