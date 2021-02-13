#include <stdio.h>
#include <ctype.h>


int my_isupper(char ch)
{
	return (ch >= 'A' && ch <= 'Z') ? 1 : 0;
}

int main()
{
	char ch;

	printf("Please enter any char: ");
	ch = getchar();

	if (ch >= 'A' && ch <= 'Z')
		printf("%c is an UPPERCASE letter\n", ch);
	else if (ch >= 'a' && ch <= 'z')
		printf("%c is a lowercase letter\n", ch);
	else if (ch >= '0' && ch <= '9')
		printf("%c is a digit\n", ch);
	else
		printf("%c is something else (not alpha-numeric)\n", ch);

	/* Same exact if checks as above with the help of ctype.h library */
	if (isupper(ch))
		printf("%c is an UPPERCASE letter\n", ch);
	else if (islower(ch))
		printf("%c is a lowercase letter\n", ch);
	else if (isdigit(ch))
		printf("%c is a digit\n", ch);
	else
		printf("%c is something else (not alpha-numeric)\n", ch);

	return 0;
}
