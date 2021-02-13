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


int main()
{
 	int numOfRows = 8;

	// This method uses three loops to do the task
	for (int row = 1; row <= numOfRows; row++) 
	{
		for (int j = 1; j <= numOfRows; j++) 
		{
			if (j <= row)
				printf("%d", j);
			else
				printf(" ");

			// Same thing with Short-if
			// printf( (j<=row) ? j : " " );
		}

	
		for (int j = numOfRows-1; j >= 1; j--) 
		{

			if (j <= row)
				printf("%d", j);
			else
				printf(" ");

			// Same thing with Short-if
			// printf( (j<=row) ? j : " " );
		}

		printf("\n");

	}

}

