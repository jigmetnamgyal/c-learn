/*
 * This program reads n (count of numbers to add) and adds n integers, 
 * finds the sum.
 */

#include <stdio.h>

int main () 
{
	int n;
	int sum = 0, value;

	printf("How many numbers you want to add?  ");
	scanf("%d", &n);

  	printf("Thank you! So, this program adds up %d numbers.\n", n);
	

	for (int i = 0; i < n; i++) 
	{
		scanf_s("%d", &value);
		sum += value;
	}

	printf("The sum of %d numbers is: %d\n", n, sum);
 
	return 0;
}