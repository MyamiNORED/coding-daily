/*countdown.c*/

#include<stdio.h>
#include<unistd.h>

int main() {

int number ;

number = 5 ;

while(1) {

	printf("%d \n",number);
	sleep(1);
	number = number -1;


	if (number <1 ) {
	break ; 
}
	
}
}
