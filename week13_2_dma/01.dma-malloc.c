#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#pragma warning (disable : 4996)

int main() 
{    
	/* this is simply for pausing the program (until you press Enter). 
	 * Run the program and then open your Task Manager (Activity Monitor in Mac) 
	 *  and see how much memory in RAM your program takes... */
	getchar();

	char *description = NULL;

	/* allocate memory (200 BYTES) dynamically for description */
	description = (char*) malloc(200 * sizeof(char) ); //try INT_MAX which is = 2 GB; also try INT_MAX/2 which is 1 GB

	if( description == NULL ) 
	{
		fprintf(stderr, "Error - unable to allocate required memory\n");
		return EXIT_FAILURE; // same with return 1
	}
	
	strcpy( description, "Anar Ali a CS student in class 10th");

	printf("Description: %s\n", description );

	getchar(); // pause the program

	/* release taken memory (give back to RAM) using free() function */
	free(description); 
	
	/* after freeing, variable becomes DANGLING POINTER, so we should make it NULL */
	description = NULL; 

	getchar(); // pause the program

	return EXIT_SUCCESS; // same with return 0
}