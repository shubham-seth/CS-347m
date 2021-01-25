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
		printf("Child: Child process ID: %d\n", getpid());
		printf("Child: Parent process ID: %d\n", getppid());
		sleep(2);
		printf("Child: Child process ID: %d\n", getpid());
		printf("Child: Parent process ID: %d\n", getppid());
	}
	else
	{
		sleep(1);
		printf("Parent: Parent process ID: %d\n", getpid());
		exit(0);
	}
	return 0;
}