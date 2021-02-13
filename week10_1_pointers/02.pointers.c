#include <stdio.h>

int main () 
{
	int    *ip;		/* pointer to an integer */
	double *dp;		/* pointer to a double */
	char   *cp;		/* pointer to a character */

	int i = 5;
	double d = 7.3;
	char c = 't';


	ip = &i;
	dp = &d;
	cp = &c;



	printf("Address of int variable (i): %p same as %p\n", ip, &i);
	printf("Address of double variable (d): %p same as %p\n", dp, &d);
	printf("Address of char variable (c): %p same as %p\n", cp, &c);

	return 0;
}