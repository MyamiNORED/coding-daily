#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;

main () {
int repited_digits[10] = {0};
int digit ;
long int n ; 
int i = 0;
printf("Enter a number : ");
scanf("%ld", &n);
while (n !=0) {
while (n > 0) {
	digit = n % 10 ;
	repited_digits[digit]++;
		
	n /= 10;
}
for (i = 0 ; i < 10 ; i++) 
	
	{
	printf("%d ", i );

}
printf("\n");
for (i = 0 ; i < 10 ; i++) 
	{
	printf("%d ", repited_digits[i]);


	}
for (i = 0 ; i< 10; i++){
	repited_digits[i] = 0;
	}
printf("\nEnter a number : ");

scanf("%ld", &n);
}

}
