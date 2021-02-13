#include <stdio.h>

#pragma warning (disable : 4996)

#define BUF_SIZE 255

int main()
{
	char buff[BUF_SIZE];

	printf("What is your city of birth? ");

	// This scanf is reading from user from standard input (console)
	scanf("%s", buff); 

	/* redirect standard input to input.txt file */
	freopen("in.txt", "r", stdin); 

	/* The following scanf and fgets will read from the file */
//	fgets(buff, BUF_SIZE, stdin);
	scanf("%s", buff);

	printf("%s", buff);

	return(0);
}


