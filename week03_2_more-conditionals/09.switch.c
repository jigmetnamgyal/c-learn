#include <stdio.h>
 
int main () 
{	
		int month;

		printf("This program shows the number of days in a month.");

		printf("Enter numeric month (Jan=1): ");
		scanf_s("%d", &month); // month = 11;
		
		switch (month) {
		case 2:
			printf("28 days (29 in leap years)");
			break;
		case 4:
		case 6:
		case 9:
		case 11: 
			printf("30 days");
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 days");
			break;
		default:
			printf("Illegal month number");
			break;
		}

/*
		// Same exact thing done with if-else
		if(month == 2) {
			printf("28 days (29 in leap years)");
		} else if (month == 4 || month == 6 || month == 9 || month == 11) {
			printf("30 days");
		} else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
			printf("31 days");
		} else {
			printf("Illegal month number");
		}
*/
		
		return 0;
	}