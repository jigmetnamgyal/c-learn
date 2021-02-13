#include <stdio.h>

/* This is Call-By-Reference technique, 
 works in C++, but not in C */

/* function declaration */
void swap(int &x, int &y);

int main()
{
	/* local variable definition */
	int a = 100;
	int b = 200;

	printf("Before swap, value of a : %d\n", a); // 100
	printf("Before swap, value of b : %d\n", b); // 200

	/* calling a function to swap the values */
	swap(a, b);

	printf("After swap, value of a : %d\n", a);
	printf("After swap, value of b : %d\n", b);

	return 0;
}


/* function definition to swap the values */
void swap(int &x, int &y)
{
	int temp;

	temp = x;    /* save the value at address x */
	x = y;      /* put y into x */
	y = temp;    /* put temp into y */

	return;
}