#include <stdio.h>
#include <string.h>

#pragma warning(disable : 4996)

#define N 20

int main () 
{
	char str[N];

	// We can enter strings with max length of of N-1, otherwise CRASH
	scanf("%s", str); // scanf by default reads until whitespace (space, tab, newline)
	printf("str is: %s\n", str);

	//getchar(); // read the \n and ignore it

	// Another method "gets()" for reading strings, but also CRASH if more than N-1 characaters entered:
//	gets(str); // almost same thing with scanf("%s", str) but accepts space, works only with strings
//	puts(str); // almost same thing with printf("%s", str), works only with strings

	// fgets() is the recommended method for reading strings from stdin (user input), NO CRASH:
//	fgets(str, N-1, stdin);
//	puts(str);

	return 0;
}