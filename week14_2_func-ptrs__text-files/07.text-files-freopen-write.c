#include <stdio.h>

#pragma warning (disable : 4996)

/*
https://www.tutorialspoint.com/c_standard_library/c_function_freopen.htm
http://www.cplusplus.com/reference/cstdio/freopen/
*/

int main() 
{
	printf("This sentence is printed in stdout\n");

	/* redirect standard output to out.txt file */
	freopen("out.txt", "w", stdout); 

	printf("But this sentence is redirectred to file\n");

	return 0;
}