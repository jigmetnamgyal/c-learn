/*
If a header file happens to be included twice, the compiler 
 will process its contents twice and it will result in an error. 
The standard way to prevent this is to enclose the entire real 
 contents of the file in a conditional, like below.
This construct is commonly known as a wrapper #ifndef. 
When the header is included again, the conditional will be false, 
 because HEADER_FILE is defined. The preprocessor will skip over 
 the entire contents of the file, and the compiler will not see it twice.
*/

#ifndef TRIANGLE_HEADER_FILE
#define TRIANGLE_HEADER_FILE

#include "triangle.h"

#endif

int perim(int a, int b, int c)
{
	return a + b + c;
}

double area(int a, int b, int c)
{
	int p = perim(a,b,c)/2;

	return sqrt(p*(p-a)*(p-b)*(p-c));
}