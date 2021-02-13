#include <stdio.h>
#pragma warning(disable: 4996) // for ignoring "scanf" error on VS (not for XCode)

/*
Topics: 

- Variables, their identifiers, declaration, initialization
*/

int main()
{
	// Variable identifiers MUST contain only letters, digits and underscore _
	// Variable Declaration WITHOUT initialization (initial values):
	int x, y; 
	int sum;

	// Variable Declaration WITH initialization (initial values):
	int a = 4, b = 0;

	// Conventionally variable identifiers should have meaningful names:
	int num_of_students;

	// You CANNOT use reserved keywords as a variable ID:
	// int int not allowed

	// Note. C language is CASE SENSITIVE, which means x and X are different

	// For printing on the output window (Console) we use printf function
	// For getting input from the user on the Console we use scanf function
	printf("Enter two integers to sum up: ");
	scanf("%d%d", &x, &y);

	// We can also separate the above into two distinct scanf inputs:
//	printf("Enter the first integer to add: ");
//	scanf("%d", &x);

//	printf("Enter the second integer to add: ");
//	scanf("%d", &y);

	sum = x + y;
	printf("The sum is: %d\n", sum);
}   


