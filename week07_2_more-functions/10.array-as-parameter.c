#include <stdio.h>

#define N 5

/* function declarations */
double getAverage(int arr[], const int LEN);
void printArray(int arr[], const int LEN);

int main()
{
	/* an int array with N elements */
	int array[N] = { 10, 2, 5, 17, 50 };
	double avg;

	/* pass the array as an argument */
	avg = getAverage(array, N);

	/* output the returned value */
	printf("Average value is: %f \n\n", avg);

	printf("Array elements: \n");
	printArray(array, N);

	return 0;
}


double getAverage(int arr[], const int LEN)
{
	double avg;
	int sum = 0;

	for (int i = 0; i < LEN; ++i)
		sum += arr[i];

	avg = (double)sum / LEN;

	return avg;
}


void printArray(int arr[], const int LEN)
{
	for (int i = 0; i < LEN; i++)
		printf("%d ", arr[i]);

	printf("\n");
}