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


int main()
{
	/* initialize student */
	Student s = {"Kim Sun", 19981002, 1515, 4.0 };

	FILE *outfile;
	char name[50];

	/* open file for reading and writing in binary, NO truncate! */
	outfile = fopen("students1.dat", "rb+");
	if (outfile == NULL)
	{
		fprintf(stderr, "\nError opend file\n");
		return 1;
	}

	// Move the file pointer (cursor) to the location (in file) of last student
	fseek(outfile, -1 * (int)sizeof(Student), SEEK_END);
	printf("%ld\n", ftell(outfile)); //144


	/* write new struct to file, this will update name of Tofig to Aligulam in the file,
	 *  but not really efficient, because it's re-writing other properties (bday, id, gpa)
	 *  to the file, too, whereas they did not actually change, though. */
	fwrite(&s, sizeof(Student), 1, outfile);

	/* Compared to line above, the below one is better, because we only update the name of the student,
	 * 	and do not touch other properties. Uncomment below: */
	strcpy(name, "Lala");
	fwrite(name, strlen(name) + 1, 1, outfile);

	fclose(outfile);

	return 0;
}
