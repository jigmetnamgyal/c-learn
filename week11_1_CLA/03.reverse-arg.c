#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int len;
	char temp;

	if (argc != 2)
	{
		printf("You MUST give only ONE argument!\n");
		return 1;
	}

	len = strlen(argv[1]);

	for (int i = 0; i < len/2; i++)
	{
		temp = argv[1][i];
		argv[1][i] = argv[1][len - 1 - i];
		argv[1][len - 1 - i] = temp;
	}
	

	printf("The reversed word is: %s\n", argv[1]);

	return 0;
}