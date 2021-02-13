#include <stdio.h>

#pragma warning (disable : 4996)

#define BUF_SIZE 255

int main()
{
	FILE *fp;
	const char* FILENAME = "input.txt";

	char buff[BUF_SIZE+1];
	char ch = 0;


	/* Open the file for Reading and store its pointer in fp for later access */
	fp = fopen(FILENAME, "r");

	if(fp == NULL) 
	{
		fprintf(stderr, "Error - unable open the file\n");
		return 1;
	}

	// Method #1 to read a Text File until the EOF (End Of File):
	//while( (ch = fgetc(fp) ) != EOF )
	//	fputc(ch, stdout);

	
	// Method #2 to read a Text File until the fgets return NULL :
	while( fgets(buff, BUF_SIZE, fp) )
		fprintf(stdout, "%s", buff);
	
	/* Close the file when you are done */
	fclose(fp);

	return 0;
}