/* Reverses a series of numbers */
#include <stdio.h>

#define N 5

int main(void)
{
	int a[N] = { 4, 6, 1, 8, 9 }; // Let's make it  [9 8 1 6 4]
	int temp;

	// print the original array:
	for (int i = 0; i < N; i++)
		printf("%d ", a[i]);
	printf("\n");

	for (int i = 0; i < N / 2; i++)
	{
		temp = a[i];
		a[i] = a[N - 1 - i];
		a[N - 1 - i] = temp;
	}

	// print the reversed array:
	for (int i = 0; i < N; i++)
		printf("%d ", a[i]);

	return 0;
}
