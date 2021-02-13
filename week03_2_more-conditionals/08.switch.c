#include <stdio.h>
 
int main () 
{
   /* local variable definition */
   char grade;
   scanf_s("%c", &grade);

   switch(grade) 
   {
	  case 'a':
      case 'A' :
         printf("Excellent!\n" );
		 printf("I envy you!\n");
         break;
	  case 'b':
      case 'B' :
		  printf("Good\n");
		  break;
      case 'C' :
         printf("Well done\n" );
         break;
      case 'D' :
         printf("You passed\n" );
         break;
      case 'F' :
         printf("Better try again\n" );
         break;
      default :
         printf("Invalid grade\n" );
		 break;
   }
   
   printf("Your grade is  %c\n", grade );
 
   return 0;
}