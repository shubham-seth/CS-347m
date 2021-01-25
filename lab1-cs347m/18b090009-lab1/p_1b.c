#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int id = fork();
	if(id==0)
		printf("Child process id: %d\n", getpid());
	else
	{
		wait(NULL);
		printf("The child process with process ID %d has terminated.\n", id);
	}
	return 0;
}