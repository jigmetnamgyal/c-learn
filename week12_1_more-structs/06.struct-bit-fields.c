#include <stdio.h>

typedef struct person {
	unsigned char isMale	: 1; // [0~1]
	unsigned char season	: 2; // [0~3]
	unsigned char month		: 4; // [0~15]
} Person;


int main()
{
	printf("%d\n", sizeof(Person)); // 1 Byte

	Person p;

	p.isMale = 1; // 1
	p.season = 2; // 2
	p.month = 11; // 11

	printf("%u %u %u\n", p.isMale, p.season, p.month);



	/* but, here we get other values, why? Hint: range overflow...*/
	p.isMale = 6; // 0, because 6%2=0
	p.season = 14; // 2, because 6%4=2
	p.month = 25; // 9, because 25%16=9

	printf("%u %u %u\n", p.isMale, p.season, p.month);
}

