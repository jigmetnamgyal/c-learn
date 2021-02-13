/*
 * This program sums the digits in a positive integer.
 * The program depends on the fact that the last digit of
 * an integer n is given by n % 10 and the number consisting
 * of all but the last digit is given by the expression n / 10.
 */

#include <stdio.h>


int main()
{        
	int n;
	int sum = 0;
	
	printf("Enter a positive integer: ");
	scanf_s("%d", &n);		
	
	while (n > 0) 
	{
		sum += n % 10;
		n /= 10;
	}
	
	printf("Sum of the digits is %d\n", sum);
 
	return 0;
}
