#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable : 4996)

/* function prototypes */
int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);

/* Important notes (cont.):

4. Like normal data pointers, a function pointer can be passed as an argument. See example below.

*/
int operation( int(*fp)(int, int), int a, int b );

int main() 
{
	int a, b, result;
	char op;

	// fun_ptr, a pointer to a function that takes 2 int arguments and returns int
	int (*fun_ptr)(int, int);
	
	printf("Enter operation like '2 op 3', where op is one of +,-,*,/ \n");
	scanf("%d %c %d", &a, &op, &b);

	switch(op)
	{
	case '+':
		fun_ptr = &add; break; // you may remove '&' if you want
	case '-':
		fun_ptr = subtract; break;
	case '*':
		fun_ptr = multiply; break;
	case '/':
		fun_ptr = divide; break;
	default:
		printf("Wrong operation. Quitting...\n"); 
		return 1;
	}

	result = operation(fun_ptr, a, b);

	printf("result = %d\n", result); 

	return 0;
}


int add(int a, int b)
{
	return a+b;
}

int subtract(int a, int b)
{
	return a-b;
}

int multiply(int a, int b)
{
	return a*b;
}

int divide(int a, int b)
{
	return a/b;
}

// Like normal data pointers, a function pointer can be passed as an argument
int operation( int(*fp)(int, int), int a, int b)
{
	int result = fp(a,b); // same as (*fp)(a,b);
	return result;  
}