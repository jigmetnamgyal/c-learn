#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main()
{
	char str1[] = "Hello";
	char str2[] = "World";
	char str3[12];

	char str4[15] = "Hello\0 World";
	char str5[] = "Hello\0 World";
	char str6[] = "Hello\0";
	int  len;

	/* Copy str1 into str3 */
	strcpy(str3, str1);
	printf("strcpy( str3, str1) :  %s\n", str3); // Hello

	/* Concatenates str2 onto the end of str3 */
	strcat(str3, str2);
	printf("strcat( str3, str2):   %s\n", str3); // HelloWorld

	/* Total length of str3 after concatenation */
	len = strlen(str3);
	printf("strlen(str3) :  %d\n", len); // 10



	/* Lets have some fun with STRLEN and SIZEOF functions */

	printf("strlen(str4) :  %d\n", strlen(str4)); // 5
	printf("sizeof(str4) :  %d\n\n", sizeof(str4)); // 15 

	printf("strlen(str5) :  %d\n", strlen(str5)); // 5
	printf("sizeof(str5) :  %d\n\n", sizeof(str5)); // 13 

	printf("strlen(str6) :  %d\n", strlen(str6)); // 5
	printf("sizeof(str6) :  %d\n\n", sizeof(str6)); // 7 

	return 0;
}