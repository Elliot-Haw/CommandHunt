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
	//Notes - History can be found based on the shell the user is using
	//If  the current session hasn't ended the session will still be live so the history won't be stored
}
