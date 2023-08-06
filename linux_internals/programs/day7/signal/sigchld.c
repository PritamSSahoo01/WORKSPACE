#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

void signal_handler()
{
        printf("i am in the handler\n");
	wait(NULL);
}

int main()
{
        int pid;
        pid= fork();
        printf("the process id is:%d\n",getpid());

        if(pid==-1)
        {
                printf("error in creating the child process\n");
        }
        if(pid==0)
        {
                printf("successfully created the child process and my pid is %d\n",pid);
        }
        else
        {
		printf("i am in parent process\n");
               (void)signal(SIGCHLD,signal_handler);
	       while(1)
	       {
	       		printf("phytec\n");
			sleep(2);
	       }
	}
}

