#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>


int main()
{
	int pid;
	printf("Hello fork\n");
	printf("my PID is:%d and my PPID is :%d\n",getpid(),getppid());
	pid=fork();
	printf("Hello fork\n");
	printf("my PID is:%d and my PPID is :%d\n",getpid(),getppid());
	printf("value of after pid is:%d\n",pid);
	/*if((pid==fork()) == 0)
	{
		printf("hello from the child\n");
	}
	else
	{
		printf("hello from the parent\n");
	}*/
	if(pid>0)
	{
		printf("i am from parent");
	}
	else
	{
		printf("i am from child");
	}
	getchar();
}
