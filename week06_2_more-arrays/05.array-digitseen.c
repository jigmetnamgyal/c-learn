/* Checks numbers for repeated digits */

#include <stdbool.h>   /* For bool type, C99 only */
#include <stdio.h>


int main(void)
{
	int n = 28151;
	bool arr[10] = { false };
	int digit;
	
	while (n > 0)
	{
		digit = n % 10; 
		if (arr[digit]) // have we seen this digit before? If so, stop!
			break;
		arr[digit] = true; // to check that we have seen this digit
		n /= 10; 
	}

	if (n > 0)
		printf("First repeated digit is %d\n", digit);
	else
		printf("No repeated digit\n");

	return 0;

}
