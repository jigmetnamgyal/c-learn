#include <stdio.h>

/* Open the Terminal (or cmd in Windows).
 * Navigate to the folder where you have the executable file (using "cd" command).
 * Execute the exe file from there like this:
 For Windows: week.exe hello 
 For Mac/Linux: week hello
*/

int main( int argc, char *argv[] )  
{
	printf("Your program's name is: %s\n", argv[0]); // week.exe

	if( argc == 2 ) 
		printf("The given argument is %s\n", argv[1]);
	else if( argc > 2 ) 
		printf("Too many arguments given.\n");
	else
		printf("Give only ONE argument!\n");

	return 0;
}