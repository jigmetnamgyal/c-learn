#include <stdio.h> 

#pragma warning (disable : 4996)

// This program prints the size of the given file

/* 
http://www.cplusplus.com/reference/cstdio/ftell/
https://www.geeksforgeeks.org/ftell-c-example/ 

http://www.cplusplus.com/reference/cstdio/fseek/
https://www.geeksforgeeks.org/fseek-in-c-with-example/
*/

int main()
{
	FILE *fp;
	fp = fopen("input.txt", "r");

	// Moving pointer (cursor) to end of the file:
	fseek(fp, 0, SEEK_END);

	// Printing position of pointer 
	printf("%ld", ftell(fp) );

	fclose(fp);

	return 0;
}