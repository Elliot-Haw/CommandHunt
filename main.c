#include <stdio.h>
#include "commands.h"

int main(int argc, char* argv[]){
	if (argc == 1){
	printf("Please provide a command or see 'commandhunt --help'\n");
	}
	else {
	checkCommands();
	}
	return 0;
}
