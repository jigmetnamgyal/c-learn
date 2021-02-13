/* This program prints the following 
 *  with two different methods:
1             1
12           21
123         321
1234       4321
12345     54321
123456   654321
1234567 7654321
123456787654321
 */
 
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numOfRows = 8;

	// This method uses only 2 loops to do the task, it uses math stuff
	for (int row = 1; row <= numOfRows; row++) {
		for (int col = 1; col <= numOfRows*2-1; col++) {
			/*
			 * Symmetric column For example,
			 *  when col=1 and col=15 then col_sym=1 
			 *  when col=2 and col=14 then col_sym=2 
			 *  and so on...
			 */
			int col_sym = numOfRows - abs(numOfRows - col);
			if (col_sym <= row)
				printf("%d", col_sym);
			else
				printf(" ");

			// Same thing with Short-if
			// printf( (col_sym<=row) ? col_sym : " " );
		}

		printf("\n");

	}
}
	

