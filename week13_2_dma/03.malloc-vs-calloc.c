#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	char *zip; // zip code length in Azerbaijan is 6chars

	/* allocate memory (7 BYTES) dynamically for description */
	zip = (char*) malloc( (6+1) * sizeof(char) ); 
//	zip = (char*) calloc((6 + 1) , sizeof(char));

	if( zip == NULL ) 
	{
		fprintf(stderr, "Error - unable to allocate required memory\n");
		return EXIT_FAILURE;
	}

	/* As mentioned in previous code, ccalloc cleans the allocated memory, but malloc does not. 
	 *  But we can manually clean it ourself using memset function. Try to uncomment line15 and run again. */
//	memset(zip, 0, 7);

//	strcpy( zip, "AZ1008");

	// Below results are all GARBAGE values if we do not use memset or calloc:
	printf("%s\n", zip );
	printf("zip[0]=%d, zip[6]=%d \n", zip[0], zip[6]);
	  

	/* release taken memory (give back to RAM) using free() function */
	free(zip);
	
	/* after freeing, zip becomes DANGLING POINTER, so we should make it NULL */
	zip = NULL;

	return EXIT_SUCCESS;
}

/*
Now, remember, 
- We don't always have to clean (memset to 0) the allocated memory, as long as we know where we will write our meaningful data and access that data only.
- Cleaning is good. of course, but it spends some CPU to reset the bits to 0. 
- In the end of the day, you are going to write some data to that memory, which will override the previous garbage, anyways. 
- Therefore, most of the time we use malloc instead of calloc.
*/