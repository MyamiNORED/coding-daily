#include<stdio.h>

main() {

int rows;

printf("enter number of rows : ");
scanf("%d",&rows);

for( int i = 1; i <= rows ; i++)
	{
	int c = 1;	
	for(int j = i ; j > 0 ; j--)
	{
	
	printf("%d",c);
	c++;
	} 

	
	printf("\n");
	
	}
	

for( int i = 1; i < rows ; i++)
	{
	int d = 1;
	for(int j = i; j <rows; j++)
	{
	printf("%d",d);
	d++;
	}
	printf("\n");
	}
}
