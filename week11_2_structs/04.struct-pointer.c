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
void printBook(Book*);
void setBook(Book*, char[], char[], char[], int);

int main( ) 
{
	Book book1;        /* Declare book1 of type Book */
	Book book2;        /* Declare book2 of type Book */

	Book* p1 = &book1;
	(*p1).book_id = 5;
	printf("Book id: %d\n", book1.book_id);

	p1 -> book_id = 9;
	printf("Book id: %d\n\n", book1.book_id);


	/* book 1 specification */
	setBook(&book1, "C Programming", "Nuha Ali", "C Programming Tutorial", 6495407);

	/* book 2 specification */
	setBook(&book2, "Telecom Billing", "Zara Ali", "Telecom Billing Tutorial", 6495700);

	/* print book1 info */
	printBook(&book1);

	/* print book2 info */
	printBook(&book2);

	return 0;
}

/* Printing a book using the pointer of the book. 
 * This approach is better than passing a structure, 
 *  becauuse we do not waste CPU or RAM to copy 
 *   entire stucture into function's parameter.
 * We just pass the copy of the address of original structure itself. */
void printBook(Book *pbook)
{
	printf( "Book title : %s\n", pbook->title);
	printf( "Book author : %s\n", pbook->author);
	printf( "Book subject : %s\n", pbook->subject);
	printf( "Book book_id : %d\n\n", pbook->book_id);
}


void setBook(Book *pbook, char t[], char a[], char s[], int id)
{
	strcpy(pbook->title, t);	// pbook->title is same as writing (*pbook).title
	strcpy(pbook->author, a);	// pbook->title is same as writing (*pbook).author
	strcpy(pbook->subject, s);	// pbook->title is same as writing (*pbook).subject
	pbook->book_id = id;		// pbook->title is same as writing (*pbook).book_id
}
