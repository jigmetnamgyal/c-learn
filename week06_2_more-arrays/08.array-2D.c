#include <stdio.h>

#define N_ROWS 3
#define N_COLS 4

int main () 
{
	/* an array with 3 rows and 4 columns*/
	int m_arr[N_ROWS][N_COLS] = {  
		{0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
		{4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
		{8, 9, 10, 11}   /*  initializers for row indexed by 2 */
	};

	
	/* output each array element's value using nested for loops */
	for (int i = 0; i < N_ROWS; i++ ) 
	{
		for (int j = 0; j < N_COLS; j++ ) 
		{
			printf("arr[%d][%d] = %d\n", i,j, m_arr[i][j] );
		}
	}


	/* fun times */
	int arr[3][7] = { 0 }; // this initializes the array to 0
	printf("%d\n", sizeof(arr[0][0]));	// ?
	printf("%d\n", sizeof(arr[0]));	// ?
	printf("%d\n", sizeof(arr)); // ?	

	return 0;
}