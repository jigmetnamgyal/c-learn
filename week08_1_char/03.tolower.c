#include <stdio.h>
#include <ctype.h>

char my_tolower(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		ch = 'a' + (ch - 'A');

	return ch;
}


int main()
{
	char ch;

	printf("Please enter any char: ");
	ch = getchar();


	/* We will apply the following logic only if the given char is UPPERCASE
	* Otherwise we do NOT touch the char.
	*/
	if (ch >= 'A' && ch <= 'Z')
		ch = 'a' + (ch - 'A'); // same as ch= ch + ('a'-'A');
	printf("The lowered character is %c\n\n", ch);

	/* Same exact if checks as above with the help of ctype.h library */
	ch = tolower(ch);
	printf("The lowered character is %c\n\n", ch);

	return 0;
}
