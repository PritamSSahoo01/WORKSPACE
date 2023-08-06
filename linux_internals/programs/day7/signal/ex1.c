#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void fun(int sig)
{
	printf("ohh! - I got signal from sigterm %d \n",sig);
	//(void) signal(SIGINT,SIG_DFL);
	//printf("i wake up");
	//alarm(2);
	
}

int main()
{
	
	(void) signal (SIGINT,fun);
	printf("the pid is :%d\n",getpid());
	while(1)
	{
		(void)signal(SIGALRM,SIG_DFL;
		//alarm(2);

		printf("Hello world\n");
		sleep(1);
		//alarm(2);
	}
	return 0;
}
