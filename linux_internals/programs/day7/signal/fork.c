#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

static void signal_handler(int signo)
{
	if(signo==SIGUSR1)
	{
		printf("Parent:Caught SIGUSR1 in parent!\n");
	}
}

int main()
{
	int pidid;
	int sta=0;
	int num=5;
	pidid= fork();
	printf("the process id is:%d\n",getpid());

	if(pidid==-1)
	{
		printf("error in creating the child process\n");
	}
	if(pidid==0)
	{
		printf("successfully created the child process and my pid is %d\n",pidid);
		execl("./fork2.c","arg1","arg2",NULL);
		printf("child:LINE IS NOT PRINTED");
	}
	else
	{
		if(signal(SIGUSR1,signal_handler)==SIG_ERR)
		{
			printf(stderr,"cannot handle SIGUSR1!\n");
			exit(-1);
		}
		
	
	printf("\nParent:Parent executing before wait(),child process created by parent is = %d \n",pidid);
	sleep(2);
	kill(pidid,SIGUSR2);
	pidid=wait(&sta);

	printf("\nParent:wait() in parent done \n Parent pid=%d\n",getpid());
	printf("\nParent:cpid returned is (%d)\n ",pidid);
	printf("\nParent:status is (%d)\n",sta);
	}
	return 0;
}
