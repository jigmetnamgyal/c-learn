#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 32

typedef struct dialing_code {
	char* country; 
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

/* function prototypes */
int compare_code_asc(const void* left, const void* right);
int compare_code_desc(const void* left, const void* right);
int compare_country_asc(const void* left, const void* right);
int compare_country_desc(const void* left, const void* right);

int main()
{
    qsort(codes, N, sizeof(DialCode), compare_code_asc); // try compare_country_desc instead

    for(int i=0; i<N; i++)
		printf("%d %s\n", codes[i].code, codes[i].country);

	return 0;
}

/* A comparator function used for sorting an array in ascending order */
int compare_code_asc(const void* left, const void* right)
{
	int l_code = ((DialCode*)left)->code;
	int r_code = ((DialCode*)right)->code;

    return (l_code - r_code);

//	return ( ((DialCode*)left)->code - ((DialCode*)right)->code ); // ONE line :)
}

/* A comparator function used for sorting an array in decscending order */
int compare_code_desc(const void* left, const void* right)
{
	int l_code = ((DialCode*)left)->code;
	int r_code = ((DialCode*)right)->code;

	return (r_code - l_code);

//	return ( ((DialCode*)right)->code - ((DialCode*)left)->code ); // ONE line :)
}

/* A comparator function used for sorting an array in ascending order */
int compare_country_asc(const void* left, const void* right)
{
	char *l_str = ((DialCode*)left)->country;
	char* r_str = ((DialCode*)right)->country;

	return strcmp(l_str, r_str);

//	return strcmp((*(DialCode*)left).country, (*(DialCode*)right).country)
}


/* A comparator function used for sorting an array in descending order */
int compare_country_desc(const void* left, const void* right)
{
	char* l_str = ((DialCode*)left)->country;
	char* r_str = ((DialCode*)right)->country;

	return strcmp(r_str, l_str);

//	return strcmp((*(DialCode*)left).country, (*(DialCode*)right).country)
}