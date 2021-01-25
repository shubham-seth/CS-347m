#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
	FILE *fptr;
	fptr = fopen(argv[1], "w");

	int id = fork();
	if(id==0)
		fprintf(fptr, "Hello world! I am child\n");
	else
	{
		fprintf(fptr, "Hello world! I am parent\n");
		wait(NULL);
		fclose(fptr);
		printf("The child process with process ID %d has terminated.\n", id);
	}
	return 0;
}