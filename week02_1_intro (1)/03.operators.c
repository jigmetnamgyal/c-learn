#include <stdio.h>
#pragma warning(disable: 4996) // for ignoring "scanf" error on VS (not for XCode)

/*
Topics: 

- Arithmetical operators (+,-,*,/,%,++,--)
- Integer division
*/

int main()
{
	// Arithmetic operations, such as Addition (+), Subtraction(-) and Multiplication (*) are the same as in Math

	int x = 5, y = 9;

	int sum = x + y;
	printf("The sum is: %d\n", sum); // %d means expect an integer, that's why we write an integer sum afterwards

	int diff = x - y;
	printf("The difference is: %d\n", diff);

	int prod = x * y;
	printf("The product is: %d\n", prod);


	// Division in C lang is different from Math. Here when you divide int by int the result is always int
	int res1 = y / x; // Result is not 1.8, it is actually just 1
	printf("The integer division result is: %d\n", res1);

	// If we want to get fractional result such as 1.8, then we can do the following:
	double res2 = 1.0 * y / x; // Result is 1.8, since we broke integer division rule 
	printf("The fractional division result is: %lf\n", res2); // %lf means expect a double variable


	// Another arithmetical operator is the Remainder (Modulus) %
	int rem = y % x; 
	printf("The remainder is: %d\n", rem);

	// Shortcut operators:

	// The following two statements are totally the same:
	x = x + 4;
	x += 4;

	// The following three statements are also totally the same, incrementing by 1:
	x = x + 1;
	x += 1;
	x++;
	++x;


	int a = 4, b = 0;
	int c = 4, d = 0;

	// POST-Increment means assign the previous old value to Left side and then increment var (a):
	b = a++; // now b = 4, a = 5
	printf("b=%d and a=%d\n", b, a);

	// PRE-Increment means increment var (c) first and then assign the new value to Left:
	d = ++c; // now d = 5, c = 5
	printf("d=%d and c=%d\n", d, c);

	// As you see, for a and c it does not matter, they both increment eventually to 5
	// But the LHS (Left Hand Side) affect is different for b and d

}   


