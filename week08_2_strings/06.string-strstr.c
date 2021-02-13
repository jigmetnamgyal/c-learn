#include <stdio.h>
#include <string.h>

int main () 
{
	const char str[] = "ada.edu.az";
	const char word[] = "edu"; // try "bye"
	char *result;

	// strstr() searches for the first occurrence of the substring that begins with word: 
	result = strstr(str, word); // edu.az

	printf("The substring is: %s\n", result);

	return(0);
}