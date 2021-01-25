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
		char *path[] ={"./runme",NULL}; 
		execvp(path[0], path);
	}
	else
		wait(NULL);
	return 0;
}