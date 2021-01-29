#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
	FILE *fptr;
	close(0);
	fptr = fopen(argv[1], "r");
	
	if(fork()==0)
	{
		char *commands[]={"./sample", NULL};
		execve(commands[0], commands, NULL);
		fclose(fptr);
	}
	else
		wait(NULL);
	return 0;
}
