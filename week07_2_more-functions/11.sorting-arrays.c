/*
 * Go to this link to see how the below algorithms work visually:
 * https://visualgo.net/bn/sorting 
*/


#include <stdio.h>

#define N 15

/* function prototypes: */
void printArray(int arr[], const int LEN);

void bubble_sort(int arr[], const int LEN);
void selection_sort(int arr[], const int LEN);
void insertion_sort(int arr[], const int LEN);

int main()
{
	/* an int array with N elements */
	int array[N] = { 3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48 };

	printf("Array before sorting: \n");
	printArray(array, N);

	// Try each of the following algorithms (one at a time):
	bubble_sort(array, N);
//	selection_sort(array, N);
//	insertion_sort(array, N);

	printf("Array after sorting: \n");
	printArray(array, N);

	return 0;
}


void printArray(int arr[], const int LEN)
{
	for (int i = 0; i < LEN; i++)
		printf("%d ", arr[i]);

	printf("\n");
}

void bubble_sort(int arr[], const int LEN)
{
	int temp;

	for (int i = 0; i < LEN - 1; i++)
	{
		// Last i elements are already in place (sorted):
		for (int j = 0; j < LEN - i - 1; j++)
		{
			/* To sort in ascending order, we use > 
			 * To sort in ascending order, we use < 
			 */
			if (arr[j] > arr[j + 1]) 
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void selection_sort(int arr[], const int LEN)
{
	int min_idx, temp;

	// One by one move boundary of unsorted subarray:
	for (int i = 0; i < LEN - 1; i++)
	{
		// Find the minimum element in unsorted array:
		min_idx = i;
		for (int j = i + 1; j < LEN; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;

		// Swap the found minimum element with the i-th element:
		temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;
	}
}

void insertion_sort(int arr[], const int LEN)
{
	int j, key;

	for (int i = 1; i < LEN; i++)
	{
		key = arr[i];
		j = i - 1;

		/* Move elements of arr[0..i-1], that are
		   greater than key, to one position ahead
		   of their current position */
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}