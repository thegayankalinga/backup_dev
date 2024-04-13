#include<stdio.h>
#include<unistd.h>
int main()
{
//returning values of the fork()
//if it is minus value means fork() is not successful
//if it is returning 0, always it is a child process
//if it is + values, it is the parent process
	
	int ret;
	printf("i am parent\n");
	ret = fork();
	if(ret > 0){
		printf("i am a parent \n");
	}else if(ret == 0){
		printf("I am child \n");
	}else{
		printf("unsuccessful \n");
	}
	printf("return value: %d \n", ret);
	
}
