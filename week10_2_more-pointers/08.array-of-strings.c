#include <stdio.h>
#include <string.h>

#pragma warning (disable:4996)

#define N 4
#define M 12

int main()
{
	char str[] = "Baku";
	char *s = "Moscow";

	printf("%d\n", sizeof(str)); // 6
	printf("%d\n", sizeof(s)); // 4

//	strcpy(str, "MirAnar"); // gives error, why?

	s = "Mahammad"; // this is ok, why?


	printf("%s \n", str); // try (str+1)
	printf("%p \n", s); // try (s + 1)



	char *names[] = {
	   "Ali Abbasov",
	   "Vali Abbasov",
	   "Mirvali Abbasov",
	   "Valiqulu Abbasov"
	};

	const char *MONTHS[] = {
	   "January", "February", "March",	"April",
	   "May", "June", "July", "August",
	   "September", "October", "November", "December" };


	for (int i = 0; i < N; i++)
		printf("Value of names[%d] = %s\n", i, names[i]);

	printf("\n");

	for (int i = 0; i < M; i++)
		printf("Name of MONTHS[%d] = %s\n", i, MONTHS[i]);

	return 0;
}