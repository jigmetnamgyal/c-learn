#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable : 4996)

int main()
{
	int n;
	scanf("%d", &n); // 5

	int *p = (int*)malloc(n * sizeof(int));

	printf("%d ", *p); // p[0]

	*p = 5; // p[0] = 5;
    *(p+1) = 3; // p[1] = 3;
	*(p + n - 1) = 7; // p[n-1]=7;


	
	free(p); // p DANGLING POINTER (bad situation)
	p = NULL; // p is NULL (good)
	

//	printf("%d ", *p);

	return 0;
}