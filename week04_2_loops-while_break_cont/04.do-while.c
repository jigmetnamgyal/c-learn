#include <stdio.h>

int main()
{

	/* local variable definition */
	int a = 1; // try 25 to see the difference between while and do-while

	/* do loop execution */
	do
	{
		printf("value of a: %d\n", a);
		a++;
	} while (a < 20);

	printf("LAST value of a: %d\n", a);

	return 0;
}