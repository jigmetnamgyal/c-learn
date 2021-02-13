#include <stdio.h>

#define N 3

int main()
{
	int  a = 4, b = 9, c = 7;
	int *arr_p[N]; // array of pointers to int

	/* assign the address of integers to the elements of  the array,
	 *  which are pointers to int */
	arr_p[0] = &a;
	arr_p[1] = &b;
	arr_p[2] = &c;


	for (int i = 0; i < N; i++)
	{
		printf("Address of arr_p[%d] = %p\n", i, arr_p[i]);
		printf("Value of arr_p[%d] = %d\n\n", i, *(arr_p[i]));
	}

	return 0;
}