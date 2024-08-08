#include<stdio.h>


main() {


//declare an integer variable 'num' with a value 75 .
int num = 75;


//then declare a pointer variable 'ptr1' that points to 'num'.

int* ptr1 = &num ;

//after that ,declare another pointer 'ptr2' that pointer to 'ptr1'

//int* ptr2 = ptr1;

//after that ,declare another pointer 'ptr2' that pointer to  to the  address 'ptr1'

int** ptr2 = &ptr1;
//finally , print the value of 'num' using both 'ptr1' and 'ptr2'.



printf("\nvalue of num using ptr1 %d" , *ptr1);
printf("\nvalue of num using ptr2 %d " ,**ptr2);

printf("\nvalue of ptr1 %p " , ptr1);






}
