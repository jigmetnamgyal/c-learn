#include <stdio.h>


int main()
{
	int arr[] = { 2, 5, 9 }; 

	printf("%u BYTES\n", sizeof(arr)); // 3*4=12 BYTES
	  

	// find the length of the array using the below formula:
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d elements in the array \n", len);

	for (int i = 0; i < len; i++)
		printf("%d ", arr[i]);

	return 0;
}