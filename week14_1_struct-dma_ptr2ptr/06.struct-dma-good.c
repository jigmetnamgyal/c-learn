#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#pragma warning (disable : 4996)

#define NAME_LEN 50

typedef struct student {
	char name[NAME_LEN];
	int bday;
	short id;
	double gpa;
} Student;

void printAllStudents(const Student *, const int );
void readAllStudents(Student *, const int );
int read_line(char str[], int n); // from readline.h, remember?

int main() 
{
	Student *ps = NULL;
	int num;

	printf("How many students? ");
	scanf("%d",&num);

	getchar(); // Ignore the \n character that came with Enter key

	/* allocate memory (num*72 BYTES) dynamically for ps */
	ps = (Student*) malloc(num*sizeof(Student));

	if( ps == NULL ) 
	{
		fprintf(stderr, "Error - unable to allocate required memory\n");
		return EXIT_FAILURE; 
	}

	readAllStudents(ps, num);

	/* printing all students that begin at address ps */
	printAllStudents(ps, num); 
	
	/* release memory */
	free(ps); 
	ps = NULL; 

	return EXIT_SUCCESS;
}

/* Reads ALL students' infos from user */
void readAllStudents(Student * ps, const int LEN)
{
	for(int i=0; i<LEN; i++)
	{
		printf("------Student #%d------\n", i);
		printf("Student name: ");	read_line(ps->name, NAME_LEN); // from readline.h
		printf("Student bday: ");	scanf("%d", &ps->bday);
		printf("Student id: ");		scanf("%hd", &ps->id);
		printf("Student gpa: ");	scanf("%lf", &ps->gpa);
		ps++;
	}
}


/* Prints ALL students' infos */
void printAllStudents(const Student *ps, const int LEN)
{
	for (int i = 0; i < LEN; i++)
	{
		printf("%s %d %d %.2lf\n", ps->name, ps->bday, ps->id, ps->gpa);
		ps++;
	}
}


/* Skips leading white-space characters, then reads the remainder of the input line and stores it in str. */
int read_line(char str[], int n)
{
	int ch, i = 0;

	while (isspace(ch = getchar()))
		;
	while (ch != '\n' && ch != EOF) {
		if (i < n)
			str[i++] = ch;
		ch = getchar();
	}
	str[i] = '\0';
	return i;
}