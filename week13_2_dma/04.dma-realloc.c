#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning (disable : 4996)

int main()
{
	char *str;

	/* allocate memory (25 BYTES) dynamically for str */
	str = (char*)malloc(25 * sizeof(char));

	if (str == NULL)
	{
		fprintf(stderr, "Error - unable to allocate required memory\n");
		return EXIT_FAILURE;
	}

	printf("Address of str (after malloc):  %p\n", str);
	strcpy(str, "Anar ali a CS student."); // this sentence occupies 23 BYTES

	/* suppose for storing even longer str you want not just 25 BYTES, but 100 BYTES */
	str = (char*)realloc(str, 100 * sizeof(char));

	if (str == NULL)
	{
		fprintf(stderr, "Error - unable to allocate required memory\n");
		return EXIT_FAILURE;
	}

	printf("Address of str (after realloc): %p\n", str); // anything different?

	strcat(str, " She is a freshman.");

	printf("str: %s\n", str);

	/* release taken memory (give back to RAM) using free() function */
	free(str);
	
	/* after freeing, str becomes DANGLING POINTER, so we should make it NULL */
	str = NULL;

	return 0;
}

/* 

void *realloc(void *ptr, size_t size)

So, realloc() returns a pointer to the newly allocated memory, which is suitably aligned for any kind of
 variable and MAY BE DIFFERENT from ptr (MAY BE SAME if available), or NULL if the request fails. 
If realloc() fails the original block is left untouched; it is not freed or moved.
*/