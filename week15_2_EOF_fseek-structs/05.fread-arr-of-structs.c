#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning (disable : 4996)

#define N 32

typedef struct dialing_code {
	char country[30]; // cannot do char *country, why? 
	int code;
} DialCode;

DialCode codes[N] = {
	 {"Argentina",            54}, {"Bangladesh",      880},
	 {"Brazil",               55}, {"Burma (Myanmar)",  95},
	 {"China",                86}, {"Colombia",         57},
	 {"Congo, Dem. Rep. of", 243}, {"Egypt",            20},
	 {"Ethiopia",            251}, {"France",           33},
	 {"Germany",              49}, {"India",            91},
	 {"Indonesia",            62}, {"Iran",             98},
	 {"Italy",                39}, {"Japan",            81},
	 {"Mexico",               52}, {"Nigeria",         234},
	 {"Pakistan",             92}, {"Philippines",      63},
	 {"Poland",               48}, {"Russia",            7},
	 {"South Africa",         27}, {"South Korea",      82},
	 {"Spain",                34}, {"Sudan",           249},
	 {"Thailand",             66}, {"Turkey",           90},
	 {"Ukraine",             380}, {"United Kingdom",   44},
	 {"United States",         1}, {"Vietnam",          84}
};


int main()
{
	FILE* fp = fopen("country.dat", "rb+");
	DialCode* dc = NULL;

	// Using N is hardcoded, yes? So, which optimal way did we discuss to maintain acutal number of items:
	dc = (DialCode*) malloc(N * sizeof(DialCode));
	if (dc == NULL)
	{
		fprintf(stderr, "Error - unable to allocate required memory\n");
		return EXIT_FAILURE; // same with return 1
	}

	// Read the codes array ONE-by-ONE to File using a loop:	
//	for(int i=0; i<N; i++)
//		fread(dc+i, sizeof(DialCode), 1, fp);

	// Read the entire codes array AT ONCE to File with one line:
	fread(dc, sizeof(DialCode), N, fp);

	// Verify:
	for (int i = 0; i < N; i++)
		printf("%s %d\n", (dc+i)->country, (dc+i)->code);


	fclose(fp);

	return 0;
}
