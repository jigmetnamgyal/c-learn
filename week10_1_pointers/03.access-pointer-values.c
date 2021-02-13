#include <stdio.h>

int main () 
{
	int  num = 5;   /* actual variable declaration */
	int  *p;        /* pointer variable declaration */
	
	p = &num;  /* store address of num in pointer variable*/

	printf("Address of num: %p\n", &num  );

	/* address stored in pointer variable */
	printf("Address stored in p: %p\n", p );

	/* access the value using the pointer */
	printf("Value of *p : %d\n", *p ); // 5

	*p = 7;

	/* access the value using the pointer */
	printf("Value of *p : %d\n", *p); // 7
	printf("Value of num: %d\n", num); // 7



	int arr[3] = { 2, 5, 8 };
	
	printf("Value of arr[0] = *arr : %d\n", *arr); // 2
	printf("Value of arr[1] = *(arr+1) : %d\n", *(arr + 1)); // 5
	printf("Value of arr[2] = *(arr+2) : %d\n", *(arr + 2)); // 8

	
	int* pa = &arr;

	printf("Value of arr[0] = *pa : %d\n", *pa); // 2
	pa++;
	printf("Value of arr[1] = *pa : %d\n", *pa); // 5
	pa++;
	printf("Value of arr[2] = *pa : %d\n", *pa); // 8

	return 0;
}