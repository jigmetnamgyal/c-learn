#include <stdio.h>
#include <limits.h>
#include <string.h>

/* Among the entered arguments, 
  find the word with the min length */

int main(int argc, char *argv[])
{
	int min = INT_MAX, index = 0;

	if (argc <= 1)
	{
		printf("At least one argument expected.\n");
		return 1;
	}

	// start from index 1, because index 0 is the program name itself
	for (int i = 1; i < argc; i++)
	{
		if (strlen(argv[i]) < min)
		{
			min = strlen(argv[i]);
			index = i;
		}
	}

	printf("The word with minimum length %d is: %s\n", min, argv[index]);

	return 0;
}