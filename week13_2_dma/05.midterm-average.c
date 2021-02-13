#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning (disable : 4996)

void read_grades(double *, const int);
double average(double *, const int);

int main()
{
	int num;
	double sum = 0.0;
	double *p_grades;

	printf("Please enter number of students: ");
	scanf("%d", &num);
 
	p_grades = (double*) malloc(num * sizeof(double));

	if (p_grades == NULL)
	{
		fprintf(stderr, "Error - unable to allocate required memory\n");
		return EXIT_FAILURE;
	}

	read_grades(p_grades, num);

	printf("Average of grades: %.2lf\n", average(p_grades, num));
	
	/* release taken memory (give back to RAM) using free() function */
	free(p_grades);
	
	/* after freeing, variable becomes DANGLING POINTER, so we should make it NULL */
	p_grades = NULL;

	return 0;
}


void read_grades(double *p, const int LEN)
{
	for (int i = 0; i < LEN; i++)
	{
		printf("Enter grade of student #%d: ", i);
		scanf("%lf", (p + i)); // same with scanf("%lf", &p[i]) but better with pointer, because p is not array
	}

	return;
}


double average(double *p, const int LEN)
{
	double sum = 0.0;

	for (int i = 0; i < LEN; i++)
		sum += *(p + i); // same with sum += p[i] but better with pointer, because p is not array

	return sum / LEN;
}