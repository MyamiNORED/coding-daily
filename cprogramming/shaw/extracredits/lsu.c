#include <stdio.h>

int main()
{
   int numStudents = 35123;
   float cost = 123.45;
   double price = 123.45;
   char letter = 'Q';

   printf("\n**Integer outputs**\n");

   printf("FSU has %d students\n", numStudents);
   printf("FSU has %10d students\n", numStudents);
   printf("FSU has %-10d students\n", numStudents);
   printf("FSU has %2d students\n", numStudents);

   printf("\n**float outputs**\n");

   printf("Your total is $%f today\n", cost);
   printf("Your total is $%e today\n", cost);
   printf("Your total is $%.2f today\n", cost);
   printf("Your total is $%9.2f today\n", cost);

   printf("\n**double outputs**\n");

   printf("Your total is $%f today\n", price);
   printf("Your total is $%e today\n", price);
   printf("Your total is $%.2f today\n", price);
   printf("Your total is $%9.2f today\n", price);

   printf("\n**char/string outputs**\n");

   printf("%c%c%c\n", '*', letter, '*');
   printf("%s%10s%-10sEND\n", "Hello", "Alice", "Bob");

}
