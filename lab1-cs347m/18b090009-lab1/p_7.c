#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	if(fork()==0)
	{
		printf("Child: %d\n", getpid());
		int a = getc(stdin);
	}
	else
	{
		printf("Parent: %d\n", getpid());
		sleep(60);
		wait(NULL);
		printf("Exiting Parent: %d\n", getpid());
	}
	return 0;
}