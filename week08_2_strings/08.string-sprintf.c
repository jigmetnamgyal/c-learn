#include <stdio.h>
#pragma warning (disable : 4996)

int main () 
{
   char str[80];
   int num;

   /* sprintf function copies formatted output to str */ 
   sprintf(str, "my favorite number is %d", 916);
   puts(str);
   
   return(0);
}