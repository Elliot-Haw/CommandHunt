# include <stdio.h>

int main(int argc, char* argv[]){
	if (argc == 1){
	printf("Please provide a command or see 'commandhunt --help'\n");
	}
	//else call Commands Function in here
	return 0;
	//Have a few cases that check if the arguments is greater than one and if it is run it in the Commands Header File
	//
	//Other wise print unknown command for a list of commands enter --h
	//
	//Notes - History can be found based on the shell the user is using
	//If  the current session hasn't ended the session will still be live so the history won't be stored
}
