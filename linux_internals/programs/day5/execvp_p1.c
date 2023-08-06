#include<stdio.h>
#include<unistd.h>


int main()
{
	char *file = "./ro";
	 char *args[] = {"./ro",NULL};
	printf("hii i am a cricketer and my pid is :%d\n",getpid());
	execvp(args[0],args);
	printf("i love mangoes\n");
}
