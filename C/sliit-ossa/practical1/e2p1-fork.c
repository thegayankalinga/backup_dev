#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("I a parent\n");
	//in the child process anything before the fork() will not be executed
	fork();
	printf("hello world...!\n");
	//execute parent then fork then execute the child then goback to parent & execute
}
