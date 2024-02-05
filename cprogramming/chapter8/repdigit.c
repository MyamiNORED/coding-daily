/*
wheter any of the digits in a number appear more than once ,
after the user enters a number , the program prints either Repeated digit or No repeated digit 
Enter a number : 28212
Repeated digit 

*/

#include <stdio.h>
int n;
int i;
main()
{
        printf("Enter a number : ");
	scanf(" %d",&n);

// getting all columns of a number 
/*
28212 
*/

	i = n % 10000;
	printf("%d\n",i);
	i = i % 1000;
	printf("%d\n",i);
	i = i  % 100;
	printf("%d\n", i);
}
