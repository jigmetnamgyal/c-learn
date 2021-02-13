#include <stdio.h>
#include <stdlib.h>

int main () 
{
	const char str1[] = "1996 Feb 29 at 3 pm"; // try "lala1996"
	const char str2[] = "3.14 is PI";	// try "lala3.14"

	long result1; 
	double result2;
	char* remaining; // empty string

	/* Converts any number ONLY at the beginning of str1 to a long value with base 10 (decimal)
		and puts the rest of the string in remaining.
	 * If str1 begins with non-digit, then result is 0 and remaining=str1. */
	result1 = strtol(str1, &remaining, 10); 
	printf("The number (integer) is %ld\n", result1); 
	printf("Remaining string part is: %s\n\n", remaining);

	/* Converts any number ONLY at the beginning of str2 to a double value
		and puts the rest of the string in remaining.
	 * If str2 begins with non-digit, then result is 0.0 and remaining=str2. */
	result2 = strtod(str2, &remaining); 
	printf("The number (integer) is %f\n", result2); 
	printf("Remaining string part is: %s\n", remaining);

	return(0);
}