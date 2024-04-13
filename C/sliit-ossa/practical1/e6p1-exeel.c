#include<stdio.h>
#include<unistd.h>
int main(){
	printf("here comes the date. \n");
	execl("/bin/date", "date", 0); 
		//0 means the end of the argument
		//aboslute path of the command
		//command.
	printf("that was the date \n");

//execute predefined command in the unix (eg; ls)
}
