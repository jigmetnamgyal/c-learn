/*
 * This program counts backwards from the value START
 * to zero, as in the countdown preceding a rocket launch.
 */

#include <stdio.h>

#define START 10 // declaring a constant
 
int main () 
{
	int t;

	for (t = START; t > 0; t--)
	{
		printf("%d seconds to Lift-Off...\n", t);
	}

	printf("LIFT-OFF!\n");
 
	return 0;
}