#include<stdio.h>

main() {
int N,i,j;

printf("enter height : ");
scanf("%d", &N);
int M = N;
int O = 1;
int P;
for ( i = 0 ; i < N ; i++)
	{
// the first loop printing spaces
	for ( j = M ; j > 1 ; j--)
	{
	
	printf(" ");


	}


// the second loop printing  stars

	
	for (j = 1 ; j < O ; j++)
	
	{
	printf("*");
	}
	M--;
	O = O+2;	
	printf("\n");
	}	
M = N;
P = 1;
//printing the third loop
for ( i = 1 ; i < N ; i++){
	for ( j = 0 ; j < P ; j++)
	{
	printf(" ");
	}
	for ( j = M ; j > 0 ; j--)
	{
	printf("*");
	}
	printf("\n");
	M = M - 2 ;
	P = P + 1;
	}

	}


