#include <stdio.h>

int main () 
{
	char str1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
	char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
	char str3[6] = "Hello";
	char str4[] = "Hello"; // try "Hello\0 World"
	//char *str5 = "Hello"; // pointers to be discussed later

	//str1 = "bye"; // try str5 = "bye";

	//str1[0] = 'T';

	printf("str1: %s\n", str1 ); // Hello
	printf("str2: %s\n", str2 ); // Hello
	printf("str3: %s\n", str3 ); // Hello
	printf("str4: %s\n", str4 ); // Hello
	//printf("str5: %s\n", str5 );

	return 0;
}