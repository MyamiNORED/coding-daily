
#include <stdio.h>

main() {

int T[10][10];
int sumofrows = 0;
int sumofcolums = 0; 
for( int i =0 ; i< 5; i++) 
	{
	
	printf("Enter row %d : ", i+1);
	for (int j = 0; j< 5; j++)
	{

	scanf("%d",&T[i][j]);
	}
}


printf("row totale : ");
for( int i =0 ; i< 5; i++) 
	{
	for (int j = 0; j< 5; j++)
	{
	sumofrows += T[i][j];
	}
	printf(" %d " ,sumofrows);
	sumofrows = 0;
	}
}


