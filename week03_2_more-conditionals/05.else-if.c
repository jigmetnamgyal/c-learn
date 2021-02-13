#include <stdio.h>

int main() 
{
	/* local variable definition */
	double score = 71.0;

	/* check the boolean condition */
	if (score >= 92.5)
		printf("A\n");
	else if (score >= 89.5)
		printf("A-\n");
	else if (score >= 86.5)
		printf("B+\n");
	else if (score >= 82.5)
		printf("B\n");
	else if (score >= 79.5)
		printf("B-\n");
	else if (score >= 76.5)
		printf("C+\n");
	else if (score >= 72.5)
		printf("C\n");
	else if (score >= 69.5)
		printf("C-\n");
	else 
		printf("F o retake\n");

	return 0;
}