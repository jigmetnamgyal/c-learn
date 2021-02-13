#include <stdio.h>

/* Local variables are the variables that are declared inside a function 
  or block are called local variables*/

int add(int, int);

int main() 
{
	/* local variable declaration */
	int a, b;
	int sum;

	/* actual initialization */
	a = 10;
	b = 20;

	sum = add(a,b);

	printf("value of a = %d, b = %d and sum = %d\n", a, b, sum);
	int x;

	for (int i = 0; i < 10; i++)
	{
		int x; 

		// x and i are local for loop scope
	}

	//x = 6; // error, because scope of x is the for loop above


	return 0;
}

int add(int x, int y)
{
	int sum = x + y; // not the same sum as main's sum
	return sum;
}