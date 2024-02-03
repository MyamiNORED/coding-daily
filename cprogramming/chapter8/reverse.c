/*
our first array program prompts the user to enter
a series of numbers, then writes the numbers in reverse order :

enter 10 numbers: 34 82 49 10 7 94 23 11 50 31
in reverse order: 31 50 11 23 94 7 10 49 82 34

*/

#include <stdio.h>
int T[20], i;
int R[20];
int j = 9;
main() {
	printf("enter 10 numbers :");
	for (i=0 ; i < 10 ; i++) 
{
	scanf(" %2d", &T[i]);
	R[j]= T[i];
	j--;
}
for ( i = 0; i < 10 ; i++){
//	printf("| %d | ----> i : %d \n",T[i],i);

	printf("%d ",R[i]);
	}
}

