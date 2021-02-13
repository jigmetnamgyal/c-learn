#include <stdio.h>

int main() 
{
	/* local variable definition */
	int a = 5;

	/* check the boolean condition */
	if (a < 5) 
	{
		/* if condition is true then print the following */
		printf("good times\n");
		printf("yaxsi vaxtlar\n");

		// when more than one single-line statements then MUST use curly braces {}
	}

	if (a > 3)
	{
		/* if condition is true then print the following */
		printf("better times\n");

		// when only one single-line statement then MAY skip curly braces {}
		//  but still recommended to use the braces for now
	}


	printf("value of a is : %d\n", a);

	return 0;
}