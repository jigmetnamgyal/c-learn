#include <stdio.h>

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

	/* open file for reading in binary format */
    infile = fopen ("students.dat", "rb"); 
    if (infile == NULL) 
    { 
        fprintf(stderr, "\nError opend file\n"); 
        return 1; 
    } 

	// read file contents till end of file 
    while(fread(&s, sizeof(Student), 1, infile)) 
        printStudent(&s); 


	/* close file */
    fclose (infile); 

	return 0;
}


void printStudent(Student *ps)
{
	printf("%s %u %d %lf\n", ps->name, ps->bday, ps->id, ps->gpa);
}
