#include <stdio.h>

int main()
{
	int  num1 = 5, num2 = 7;
	int  *p1 = &num1, *p2 = &num2;

	/* Here we COPY the value in p1 into the value in p2 */
	*p2 = *p1;

	/* access the values using the variables 
	* Values will be SAME, since we copied from one to another. */
	printf("Value of num1: %d\n", num1);
	printf("Value of num2: %d\n", num2);

	/* access the values using the pointer.
	* Values will be SAME, since we copied from one to antoher. */
	printf("Value of *p1: %d\n", *p1);
	printf("Value of *p2: %d\n", *p2);

	/* address stored in pointer variables/
	* Addresses will be DIFFERENT, since we copied only 
	 the values from one to another. */
	printf("Address stored in p1: %p\n", p1);
	printf("Address stored in p2: %p\n", p2);

	return 0;
}