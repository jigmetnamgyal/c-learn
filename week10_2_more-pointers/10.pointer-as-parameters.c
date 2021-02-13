#include <stdio.h>

/* function declarations/ prototypes */
void swap(int*, int*);

int main()
{
	/* local variable definition */
	int a = 100;
	int b = 200;

	int *pa = &a;
	int	*pb = &b;

	printf("Before swap, value of a : %d\n", a); // 100
	printf("Before swap, value of b : %d\n", b); // 200

	/* calling a function to swap the values:
	*   Passing the addresses of a and b is ALSO pass-by-value mechanism.
	*   Similar to how primitive types are copied, now the address (which is integer indeed)
	*     is also copied, so that now both pa and x point to the address of variable a.
	*/
	swap(pa, pb);

	printf("After swap, value of a : %d\n", a);
	printf("After swap, value of b : %d\n", b);

	return 0;
}


/* function definition to swap the values */
void swap(int *x, int *y)
{
	int temp;
	temp = *x;    /* save the value at address x */
	*x = *y;      /* put y into x */
	*y = temp;    /* put temp into y */

	return;
}