// This program is for finding if a given number is prime
//  using a boolean flag

#include <stdio.h>

// Since pure C doesn't have TRUE, FALSE values, we create our own:
#define TRUE 1
#define FALSE 0

int main()
{
	int n = 13; // try 12
	char isPrime = TRUE;

	for (int i = 2; i < n; i++) // this part can be optimized, think ...
	{
		if (n % i == 0)
		{
			printf("%d is NOT prime\n", n);
			isPrime = FALSE;
			break;
		}
	}

	if(isPrime)
		printf("%d is prime\n", n);
	
	return 0;
}