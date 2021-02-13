#include <stdio.h>

#pragma warning (disable : 4996)

typedef struct student {
	char name[50]; // + 2B pad
	unsigned int bday;
	short id; // + 6B pad
	double gpa;
} Student;


int main()
{
	Student s1 = { "Ali Aliyev", 19900101, 1111, 1.0 };
	Student s2 = { "Vali Valiyev", 20000202, 2222, 2.0 };

	FILE *outfile; 

	/* open file for writing in binary format */
    outfile = fopen ("students.dat", "wb"); 
    if (outfile == NULL) 
    { 
        fprintf(stderr, "\nError opend file\n"); 
        return 1; 
    } 

	/* write struct to file */
    fwrite (&s1, sizeof(Student), 1, outfile); 
    fwrite (&s2, sizeof(Student), 1, outfile);

	/* close file */
    fclose (outfile); 

	return 0;
}

