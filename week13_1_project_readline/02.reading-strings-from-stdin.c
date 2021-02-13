#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	char s[100];
	int a;

	// Reading strings with scanf is problematic, because usually it reads until whitespace:
	//scanf("%s", s);	

	// Reading strings with fgets is problematic, because it includes \n at the end of string:
	fgets(s, 99, stdin); 

	scanf("%d", &a);

	printf("%s", s);
	printf("%d", a);

	return 0;
}