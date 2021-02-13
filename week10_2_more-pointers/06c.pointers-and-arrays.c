#include <stdio.h>

#define N 3

int main()
{
	int  arr[] = { 4, 9, 7 };
	int  *ptr;

	/* let us have array address in pointer */
	ptr = arr;

	for (int i = 0; i < N; i++)
	{
		printf("Address of arr[%d] = %p\n", i, ptr);
		printf("Value of arr[%d] = %d\n", i, *ptr);

		/* move to the next location */
		ptr++;
	}

	// The following gives error, why? (Hint: restrict int*)
	//arr++; 

	return 0;
}