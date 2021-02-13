#include <stdio.h>

#define N 5

int main()
{
	int arr[N]; 
    /* arr is an array of N (5) integers.
    *   In C language, N MUST be a constant! If variable, then compile error:
    //int n = 6;
	//int arr2[n];
    
    *  But in C++ and other subsuqent languages the above works alright.
    */
    

	int sum = 0;
	double ave;
    
    
    // This prints Garbage (useless) values, why???
    for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n");
    

	/* Clean (reset) the array, otherwise it has garbage values inside:
	* (there is another simpler way, look at "array2.c")
	*/
	for (int i = 0; i < N; i++)
		arr[i] = 0;

    // Now we have clean (zero) values:
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n");
    

	// load the array with user values:
	for (int i = 0; i < N; i++)
		scanf_s("%d", &arr[i]);


	// find average of array elements:
	for (int i = 0; i < N; i++)
		sum += arr[i];

	ave = sum * 1.0 / N;

	printf("Average is: %f", ave);

	return 0;
}