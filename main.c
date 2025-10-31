#include <stdio.h>
#include "commands.h"
#include <unistd.h>
//unistd.h can be used to check if a file exists an also if it is a folder that you can go into

int main(int argc, char* argv[]){
	if (argc == 1){
	printf("Please provide a command or see 'commandhunt --help'\n");
	}
	else {
	checkCommands();
	}
	return 0;
}
