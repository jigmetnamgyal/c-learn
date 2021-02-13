#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)

int main () 
{
	char str1[15];
	char str2[15];
	int result;

	strcpy(str1, "Firuza");
	strcpy(str2, "Fariz"); // try "Firuza", "Fuzuli" and "fariz'

	// strcmp() compares two given strings' characters index by index based on ASCII codes:
	result = strcmp(str1, str2); 
	printf("result is %d, which means: \n", result);

	if(result < 0) 
		printf("str1 is LESS than str2\n");
	else if(result > 0)
		printf("str1 is GREATER than str2\n");
	else
		printf("str1 is EQUAL to str2\n");
	

	return(0);
}