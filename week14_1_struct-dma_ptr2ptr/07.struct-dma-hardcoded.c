#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning (disable : 4996)

typedef struct student {
	char name[50];
	int bday;
	short id;
	double gpa;
} Student;

void printStudent(const Student *);
void setStudent(Student *, char [], unsigned int, short, double);

int main() 
{
	Student *ps = NULL;

	/* allocate memory (3*72 BYTES) dynamically for ps */
	ps = (Student*) malloc(3 * sizeof(Student));

	printf("sizeof(Student) = %d \n", sizeof(Student));	// 72 Bytes, why?
	printf("sizeof(ps) = %d \n", sizeof(ps));		// 4 Bytes, why?
	printf("sizeof(*ps) = %d \n", sizeof(*ps));		// 72 Bytes, why?

	if( ps == NULL ) 
	{
		fprintf(stderr, "Error - unable to allocate required memory\n");
		return EXIT_FAILURE; 
	}
	
	setStudent(ps+0, "Vali Valiyev", 19900101, 1111, 1.0); // same as &ps[0]
	setStudent(ps+1, "Gulu Guluyev", 19950202, 2222, 2.0); // same as &ps[1]
	setStudent(ps+2, "Nuru Nuruyev", 20000303, 3333, 3.0); // same as &ps[2]

	printStudent(ps); 
	printStudent(ps+1);
	printStudent(ps+2);
	
	/* release memory */
	free(ps); 
	ps = NULL; 

	return EXIT_SUCCESS; 
}


/* Print a student using the pointer to the student */
void printStudent(const Student *ps)
{
	// ps->id = 5; // this is error, why? because we made ps const, so that its value cannot be modified
	printf("%s %d %d %lf\n", ps->name, ps->bday, ps->id, ps->gpa);
}

/* Save the given info INTO to the student using pointer to the student */
void setStudent(Student *ps, char n[], unsigned int b, short i, double g)
{
	strcpy(ps->name, n);
	ps->bday = b;
	ps->id = i;
	ps->gpa = g;
}