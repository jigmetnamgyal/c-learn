#include <stdio.h>

#pragma warning (disable : 4996)

#define BUF_SIZE 255

int main()
{
	FILE *fp;
	const char* FILENAME = "text_in.txt";

	char buff[BUF_SIZE+1]; // +1 for the string terminator ( \0 )
	char ch;
	int num;

	/* Open the file for Reading and store its pointer in fp for later access */
	fp = fopen(FILENAME, "r");

	if(fp == NULL) 
	{
		fprintf(stderr, "Error - unable open the file\n");
		return 1;
	}

	/* Read a single char from fp into ch and print it */
	ch = fgetc(fp);
	printf("1: %c\n", ch); // H

	/* Read a single word (until any whitespace) from fp into buff and print it */
	fscanf(fp, "%s%d", buff, &num);
	printf("2: %s %d\n", buff, num ); // ello 5

	/* Read entire sentence line until \n (including \n ) from fp into buff and print it */
	fgets(buff, BUF_SIZE, fp); // Here it reads only  \n , which was ignored by the previos fscanf
	printf("3: %s", buff ); //        

	/* Read entire sentence line until \n (including \n ) from fp into buff and print it */
	fgets(buff, BUF_SIZE, fp);
	printf("4: %s", buff); // goodbye
	
	/* Close the file when you are done */
	fclose(fp);

	return 0;
}