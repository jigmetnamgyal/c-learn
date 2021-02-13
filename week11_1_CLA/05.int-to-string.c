/* itoa example */
#include <stdio.h>      /* printf, sprintf */
#include <stdlib.h>     /* itoa() */
#include <string.h>

#pragma warning (disable : 4996)

// my_itoa ?

int main()
{
	const int NUM = 12;
	char str[20];

	itoa(NUM, str, 10);
	//sprintf(str, "%d", num);
	printf("decimal: %s\n", str); // "12"

	itoa(NUM, str, 16);
	//sprintf(str, "%x", num);
	printf("hexadecimal: %s\n", str); // C

	itoa(NUM, str, 2);
	printf("binary: %s\n", str); // 1100

	return 0;
}