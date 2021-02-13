#include <stdio.h>
#include <string.h>

#pragma warning (disable : 4996)

typedef struct student {
	char name[50];
	unsigned int bday;
	short id;
	double gpa;
} Student;

void printStudent(Student );
void printStudentP(Student*);
void setStudent(Student*, char [], unsigned int, short, double);

int main()
{
	Student s1, s2;

	/* Defining s3 using static initialization. Good for testing, bad for actual product code: */
	Student s3 = {"Tofig Aliyev", 19981002, 1515, 4.0};
	
	/* Define s1 attributes within main (not recommended way): */
	strcpy(s1.name, "Ali Aliyev");
	s1.bday = 19971009;
	s1.id = 1616;
	s1.gpa = 3.0;

	/* Define s2 attributes by calling a function. Recommended, because looks clean: */
	setStudent(&s2, "Vali Valiyev", 20000101, 1111, 1.0);

	/* printing students */
	printStudent(s1); // same result as printStudentP(&s1);
	printStudent(s2); // same result as printStudentP(&s2);
	printStudent(s3); // same result as printStudentP(&s3);
	
	return 0;
}

/* Struct variables are PASSED-BY-VALUE, which means they get copied to the function arg */
void printStudent(Student s)
{
	printf("%s %u %d %lf\n", s.name, s.bday, s.id, s.gpa);
}

/* Same function as above, but this one saves you MEMORY and CPU. Why??? */
void printStudentP(Student *ps)
{
	printf("%s %u %d %lf\n", ps->name, ps->bday, ps->id, ps->gpa);
}


void setStudent(Student *ps, char n[], unsigned int b, short i, double g)
{
	strcpy(ps->name, n);
	ps->bday = b;
	ps->id = i;
	ps->gpa = g;
	
	/* same thing as above. But above is better looking. */
//	strcpy((*ps).name, n);
//	(*ps).bday = b;
//	(*ps).id = i;
//	(*ps).gpa = g;
}