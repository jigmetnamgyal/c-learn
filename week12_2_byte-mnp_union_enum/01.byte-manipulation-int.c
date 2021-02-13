#include <stdio.h>

int main() 
{	
	unsigned int num = 66053; // also, try 259, 5, 300 for fun :)
	// Hint:  66053 = 2^16 + 2^9 + 5
	// 5 = 00000000 00000001 00000010 00000101
	// 00000000 00000001 00000010 00000101 (Big Endian)
	// 00000101 00000010 00000001 00000000 (Little Endian)

	unsigned int *p = &num;
	unsigned short* p_sh = &num;
	unsigned char *p_ch = &num;
	

	printf("sizeof(p) = %d\n", sizeof(p) );			// 4 Bytes
	printf("sizeof(p_sh) = %d\n", sizeof(p_sh));	// 4 Bytes
	printf("sizeof(p_ch) = %d\n\n", sizeof(p_ch));	// 4 Bytes

	printf("*p = %u\n", *p );		// 66053
	printf("*p_sh = %u\n", *p_sh);	// 517, why? Hint: 517 = 512+5
	printf("*p_ch = %u\n", *p_ch ); // 5, why???
	
	/* Explanation:
	Let's convert 65797 to Binary system:
	66053 = 00000000 00000001 00000010 00000101

	Since modern OSs use LITTLE ENDIAN arhictecture, numbers are stored in RAM in reverse order.
	So the above integer will be stored in RAM like this (as you see the byte order is reversed):
		00000101 00000010 00000001 00000000

	Even though all of p, p_sh and p_ch point to the same address (which is the first Byte in the previous line),
	 they read different amount of memory when we access the values using * operator: 
	So, p reads 4 Bytes, p_sh reads the first 2 Bytes and p_ch reads only the first 1 Byte.
	And again, when we read integers from memory, we read them from right to left order (LITTLE ENDIAN rule).
	*/

	return 0;
}