#include <stdio.h>
#include <stdlib.h> //for qsort() http://cplusplus.com/reference/cstdlib/qsort/

#define N 5

/* function prototypes */
int compare_asc(const void* left, const void* right);
int compare_desc(const void* left, const void* right);

int main()
{
	int arr[N] = {3, 7, 4, 1, 9};
 
	/* qsort can be used to sort arrays of ANY data type,
	 *  as long as we provide a proper comparator function.
	*/
    qsort(arr, N, sizeof(int), compare_asc); // try compare_desc instead

    for(int i=0; i<N; i++)
		printf("%d ", arr[i]);

	return 0;
}

/* A sample comparator function used for sorting an array in ascending order */
int compare_asc(const void* left, const void* right)
{
	int l_val = *(int*)left;
	int r_val = *(int*)right;

	return (l_val- r_val);

//	return ( *(int*)left - *(int*)right ); // just ONE line :)
}

/* A sample comparator function used for sorting an array in decscending order */
int compare_desc(const void* left, const void* right)
{
	int l_val = *(int*)left;
	int r_val = *(int*)right;

	return (r_val - l_val);

//	return ( *(int*)right - *(int*)left ); // just ONE line :)
}


/*
When given two pointers left and right to array elements, the comparison function must return an integer that is:
- Negative if *left is "less than" *right
- Zero if *left is "equal to" *right
- Positive if *left is "greater than" *right
*/