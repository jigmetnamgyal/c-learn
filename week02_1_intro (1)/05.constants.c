#include <stdio.h>
#include <math.h> // this is for using log(x) function below

#define PI 3.14

/*
There are two simple ways in C to define constants:
- Using #define preprocessor.
- Using const keyword.
*/


int main()
{
	const double E = 2.71;

	double r = 10.0;

	double perim = 2 * PI * r;
	double area = PI * r * r;

	printf("Perimeter of the cycle is %.2f\n", perim);
	printf("Area of the cycle is %.2f\n\n", area);

	double result = log(E); // log(x) in math.h library means ln(x) in math
	printf("log(e) = %.2f\n\n", result);

	// String literals (constants) in C are reperesented with double quotes " "
	printf("       Student information:\n\
ID          Name      Phone\n\
1234        Tofig     (050)212-0000\n");

	return 0;
}