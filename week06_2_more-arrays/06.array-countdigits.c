/* Count the frequenct of repeated digits in a number*/

#include <stdio.h>

int main(void)
{
	int arr[10] = { 0 };
	int digit;
	int n = 28212;

	while (n > 0) 
	{
		digit = n % 10; 
		arr[digit]++; // increment the freq of the givin digit
		n /= 10; 
	}

	for (int i = 0; i < 10; i++)
		if(arr[i]) // print freq of digit only if freq is not zero:
			printf("Digit %d frequency: %d\n", i, arr[i]);


	return 0;

}
