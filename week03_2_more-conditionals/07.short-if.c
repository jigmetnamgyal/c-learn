#include <stdio.h>

// Short if (Ternary if)

int main() 
{
	/* local variable definition */
	int num = -5;
	int abs;

/*
	if (num >= 0)
		abs = num;
	else
		abs = -num;
*/

	/* Same exact thing with ternary if: */
	abs = (num >= 0) ? num : -num;

	printf("The absolute value of %d is %d\n", num, abs);


	return 0;
}