#include <stdio.h>
#include <float.h>

int main()
{
	printf("sizeof float type: %d \n", sizeof(float));
	printf("sizeof double type: %d \n", sizeof(double));
	printf("sizeof long double type: %d \n\n", sizeof(long double));

	float f;				// 4 Bytes 
	double d;				// 4 Bytes 
	long double ld;			// 8 Bytes 

	// Ranges (include float.h library for these limits):
	printf("FLT_MAX      :   %g\n", (float)FLT_MAX);
	printf("FLT_MIN      :   %g\n", (float)FLT_MIN);
	printf("DBL_MAX      :   %g\n", (double)DBL_MAX);
	printf("DBL_MIN      :   %g\n", (double)DBL_MIN);
	printf("LDBL_MAX     :   %g\n", (double)LDBL_MAX);
	printf("LDBL_MIN     :   %g\n", (double)LDBL_MIN);

	return 0;
}