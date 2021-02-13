#include <stdio.h>

int main()
{
	char c = 5;						// 1 Byte  -> [-2^7, 2^7-1]
	short s = 555;					// 2 Bytes -> [-2^15, 2^15-1]
	int i  = 555555;				// 4 Bytes -> [-2^31, 2^31-1]
	long l = 555555L;				// 4 Bytes -> [-2^31, 2^31-1]
	long long ll = 55555555555LL;	// 8 Bytes -> [-2^63, 2^63-1]

	unsigned char uc = 5;			// 1 Byte  -> [0, 2^8-1]

	float f =  5.5555555555F;
	double d = 5.5555555555;
	
	printf("f=%f and d=%f\n\n", f, d);


	c = 127;
	uc = 255;  
	printf("c=%d and uc=%u\n", c, uc); // c = ?   uc = ?

	c++;
	uc++;
	printf("c=%d and uc=%u\n", c, uc);  // c = ?  uc = ?

	// Below is IMPLICIT CAST: What is the problem with the following statements?
	c = s;
	f = d;
	i = f;
	f = l;
	d = ll;

	// Below is EXPLCIT CAST: What is the difference with the above statements?
	c = (char)s;
	f = (float)d;
	i = (int)f;
	f = (float)l;
	d = (double)ll;

	// Below is also IMPLICIT CAST:  What about the following statements? No problems!
	i = l;
	l = i;
	ll = i;
	ll = l;
	d = i;






	i = 3.5 + 1.5;  
	printf("i=%d\n", i); // i = ?

	double j = 3 + 9 / 2;
	printf("j=%f\n", j); // j = ?

	return 0;
}