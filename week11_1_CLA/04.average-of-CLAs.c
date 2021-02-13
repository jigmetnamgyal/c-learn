#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int sum = 0;
	double ave;

	if (argc <= 1)
	{
		printf("At least one argument expected.\n");
		return 1;
	}
	

	for (int i = 1; i < argc; i++)
		sum += atoi(argv[i]);

	ave = (double) sum / (argc - 1);

	printf("The average is: %lf\n", ave);

	return 0;
}