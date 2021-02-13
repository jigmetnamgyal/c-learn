#include <stdio.h>

int main () 
{
	int num = 5;
	int  *ptr = NULL; // try removing NULL, see what happens

	printf("The value of ptr is : %p\n", ptr  ); // 0

//	ptr = &num; // try uncommenting and below if state will change

	if(ptr)     /* succeeds if p is not null */
		printf("The ptr is not NULL. \n");

	if(!ptr)    /* succeeds if p is null */
		printf("The ptr is NULL. \n");

	return 0;
}