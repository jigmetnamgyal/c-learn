#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning (disable : 4996)

int main() 
{
	char *description;

	/* allocate memory (200 BYTES) dynamically for description */
	description = (char*) calloc(200, sizeof(char)); 

	/* calloc is same with malloc, except it cleans the allocated memory,
	 *  which means it sets all bits to 0, but malloc does not. See next example. */

	if( description == NULL ) 
	{
		fprintf(stderr, "Error - unable to allocate required memory\n");
		return EXIT_FAILURE;
	}
	 
	strcpy( description, "Anar ali a CS student in class 10th");

	printf("Description: %s\n", description );

	/* release taken memory (give back to RAM) using free() function */
	free(description);
	
	/* after freeing, variable becomes DANGLING POINTER, so we should make it NULL */
	description = NULL;

	return EXIT_SUCCESS;
}