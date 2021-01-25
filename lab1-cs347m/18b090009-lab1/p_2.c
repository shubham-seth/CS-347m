#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	printf("I am parent with PID %d\n", getpid());
	for(int i=0; i<3; i++)
	{
		if(fork()==0)
		{
			printf("I am child with PID %d from PPID %d\n", getpid(), getppid());
			exit(0);
		}
	}
	wait(NULL);
	return 0;
}