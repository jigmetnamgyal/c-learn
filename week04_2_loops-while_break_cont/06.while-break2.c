/*
 * This program adds as many integers as you want.
 Stop adding by entering 0.
 */

#include <stdio.h>

#define SENTINEL 0 // Sentinel means stopping point

int main () 
{
	int sum = 0, value;

	printf("Enter a number to sum up\n");
	printf("Enter 0 (zero) to stop at ANY TIME!\n");

	while (1)
	{
		scanf_s("%d", &value);

		if (value == SENTINEL)
			break;

		sum += value;
	}

	printf("The sum of numbers is: %d\n", sum);

	return 0;
}