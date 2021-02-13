#include <stdio.h>

/* Global variables are defined outside functions */

/* global variable declaration */
int g = 0; // You should always initialize global variables with default values 


void f(int x)
{
	g = x;
}

int main() 
{
	/* local variable declaration */
	int a, b;
	//int g; // possible, but avoid having the same for locals and globals

	printf("value of g = %d\n", g); // 0

	/* actual initialization */
	a = 10;
	b = 20;
	g = a + b; // 30

	printf("value of a = %d, b = %d and g = %d\n", a, b, g);

	f(5);
	printf("value of g = %d\n", g); // 5

	return 0;
}