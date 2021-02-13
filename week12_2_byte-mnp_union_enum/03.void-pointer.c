#include <stdio.h>

int main() 
{
	unsigned char arr[] = { 2, 1 }; // also try arr[3] = { 3, 2, 1 };

	/* void pointers are considered as INCOMPLETE TYPEs and it can be assigned FROM ANY pointer.
	 * Also, it can be TO ANY pointer. So, typically you can use it as alternative to pointer casting. 
	*/
	void *ptr; 
	unsigned short *p_num;

	ptr = arr;
	p_num = ptr;

	//printf("*p_num = %u\n", *ptr); // this is error, why?
	printf("*ptr = %u\n", *(unsigned short*)ptr); // this is okay, same with below
	printf("*p_num = %u\n", *p_num ); // okay
	
	return 0;
}