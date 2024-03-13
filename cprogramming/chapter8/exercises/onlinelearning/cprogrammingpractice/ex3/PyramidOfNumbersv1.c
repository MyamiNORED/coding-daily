/********Pyramid of Numbers****************
Write a C program that uses nested 'for' loops to print a
pyramid of numbers . the height of the pyramid should be provided 
as  a constant , and the program should print the pyramid 
pattern based on that height


 1
222
   
1
22
333                    
4444



*******************************************/
#include <stdio.h>
 main() {
int n ;

printf("enter triangle size:");
int m = 2;

scanf("%d",&n);
int k = n;
for(int i = 1 ; i < n ; i++)
	{
	
	for(k; k > 0 ; k--)
	{
	printf("*");
	}

	k = n-i-4;
	
	for (int j=0; j <= i ; j++)
	{
	printf("%d",m);
	}
	printf("\n");
	m = m + 1 ;
	}
}






