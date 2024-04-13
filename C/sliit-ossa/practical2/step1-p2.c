#include<stdio.h>
#include<unistd.h>
int main()
{
	int pid;
	for(int i=0; i<10; i++)
	{
		if(pid = fork() < 0)
		{
			//error
		}else if(pid == 0){
			function_A();
			return 0;
		}

		printf("process ID: %d \n", pid); //Line A
	}
	
	for(int i=0; i<10; i++)//Line B
	wait();
}
