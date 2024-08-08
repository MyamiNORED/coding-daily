#include<stdio.h>



void calculate_factorial (int n , int *result);

void calculate_factorial (int n , int *result)
	{
	
	for (int  i = n- 1 ; i <= 1 ; i--)
	{
	*result = *result * n ;
	}
	}	

main() {
/*****************************
calculate factorial 
*****************************/
//write a c program that calculates the factorial of a given integer using pointer .
//the program should take an integer input and use a pointer to cuculate and dispaly the factorial

int n , *result ;
*result = &n;
printf("enter n :");
scanf("%d", &n);
calculate_factorial(n,*result);
printf("\nvalue of result %d" ,*result);

}
