// This program is for finding if a given number is prime
//  using a loop counter i

#include <stdio.h>

int main()
{
	int n = 13; // try 12

	int i = 0;

	for (i = 2; i < n; i++) // this part can be optimized, think ...
	{
		if (n % i == 0)
		{
			printf("%d is NOT prime\n", n);
			break;
		}
	}

	if (i==n)
		printf("%d is prime\n", n);
	
	return 0;
}