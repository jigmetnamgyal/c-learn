/*
 * This program adds N integers, where N is specified as a
 * named constant.
 */

#include <stdio.h>

#define N 3 // declaring a constant
 
int main () 
{
	int total = 0, i, value;

  	printf("This program adds up to %d numbers.\n", N);
	
	for (i = 0; i < N; i++) 
	{
		scanf_s("%d", &value);
		total += value;
	}

	printf("The total of %d numbers is: %d\n", N, total);

 
	return 0;
}