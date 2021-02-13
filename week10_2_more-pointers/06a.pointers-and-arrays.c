#include <stdio.h>

#define N 3

int main()
{
	int arr[] = { 4, 9, 7 }; // try short, char or long long instead of int

	// The below couples of statements are the SAME things:
	printf("Address of arr[0] = %p\n", &(arr[0]));
	printf("Address of arr[0] = %p\n\n", arr);

	printf("Address of arr[1] = %p\n", &(arr[1]));
	printf("Address of arr[1] = %p\n\n", arr + 1);

	printf("Address of arr[2] = %p\n", &(arr[2]));
	printf("Address of arr[2] = %p\n\n", arr + 2);

	return 0;
}