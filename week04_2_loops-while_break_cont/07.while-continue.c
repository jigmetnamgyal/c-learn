#include <stdio.h>

int main()
{

	/* local variable definition */
	int a = 10;

	/* while loop execution */
	while (a < 20)
	{
		if (a % 2 == 0)
		{
			a++;
			/* continue keyword skips the rest of the loop 
			* and goes back to the beginning of the loop */
			continue;
		}

		printf("value of a: %d\n", a);
		a++;
	}


	return 0;
}