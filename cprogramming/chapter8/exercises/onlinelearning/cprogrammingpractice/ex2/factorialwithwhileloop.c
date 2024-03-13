#include <stdio.h>

/****
write a c program that uses 'while' loop to calculate the factorial of a
given positive integer .The factorial of a number 'n' is the product
of all positive  integers 1 to n.
****/


main () {

int n = 1;
int f;
printf("enter factorial : ");
scanf("%d",&f);
printf("factorial of %d is :",f);
while ( f > 0) {

	n = n * f;
	f = f - 1;
	}
printf(" %d" ,n);
}

