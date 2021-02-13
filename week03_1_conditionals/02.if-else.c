#include <stdio.h>

int main() 
{
	/* local variable definition */
	int a, b;

	printf("Please enter two integers: ");
	scanf_s("%d%d", &a, &b);

	if (b != 0) 
		printf("a/b = %d\n", a / b);
	else
		printf("Dude! Not zero for b please!\n");

	printf("\n");

	/* check the boolean condition */
	if (a < 5)
	{
		/* if condition is true then print the following */
		printf("good times\n");
		printf("yaxsi vaxtlar\n");
	}
	else 
	{ // a>=5
		/* if condition is false then print the following */
		printf("bad times\n");
		printf("pis vaxtlar\n");
	}

	printf("value of a is : %d\n", a);

	return 0;
}