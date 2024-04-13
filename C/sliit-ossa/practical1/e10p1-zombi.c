#include<stdio.h>
#include<unistd.h>
int main()
{
	int id; 
	if ((id = fork()) == 0){
		printf("I am  child process \n");
	}else{
		while(1)
			sleep(10);
	}

//parent is never ending
//since the parent is not taking a value from child to terminate
//parent is in the sleep hence child cannot send the signal
//in that case child is a zombi
// to end ctrl + z
//use ps -l & kill -9 pid to kill the zombi completely
}
