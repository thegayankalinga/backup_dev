#include<stdio.h>
#include<unistd.h>
int main(){
	int id;
	if((id = fork()) == 0){
		printf("i am child process \n");
		sleep(10);
	}else{
		printf("i am parent process \n");
		//add wait to avoid orphan child process
		wait(12);
	}

//since the child is waiting 10 sec
//parent has already terminated
//when child try to send signal no parent found
//child will be adopted by the init process & PPID will be 1


}
