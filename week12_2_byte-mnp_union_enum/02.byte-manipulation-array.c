#include <stdio.h>

int main() 
{
	unsigned char arr[] = { 2, 1}; // also try arr[3] = { 3, 2, 1};
	unsigned short *p_num;

	// Pointer Casting
	p_num = (unsigned short*)arr;

	printf("*p_num = %u\n", *p_num );
	
	return 0;
}