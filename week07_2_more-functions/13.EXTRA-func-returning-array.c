// This code is EXTRA and not necessary for any exam! For bright students...

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10


/*
C programming does not allow to return an entire array.
However, you can return a pointer to an array by specifying the array's name without an index.

Second thing to remember is that C does not advocate to return the address of a local variable
to outside of the function, so you would have to define the local variable as STATIC variable.
Otherwise, as we know, local variables are destroyed once the function is finished.

In the C programming language, keyword STATIC is used to set variable's scope to the entire program
(so unlike local variables, static variables in a function will not be destroyed after function is over.
*/


int * getRandom();


/* main function to call above defined function */
int main()
{
	/* a pointer to an int */
	int *arr_p;
	int i;

	arr_p = getRandom();

	for (i = 0; i < N; i++)
		printf("arr_p[%d] = %d\n", i, arr_p[i]);

	return 0;
}


/* function to generate and return array of random numbers */
int * getRandom()
{
	static int  r[N]; // try to delete 'static' keyword and see what happens
	int i;

	/* set the seed */
	srand((unsigned)time(NULL));

	for (i = 0; i < N; ++i)
	{
		r[i] = rand();
		printf("r[%d] = %d\n", i, r[i]);
	}

	return r;
}