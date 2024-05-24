#include<stdio.h>

main() {

int rows;

printf("enter number of rows : ");
scanf("%d",&rows);

for( int i = 1; i <= rows ; i++)
	{
	
	for(int j = i ; j > 0 ; j--)
	{
	
	printf("%d",i);
	} 

	
	printf("\n");
	
	}
	
}
