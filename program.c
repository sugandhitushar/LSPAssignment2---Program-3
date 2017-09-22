#include"program.h"

int main(int argc, char *argv[])
{
	printf("Parent:: pid=%d\n",getpid());
	if(fork() == 0)
	{
		printf("Child1:: Created\n");
		printf("Child1:: pid=%d\n",getpid());
		printf("Child1:: Terminating\n");
	}
	else
	{
		if(fork() == 0)
		{
			printf("Child2:: Created\n");
			printf("Child2:: pid=%d\n",getpid());
			printf("Child2:: Terminating\n");
		}
		else
		{
			if(fork() == 0)
			{
				printf("Child3:: Created\n");
				printf("Child3:: pid=%d\n",getpid());
				printf("Child3:: Terminating\n");
			}	
		}
	}
}

