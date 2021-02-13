#include <stdio.h>

// Logical operators
// &&, ||, !


int main() 
{
	int a = 5;
	int b = 20;
	int c = 10;

	if ( b>a && c<b )
		printf("Sample 0 - Condition is true\n");

	if ( b>a && c==b )
		printf("Sample 0 - Condition is not true (so false)\n");

	if (b != a || b == (c+10) )
		printf("Sample 1 - Condition is true\n");

	if (b == a || c == (b+10) )
		printf("Sample 1 - Condition is not true\n");

	if (a && b) 
		printf("Sample 2 - Condition is true\n");

	if (a || b) 
		printf("Sample 3 - Condition is true\n");


	/* lets change the value of a and b */
	a = 0; // means a is false (zero is always false)
	b = 10; // means b is true (because its not zero)

	if (a && b)
		printf("Sample 4 - Condition is true\n");
	else
		printf("Sample 4 - Condition is not true\n");


	if ( !(a && b) ) 
		printf("Sample 5 - Condition is true\n");
	

	// here do not confuse = with ==, because = means ASSIGNMENT
	//  and assignments expression itself has a final value, which is RHS
	if (b = 15) // try 0 instad of 15, see what happens
		printf("Good times\n");
	else
		printf("Bad times\n");

	printf("%d\n", b); // 15

	return 0;
}