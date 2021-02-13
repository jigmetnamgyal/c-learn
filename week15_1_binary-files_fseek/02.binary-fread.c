#include <stdio.h>

#pragma warning (disable : 4996)

/*
http://www.cplusplus.com/reference/cstdio/fread/
*/

int main()
{
	int num;

	FILE *fp = fopen("test.dat", "rb");

	fread(&num, sizeof(num), 1, fp);

	printf("%d\n", num);

	fclose(fp);

	return 0;
}