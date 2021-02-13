#include <stdio.h>
#include <string.h>

#pragma warning (disable : 4996)

typedef struct book
{
	char  title[50];
	char  author[50];
	char  subject[100];
	int   book_id;
} Book;

/* function declaration */
void printBook( Book b );

int main( ) 
{
	Book book1;        /* Declare book1 of type Book */
	Book book2;        /* Declare book2 of type Book */
	Book book3 = { "Love and War", "Farrukh", "I got betrayed again", 666 };
//	Book book4 = { "Love and War", "Farrukh", "I got betrayed again", 666 };

//	if(book3 == book4) // use if (book3.book_id == book4.book_id) instead
//		printf("Good times???\n")

	/* book 1 specification */
	strcpy( book1.title, "C Programming");
	strcpy( book1.author, "Nuha Ali"); 
	strcpy( book1.subject, "C Programming Tutorial");
	book1.book_id = 6495407;

	/* book 2 specification */
	strcpy( book2.title, "Telecom Billing");
	strcpy( book2.author, "Zara Ali");
	strcpy( book2.subject, "Telecom Billing Tutorial");
	book2.book_id = 6495700;


	/* print book1 info */
	printBook(book1);
//	printf("%d\n", book1.book_id); // 5 or 6495407
//	printf("%s\n", book1.title); // C Programming or lalalalal

	/* print book2 info */
	printBook(book2);

	/* print book3 info */
	printBook(book3);

	return 0;
}

/* Golden Rule: /* Struct variables are PASSED-BY-VALUE, 
 *  which means they get copied to the function argument.
 */
void printBook( Book book )
{
	printf( "Book title : %s\n", book.title);
	printf( "Book author : %s\n", book.author);
	printf( "Book subject : %s\n", book.subject);
	printf( "Book book_id : %d\n\n", book.book_id);

//	book.book_id = 5;
//	strcpy(book.title, "lalalalalalalla");
}
