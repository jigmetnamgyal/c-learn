#include <stdio.h>

#pragma warning (disable : 4996)

int main()
{
	FILE * fp;

	fp = fopen("output.txt", "w");

	fputs("This is an apple.", fp);
//	fflush(fp); // any unwritten data in RAM (output buffer) is written to the file

	fseek(fp, +9, SEEK_SET);
	// SEEK_SET : Beginning of the file
	// SEEK_END : End of the file
	// SEEK_CUR : The current position of the cursor

	fputs(" sam", fp);

	fclose(fp);

	return 0;
}