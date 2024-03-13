#include <stdio.h>

/*********************************
write a C program thet uses a "for" loop to print all even numbers betwen a given range
(inclusive). define a range of numbers and print the even numbers within that range 

*************************************/

main() {
int Range1,Range2;
//get the raange
printf("enter range: ");
scanf("%d,%d",&Range1,&Range2);
printf("\n numbers from range %d to %d ",Range1,Range2);
//iterate from lowest end to the highest 
for(int i = Range1; i <= Range2; i++)
	{
	if( i % 2  == 0)
	printf(" %d ",i);
	}

//print to  the screen
}

