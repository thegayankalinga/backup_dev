#include<stdio.h>
#include<unistd.h>
int main()
{
	int ret;
	printf("hello, world\n");
	ret = fork();

	if(ret == 0){
		printf("I am a child and return value %d\n", ret);
		printf("Child PID: %d,\n", getpid());
		printf("Child Parent PID %d\n", getppid());
	}else{
		printf("I am parent and return value %d\n", ret);
		printf("Parent PID: %d\n", getpid());
	}

//always ppid of the child == to pid of the parent
}
