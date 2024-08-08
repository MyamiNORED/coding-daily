/********     addition       ***/

#include<stdio.h>


void  addition (int *target ,int a , int b ) 
	
	{

	
	*target = a + b;
	 

	}


int main() 
	{
	int x , y , answer;

	x = 5 ;
	y = 15 ;
	addition(&answer, x, y); 
	printf(" %d plus %d is %d ",x ,y ,answer);
	return 0;






	}	





