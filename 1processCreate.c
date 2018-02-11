//Code to demonstrate process creation and process termination
#include <stdio.h>
#include <sys/types.h>
#include <wait.h>
#include <unistd.h>
void main(){
	pid_t pid;
	pid=fork();

	if(pid==0){//child process
		printf("Child Process Created\n");
	}
	else{
		wait(NULL);
		printf("Waiting for child to exit...\n");
		printf("Child exited\n");
		printf("Parent exiting..");
	}
}
