#include <stdio.h>
#include <limits.h>

typedef struct s {
	int num1;
	short num2;
} S;

typedef union u {
	int num1;
	short num2;
} U;

int main()
{
	S s1;
	U u1;

	printf("size of s1: %d\n",   sizeof(s1));	// 8 Bytes
	printf("size of u1: %d\n\n", sizeof(u1));	// 4 Bytes

	s1.num1 = 5;
	s1.num2 = 7;

	/* Since modern OSs use LITTLE ENDIAN arhictecture, numbers are stored in RAM in reverse order. 
	E.g.: Let's take the following integer 940114817, which is equal to the following in Binary system:
		0111000 00001001 00000011 10000001 = 940114817
	The above integer will be stored in RAM like this:
		10000001 00000011 00001001 0111000

	 */
	u1.num1 = 940114817; 

	/* But now into the same address as num1, we are now writing another SHORT integer 5, which is in Binary 101:
		00000000 00000101 = 5
	Once again, since our OS uses LITTLE ENDIAN rule, then the Bytes of number 5 will be stored in RAM in reverse order:
		00000101 00000000
	*/
	u1.num2 = 5;

	/* So, now at this moment, this is how the memory for u1 looks like in RAM:
		00000101 00000000 00001001 0111000
	That's why when we read this memory as num2 (the first 2 Bytes as reversed) we get 5.
	But when we read the same memory as num1 (reverse order) we get:
		0111000 00001001 00000000 00000101 = 940113925
	*/

	printf("s1.num1=%d, s1.num2=%d \n",   s1.num1, s1.num2); // 5 and 7
	printf("u1.num1=%d, u1.num2=%d \n\n", u1.num1, u1.num2); // 940113925 and 5

	printf("Address of s1.num1=%p, s1.num2=%p \n", &s1.num1, &s1.num2); // different addresses
	printf("Address of u1.num1=%p, u1.num2=%p \n", &u1.num1, &u1.num2); // same addresses, because of Union

	return 0;
}