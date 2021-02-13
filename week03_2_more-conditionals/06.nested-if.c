#include <stdio.h>

int main() 
{
	/* local variable definition */
	int num = 5;

	/* nested if statements: */
	if (num > 0)
	{
		if (num % 2 == 0)
			printf("Positive and even\n");
		else
			printf("Positive and odd\n");
	}
	else
	{
		printf("Negative or zero \n");
	}

	/* same thing with else if statements: */
	if (num > 0 && num % 2 == 0)
		printf("Positive and even\n");
	else if (num > 0 && num % 2 != 0)
		printf("Positive and odd\n");
	else
		printf("Negative or zero\n");




	printf("Your num is : %d\n", num);

	return 0;
}