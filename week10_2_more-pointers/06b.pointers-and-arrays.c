#include <stdio.h>

#define N 3

int main()
{
	int  arr[] = { 4, 9, 7 };

	for (int i = 0; i < N; i++)
		printf("Value of arr[%d] = %d\n", i, arr[i]);

	printf("\n");

	/* Same exact thing as above, with pointers */
	for (int i = 0; i < N; i++)
		printf("Value of *(arr + %d) = %d\n", i, *(arr + i));

	return 0;
}