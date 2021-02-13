#include <stdio.h>
#include <string.h>

int main () 
{
   const char str[] = "Salam Dunya";
   const char ch = 'u'; // try 'a' and 'p'
   char *result; // empty string with any size

   // strchr() searches for the first occurrence of the substring that begins with ch: 
   result = strchr(str, ch); // unya

   printf("String after %c is: %s\n", ch, result);
   
   return(0);
}