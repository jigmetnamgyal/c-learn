#include <stdio.h>

#define N 5

int main()
{
	int arr[3]; // at this moment 3 garbage values

	// Normal initialization, load arr with values:
	int arr1[N] = { 3, 7, 8, 1, 11 };

	// Clean the array:
	int arr2[N] = { 0 }; // [0, 0, 0, 0, 0]

	// You may skip specifying the length of the array, C will do it for you:
	int arr3[] = { 7, 5, 9 }; // length of arr3 is 3


	// Designated initializers work only with C99 compilers, not in C++ (C11, C14)
    //  This type of initializations are NOT used today in programming, so forget about it.
	int arr4[15] = { [2] = 29,[9] = 7,[14] = 48 };

	int arr5[] = { [2] = 29,[9] = 7,[18] = 48 }; // length of arr5 is 19 (18+1)


	// print arr1 elements:
	for (int i = 0; i < N; i++)
		printf("%d ", arr1[i]);


	return 0;
}