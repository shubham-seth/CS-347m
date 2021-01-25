#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int id = fork();
	if(id == 0)
	{
		printf("Child: My process ID: %d\n", getpid());
		printf("Child: Parent's process ID: %d\n", getppid());
	}
	else
	{
		printf("Parent: My process ID: %d\n", getpid());
		printf("Parent: Child's process ID: %d\n", id);
		int a = getc(stdin);
	}
	return 0;
}