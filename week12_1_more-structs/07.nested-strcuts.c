#include <stdio.h>
#include <string.h>

#pragma warning (disable : 4996)

typedef struct person_name {
	char first[20];
	char last[20];
} PersonName;

typedef struct address {
	char line [30];
	char city [20];
	char country [20];
	char zip [10];
} Address;


typedef struct student {
	PersonName name;
	unsigned int bday;
	short id;
	double gpa;
	Address addr;
} Student;

void printStudent(Student);
void printStudentP(Student *);
void setStudent(Student *, char[], char[], unsigned int, short, double);
void setStudentAddress(Student *ps, char l[], char ci[], char cnt[], char zp[]);

int main()
{
	Student s1, s2;

	/* Defining s3 using static initialization. Good for testing, bad for actual product code: */
	Student s3 = { {"Tofig", "Aliyev"}, 19981002, 1515, 4.0, {"Mikayil Mushfig St 23", "Sumgayit", "Azerbaijan", "AZ2023" } };

	/* Define s1 and s2 attributes by calling a function */
	setStudent(&s1, "Gulu", "Guluyev", 19970703, 1111, 1.0);
	setStudentAddress(&s1, "Samad Vurgun St 54", "Ganja", "Azerbaijan", "AZ3012");

	setStudent(&s2, "Vali", "Valiyev", 20000101, 2222, 3.8);
	setStudentAddress(&s2, "Ahmadbay Aghaoglu 35", "Baku", "Azerbaijan", "AZ1008");

	/* printing students */
	printStudent(s1); // same result as printStudentP(&s1);
	printStudent(s2); // same result as printStudentP(&s2);
	printStudent(s3); // same result as printStudentP(&s3);

	return 0;
}

/* Struct variables are PASSED-BY-VALUE, which means they get copied to the function arg.
	Good for security (data integrity) purposes. */
void printStudent(Student s)
{
	printf("%s %s %u %d %lf\n", s.name.first, s.name.last, s.bday, s.id, s.gpa);
	printf("Student's address is %s %s %s %s\n", s.addr.line, s.addr.city, s.addr.country, s.addr.zip);
}

/* Same function as above, but this one saves you MEMORY and CPU. Why??? */
void printStudentP(Student *ps)
{
	printf("%s %s %u %d %lf\n", ps->name.first, ps->name.last, ps->bday, ps->id, ps->gpa);
	printf("Student's address is %s %s %s %s\n", ps->addr.line, ps->addr.city, ps->addr.country, ps->addr.zip);
}


void setStudent(Student *ps, char fst[], char lst[], unsigned int b, short i, double g)
{
	strcpy(ps->name.first, fst);
	strcpy(ps->name.last, lst);
	ps->bday = b;
	ps->id = i;
	ps->gpa = g;
}

void setStudentAddress(Student *ps, char l[], char ci[], char cnt[], char zp[])
{
	strcpy(ps->addr.line, l);
	strcpy(ps->addr.city, ci);
	strcpy(ps->addr.country, cnt);
	strcpy(ps->addr.zip, zp);
}