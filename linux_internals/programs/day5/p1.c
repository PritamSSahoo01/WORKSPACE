#include<stdio.h>
#include<unistd.h>

int main()
{
	char *args[] = {"./result",NULL};
	printf("hello biswajit i am pritam and my pid is:%d\n",getpid());
	execv(args[0],args);
	printf("hello ram\n");

}
