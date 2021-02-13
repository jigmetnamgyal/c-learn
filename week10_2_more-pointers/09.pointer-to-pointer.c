#include <stdio.h>

int main()
{
	int  num = 5;
	int  *p;
	int  **pp;

	/* assign the address of num to p */
	p = &num;

	/* assign the address of p to pp */
	pp = &p;

	/* get the value of num using num, p and pp */
	printf("Value of num = %d\n", num);
	printf("Value available at *p = %d\n", *p);
	printf("Value available at **pp = %d\n\n", **pp);

	printf("Address of p = %p\n", p);
	printf("Address of pp = %p\n", pp);

	return 0;
}