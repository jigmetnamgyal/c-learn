#include <stdio.h>

unsigned long long fact_iterative(int num);
unsigned long long factorial(int num);


int main() 
{
	int n = 5;

	printf("Factorial (iterative) of %d is %lld\n\n", n, fact_iterative(n));

	printf("Factorial (recursive) of %d is %lld\n", n, factorial(n));

	return 0;
}


/* Computes factorial of num using iterative approach (for loop) */
unsigned long long fact_iterative(int num) 
{
	unsigned long long result = 1;

	for (int i = 1; i <= num; i++)
		result *= i;
	
	return result;
}


/* Computes factorial of num using Recursions */
unsigned long long factorial(int num) 
{
	/* Base case */
	if(num == 0)
		return 1;
	
// try to remove the base case completely and see what happens	
	

	return num * factorial(num - 1);
}