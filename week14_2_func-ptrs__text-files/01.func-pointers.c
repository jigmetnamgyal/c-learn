#include <stdio.h> 

/* function prototype */
void fun(int a);

int main() 
{ 
	// fun_ptr will be a pointer to a function that takes an int argument and returns void
	void (*fun_ptr)(int); 

	// now fun_ptr is a pointer to a function fun(int)
	fun_ptr = &fun; // we may remove '&'
	
	/* The above lines are same as the following line:
	void (*fun_ptr)(int) = &fun;  
	*/

	// Invoking fun() using fun_ptr . Both lines below are same as calling fun(10)
//	fun(10);
	(*fun_ptr)(10); // same as fun(10)
	fun_ptr(10);	// same as fun(10)

	return 0; 
} 

// A normal function with an int parameter and void return type 
void fun(int a) 
{ 
	printf("Value of a is %d\n", a); 
} 


/* Important notes:

0. We need an extra bracket around function pointers like fun_ptr in above example.
If we remove bracket, then the expression "void (*fun_ptr)(int)" becomes "void *fun_ptr(int)" 
 which is declaration of a function that returns void pointer. 

1. Unlike normal pointers, a function pointer points to CODE (set of instructions), not data. 
Typically a function pointer stores the start of executable code.

2. Unlike normal pointers, we do not allocate or de-allocate memory using function pointers.
It means, no need for malloc() or free() functions.

3. Similar to array names, a function's name can also be used to get function's address. 
For example, in the above program line 12, we can remove address operator '&' in assignment. 
In line 19 we can also change function call by removing *, the program still works. See line 20

4. Like normal data pointers, a function pointer can be passed as an argument. See calc.c as example.


*/