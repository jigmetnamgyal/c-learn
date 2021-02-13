#include <stdio.h>
#include <stdarg.h> // for va_list

/* This is how printf function is implemented */

double average(int num, ...) 
{
   va_list valist;
   int sum = 0;

   /* initialize valist for num number of arguments */
   va_start(valist, num);

   /* access all the arguments assigned to valist */
   for (int i = 0; i < num; i++) 
      sum += va_arg(valist, int);
	
   /* clean memory reserved for valist */
   va_end(valist);

   return sum*1.0/num;
}

int main() 
{
   double ave1 = average(4, 2,3,4,5);

   double ave2 = average(6, 3,1,7,5,10,15);
}