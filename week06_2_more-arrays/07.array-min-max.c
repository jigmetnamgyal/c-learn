/* Finds the minimum and the maximum numbers of an array */
#include <stdio.h>
//#include <limits.h> // for INT_MAX and INT_MIN

#define N 4

int main()
{
	int arr[N] = { 4, 6, 1, 8 }; 
	
//  int min = INT_MAX; 
//	int max = INT_MIN;
    
    int min = arr[0]; 
	int max = arr[0];

	for (int i = 0; i < N; i++)
	{
		if (arr[i] < min) 
			min = arr[i]; 
		if (arr[i] > max)
			max = arr[i];
	}
	
	printf("Minimum is %d\n", min); // 1
	printf("Maximum is %d\n", max); // 8

	return 0;
}
