/*
 * This program takes an integer and reverses its
 *  digits (e.g. 265 becomes 562)
 */

#include <stdio.h>


int main()
{
	int num, rev = 0;

	printf("Enter a positive integer: ");
	scanf_s("%d", &num);	// 274

	while (num > 0)
	{
		rev = rev * 10 + num % 10; // 
		num /= 10; // 
	}

	printf("Reversed num is: %d\n", rev);

	return 0;
}