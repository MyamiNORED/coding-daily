#include <stdio.h>

main() {
int i , j;

float interest = 0.06;
float interest_monthly = interest  / 2;

float a[100][100];
float M[100][100];
for (j = 0 ; j < 5 ; j++)
	{
	int capital = 100.0;
	int sum = 0;
	for ( i = 0 ; i < 3 ; i++) 
	{

	capital  = capital + (capital * interest_monthly);
	M[j][i] = capital;
	sum = sum + M[j][i];
	}
	interest += 0.01;
	
}
	



printf("\n");




for (j = 0 ; j < 5 ; j++)
	{
	for ( i = 0 ; i < 3 ; i++) 
	{
	printf(" month %d :    %5f \t " , i+1 ,M[j][i]);

	}
	printf("\n");
}




  
}
	

