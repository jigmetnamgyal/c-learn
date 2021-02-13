#include <stdio.h>
#include <limits.h>

int main()
{
	printf("sizeof char type:\t %u\n", sizeof(char));
	printf("sizeof short type:\t %u\n", sizeof(short));
	printf("sizeof int type:\t %u\n", sizeof(int));
	printf("sizeof long type:\t %u\n", sizeof(long));
	printf("sizeof long long type:\t %u\n\n", sizeof(long long));

	printf("sizeof unsigned char type:\t %u\n", sizeof(unsigned char));
	printf("sizeof unsigned short type:\t %u\n", sizeof(unsigned short));
	printf("sizeof unsigned int type:\t %u\n", sizeof(unsigned int));
	printf("sizeof unsigned long type:\t %u\n", sizeof(unsigned long));
	printf("sizeof unsigned long long type:\t %u\n\n", sizeof(unsigned long long));

	// Above \t means TAB space (4 spaces)
	// %u means unsigned integers, because sizeof something is always positive

	char c;					// 1 Byte  -> [-2^7, 2^7-1]
	short s;				// 2 Bytes -> [-2^15, 2^15-1]
	int i;					// 4 Bytes -> [-2^31, 2^31-1]
	long l;					// 4 Bytes -> [-2^31, 2^31-1]
	long long ll;			// 8 Bytes -> [-2^63, 2^63-1]

	// Same types, but unsigned, meanins no negatives:
	unsigned char uc;		// 1 Byte  -> [0, 2^8-1]
	unsigned short us;		// 2 Bytes -> [0, 2^16-1]
	unsigned int ui;		// 4 Bytes -> [0, 2^32-1]
	unsigned long ul;		// 4 Bytes -> [0, 2^32-1]
	unsigned long long ull;	// 8 Bytes -> [0, 2^64-1]

	// Proof of the above range (include limits.h library):
	printf("CHAR_MAX    :   %d\n", CHAR_MAX);
	printf("CHAR_MIN    :   %d\n", CHAR_MIN);
	printf("SHRT_MAX    :   %d\n", SHRT_MAX);
	printf("SHRT_MIN    :   %d\n", SHRT_MIN);
	printf("INT_MAX     :   %d\n", INT_MAX);
	printf("INT_MIN     :   %d\n", INT_MIN);
	printf("LONG_MAX    :   %ld\n", (long)LONG_MAX);
	printf("LONG_MIN    :   %ld\n", (long)LONG_MIN);
	printf("LLONG_MAX    :   %lld\n", (long long)LLONG_MAX);
	printf("LLONG_MIN    :   %lld\n\n", (long long)LLONG_MIN);

	printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
	printf("USHRT_MAX   :   %d\n", (unsigned short)USHRT_MAX);
	printf("UINT_MAX    :   %u\n", (unsigned int)UINT_MAX);
	printf("ULONG_MAX   :   %lu\n", (unsigned long)ULONG_MAX);
	printf("ULLONG_MAX   :  %llu\n", (unsigned long long)ULLONG_MAX);

	return 0;
}