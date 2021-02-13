#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning (disable : 4996)


typedef struct student {
	char name[50];
	unsigned int bday;
	short id;
	double gpa;
} Student;

void printStudent(Student *);

int main()
{
	FILE *infile;
	Student s;
	double d;

	/* open file for reading */
	infile = fopen("students2.dat", "rb");
	if (infile == NULL)
	{
		fprintf(stderr, "\nError opend file\n");
		return 1;
	}


	// Try to uncomment each of the following to see the difference:
//	fseek(infile, sizeof(Student), SEEK_SET); // skips the first student
//	fseek(infile, 2*sizeof(Student), SEEK_SET); // skips the first two students
//	fseek(infile, -1*(int)sizeof(Student), SEEK_END); // skips all students, except the last student

	// read student contents from the current cursor till end of file 
	while (fread(&s, sizeof(Student), 1, infile))
		printStudent(&s);

	/* Move the file pointer (cursor) 64 Bytes (72-8) to the right from the beginning of file, 
	 *  which is where 1st student's GPA is stored. Read that double and print it.
	*/
	fseek(infile, sizeof(Student) - sizeof(double), SEEK_SET);
//	printf("%ld\n", ftell(infile)); 
	fread(&d, sizeof(double), 1, infile);
	printf("%lf", d);

	fclose(infile);

	return 0;
}


void printStudent(Student *ps)
{
	printf("%s %u %d %lf\n", ps->name, ps->bday, ps->id, ps->gpa);
}

