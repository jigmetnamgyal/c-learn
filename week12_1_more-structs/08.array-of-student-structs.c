#include <stdio.h>
#include <string.h>

typedef struct student {
	char name[50];
	unsigned int bday;
	short id;
	double gpa;
} Student;

void printStudent(Student);
void printStudentP(Student *);
void setStudent(Student *, char[], unsigned int, short, double);

int main()
{
	Student s_arr[3];

	/* Define s_arr elements attributes by calling a function. */
	setStudent(&s_arr[0], "Vali Valiyev", 20000101, 1111, 1.0);
	setStudent(&s_arr[1], "Ali Aliyev", 19901105, 2222, 2.2);
	setStudent(&s_arr[2], "Gulu Guluyev", 20000101, 1111, 1.0);

	/* printing students */
	printStudent(s_arr[0]); 
	printStudent(s_arr[1]); 
	printStudent(s_arr[2]); 

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
}