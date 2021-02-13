#include <stdio.h>

/* void type can only be used as a function's return type 
 *  which represents no value to be returned.
 */

void my_puts(char* str)
{
	if (str[0] == 'R')
		return; // means exit from function if str begins with R

	printf("%s\n", str);

	return;
}

int main()
{
	my_puts("Hello there!");
	my_puts("How do you do?");
	my_puts("Rocket"); // not printed, why?

	return 0;
}