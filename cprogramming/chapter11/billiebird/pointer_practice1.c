/************************************


Declare an interger variable named 'num' with a value 42 . then , declare   a pointer variable named 'ptr' that points 
to the address  of 'num' , Finally ,  print the value  of 'num' using both the variable and the pointer 


***************************/
#include<stdio.h>
main() {

//declare an integer variable numed 'num' with value 42
int num = 42 ;

// declare a pointer named 'ptr' that points to address of 'num'

int *ptr = &num ;

//print the values using variable and pointer 

printf("using variable %d \n " , num);

printf("using pointer  %d \n " , *ptr );









}



















