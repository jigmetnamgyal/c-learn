/*
 * This program adds up to N integers, where N is specified as a
 * named constant. You may stop adding by entering 0.
 */

#include <stdio.h>

#define N 10
#define SENTINEL 0 // Sentinel means stopping point

int main () {
	int sum = 0, value;

	printf("Enter a number to sum up\n");
	printf("Enter 0 (zero) to stop at ANY TIME!\n");

	for (int i = 0; i < N; i++) 
	{
		scanf_s("%d", &value);

		if (value == SENTINEL)
			break;

		sum += value;
	}

	printf("The sum of numbers is: %d\n", sum);

	return 0;
}