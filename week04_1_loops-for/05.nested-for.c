#include <stdio.h>

#define N 3 // try 9
#define M 3 // try 9

int main()
{
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			printf("%d ", i*j);
		}

		printf("\n");
	}

	return 0;
}