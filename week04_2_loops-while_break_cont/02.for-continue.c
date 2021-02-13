// This program prints ODD numbers from 0 to N

#include <stdio.h>

#define N 10
 
int main () 
{
	for (int i = 0; i < N; i++) 
	{
		if (i % 2 == 0)
		{
			continue;
		}

		printf("%d\n",i);
	}
	 
	return 0;
}