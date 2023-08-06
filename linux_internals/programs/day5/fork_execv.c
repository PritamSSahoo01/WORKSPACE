#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>


int glo_val;


int main()
{
	int def;
	glo_val=5;
	pid_t fork_value;
	fork_value=fork();
	if(fork_value<0)
	{
		printf("failed to create a child");
	}
	else if(fork_value==0)
	{
		glo_val=10;
		printf("value_child:%d\n",glo_val);
		printf("i am in child and my pid is %d\n",getpid());
		//char *args[]={"./result",NULL};
		//execv(args[0],args);
		sleep(3);
	}
	else
	{
		//wait(&def);
		printf("i am in parent and my pid is :%d\n",getpid());
		printf("value_parent:%d\n",glo_val);
		
		sleep(5);
	}
}

