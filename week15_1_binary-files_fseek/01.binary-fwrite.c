#include <stdio.h>

#pragma warning (disable : 4996)

/*
http://www.cplusplus.com/reference/cstdio/fwrite/
*/

int main()
{
	int num = 5; // try 300

	FILE *fp = fopen("test.dat", "wb");

	fwrite(&num, sizeof(num), 1, fp);

	fclose(fp);

	return 0;
}