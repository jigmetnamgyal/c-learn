#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable : 4996)

int main () {
	const char str[] = "Saturday March 25 1989";
	char weekday[20], month[20];
	int day, year;

	/* sscanf function reads formatted input from a string */
	sscanf( str, "%s %s %d  %d", weekday, month, &day, &year );

	printf("%s %d, %d on calendar is %s\n", month, day, year, weekday );

	return(0);
}