#include <stdio.h>

#pragma warning (disable : 4996)

int main()
{
	FILE *fp = NULL;
	const char* FILENAME = "text_out.txt";

	/* Open the file for Writing and store its pointer in fp for later access */
	fp = fopen(FILENAME, "w");

	if(fp == NULL) 
	{
		fprintf(stderr, "Error - unable open the file\n");
		return 1;
	}

	/* Write a single char into fp */
//	fputc('s', fp);

	/* Write a normal string into fp */
//	fputs("Hello", fp);

	/* Write a formatted string into fp */
	fprintf(fp, "Hello %d", 5);

	/* Close the file when you are done */
	fclose(fp);

	return 0;
}