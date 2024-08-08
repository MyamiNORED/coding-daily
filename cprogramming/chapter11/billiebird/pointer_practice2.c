/***************** swap **********************


write a function called swap that take two integer pointers
as arguments and swap the values they point to .then ,
in the main function declare two integer variables 'a' and 'b' 
with 5 and 10 respectively .call the swap function 
with the addresses  of 'a' and 'b' , and then 
then print the values of 'a' and 'b' after the function call 








***********************************************/

#include<stdio.h>
void swap (int* x, int* y) 
{
	int temp ;
	temp = *x;
	*x =  *y;
	*y = temp ;
}
;


main() {

int a  = 5;
int b = 10 ;
swap(&a ,&b);
printf("value of a %d",a);
printf("value of b %d",b);


}
