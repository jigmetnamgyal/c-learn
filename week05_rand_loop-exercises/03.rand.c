#include<stdio.h>
#include<stdlib.h> // rand() and srand()
#include<time.h> // time()

int main()
{
	// Intializes random number generator:
	srand((unsigned)time(0));
	
	printf("Random positive integer: %d\n", rand());
	printf("Random positive integer: %d\n", rand());
	printf("Random positive integer: %d\n", rand());
	printf("Random positive integer: %d\n", rand());


	int roll1 = rand() % 6 + 1; 
	printf("Die1: %d\n", roll1);

	int roll2 = rand() % 6 + 1;
	printf("Die2: %d\n", roll2);

	// For finding the sum of throwing 2 dice:
	int roll_sum = rand() % 11 + 2; // WRONG, why? Probability.
	// int roll_sum = roll1 + roll2; // Correct!

	return 0;
}