/* atoi example */
#include <stdio.h>      /* printf, sscanf */
#include <stdlib.h>     /* atoi() */
#include <string.h>

#pragma warning (disable : 4996)

// my_atoi ?

int main()
{
	const char STR[] = "23"; // try "abcd" and "23abcd"
	int num;
	
	num = atoi(STR); // 23
	//sscanf(str, "%d", &num);

	printf("The converted integer value is %d.", num);

	return 0;
}