# CommandHunt
CommandHunt is a command line tool that is used to visibly see all of the previous commands that you have ran on your machine, in certain folders, and gives the ability to search via keywords

# Commands 
When running CommandHunt in the Terminal there a few key Commands you need to know to get started. 

## CommandHunt
Running CommandHunt or CommandHunt plus any unknown argument will cause CommandHunt to throw an error, with the basic error message saying - 

'Unkown command, to get a list of Commands see CommandHunt --help'

## CommandHunt --help 
CommandHunt --help will output all of the commands and their descriptions

## CommandHunt -c'[Key-Word]'
This command will output all of your recent commands with that keyword, searching from the root level and displaying where the command was used, under each file where it was used

## CommandHunt -c'[Key-Word]' u-3 d-2
This example command will show anywhere you used this keyword and then the three commands before you used it, and two commands after

## CommandHunt -fc'[Command]' u-1 d-2
This command, using fc shows where you used that full command, e.g. -c if you use 'npm i' will show all commands where you use npm i, npm install, npm init etc. however if you use the -f flag, it will only include verbatim nmp i.

## CommandHunt -c'[Key-Word]' --f '[File Name]'
This will show commands that have been run in this specific file.

## CommandHunt --cc
This will clear your cache of any saved commands


# Aims
the Aim of CommandHunt is to not use any unessecary memory, commands will be remembered where they have been ran without using excess memory or storage.
