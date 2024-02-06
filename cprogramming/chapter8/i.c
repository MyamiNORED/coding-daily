#include <stdio.h>

main() {
int i , j;

float interest = 0.06;
float capital= 100 ;
float a[100][100];

for ( i = 0 ; i < 5 ; i++) 
	{
	capital = 100.0;
		for( j = 0 ; j < 5 ; j++)
	{
	capital  = capital + (capital * interest);
	a[j][i] = capital ;
	}
	interest = interest + 0.01;
	}




  
printf("Year       6//%          7//%              8//%             9//%           10//%");
printf("\n");
//printing the array 
for ( i = 0 ; i < 5 ; i++)
	{

	printf("%d ", i+1); 
		for ( j = 0 ; j < 5 ; j++)
	{
	printf("      %.2f " ,a[i][j]);

	}
	printf("\n");
	}
}
	

