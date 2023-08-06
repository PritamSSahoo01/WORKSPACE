#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void fun(int sig)
{
       // printf("ohh! - I got signal from sigterm %d \n",sig);
        //(void) signal(SIGINT,SIG_DFL);
        //printf("i wake up");
	printf("hii i am from sighub");
        //alarm(2);

}
void fun1(int si)
{
	printf("hii i am from sigkill");
}

int main()
{
	printf("the pid is :%d\n",getpid());
	
	(void)signal(SIGHUP,fun);

        (void) signal (SIGKILL,fun1);
        //alarm(2);
        // printf("the pid is :%d\n",getpid());
        while(1)
        {
               // (void)signal(SIGALRM,fun);
                //alarm(2);

                printf("Hello world\n");
                sleep(1);
                //alarm(2);
        }
        return 0;
}

