#include <stdio.h>

int main()
{
	char ch;
	int i;

	ch = 'D'; // char = 68;
	putchar(ch); //same with printf("%c", ch);
	putchar('\n');

	i = 'C';
	printf("%d\n", i); // 67

	ch = 98;
	printf("%c\n", ch); // 'b'
	
	ch++;
	printf("%c\n", ch); // 'c'

	ch = getchar(); // same with scanf("%c", &ch);
	putchar(ch);

	return 0;
}

/*
	putchar(ch) is the same as printf("%c", ch). They both print a char.
	getchar(ch) is the same as scanf("%c", &ch). They both read a char from user.

	The above two functions are used only with chars.
*/