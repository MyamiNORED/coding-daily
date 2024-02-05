/*
our first array program prompts the user to enter
a series of numbers, then writes the numbers in reverse order :

enter 10 numbers: 34 82 49 10 7 94 23 11 50 31
in reverse order: 31 50 11 23 94 7 10 49 82 34

*/

#include <stdio.h>
int T[20], i;
int R[20];
int K;
main() {
	
	printf("How many numbers do you want to enter\n");
	scanf(" %d",&K);
	printf("enter %d  numbers :",K);
	for (i=0 ; i < K ; i++) 
{
	scanf(" %2d", &T[i]);
}

// let us do it for dynamic array
int j = K;
j= j - 1;
for ( i = 0 ; i < K; i++)
{
	R[i] = T[j];
	j--;
}
for ( i =0 ; i < K; i++)
{
	printf(" %d ", R[i]);
}


















// This was the first iteration where the numbers entered is known
/*
	R[j]= T[i];
	j--;

}
for ( i = 0; i < 10 ; i++){
//	printf("| %d | ----> i : %d \n",T[i],i);

	printf("%d ",R[i]);
	}
}
*/

}
