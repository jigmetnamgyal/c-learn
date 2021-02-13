#include <stdio.h>

//#define SUIT     int

//#define CLUBS    0
//#define DIAMONDS 1
//#define HEARTS   2
//#define SPADES   3

typedef enum suit{ 
	CLUBS, 
	DIAMONDS, 
	HEARTS, 
	SPADES,
	TOFIG
} Suit;


typedef enum dept {
	RESEARCH = 200,
	PRODUCTION, 
	SALES = 250
} Dept;


int main()
{
	printf("sizeof(Suit) = %d\n", sizeof(Suit)); 
	// 4 Bytes, because Suit is only one of its constants at a given time, not all of them together.

	Suit card; // similar to writing as "int card;"

	/* The following gives 4 Bytes, because card is an integer, 
	 *  therefore it may contain only 1 integer of the enum values at a time. */
	printf("sizeof(s) = %d\n", sizeof(card)); // 4

	card = HEARTS;
	card++;

	return 0;
}