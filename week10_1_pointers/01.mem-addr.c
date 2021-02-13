#include <stdio.h>

int main()
{
	int num = 5;
	int arr[3] = { 2, 5, 8 };

	printf("Address of num: %p %d\n", &num, &num);

	/* For array addresses we MAY skip using & (ampersand) symbol,
	* becase name of the array is already the memory address of it.	*/
	printf("Address of &arr: %p\n", &arr);
	printf("Address of arr:  %p\n\n", arr);

	/* Result of &arr and arr and &arr[0] are the same, because all of them
	* represent the address of the beginning of array.
	* Next element arr[1] address is 4 Bytes away, 
	*  next after that is 4 Bytes after that so on...
	*/
	printf("Address of arr[0]: %p\n", &arr[0]);
	printf("Address of arr[1]: %p\n", &arr[1]);
	printf("Address of arr[2]: %p\n", &arr[2]);

	return 0;
}