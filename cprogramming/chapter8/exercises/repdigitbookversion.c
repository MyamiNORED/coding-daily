#include <stdio.h>

#define TRUE 1
#define FALSE 0
int repited_digits[10] = {0};
typedef int Bool;

main () {
Bool digit_seen[10] = {0};
int digit ;
long int n ; 

printf("Enter a number : ");
scanf("%ld", &n);

int i = 0;
while (n > 0) {
	digit = n % 10 ;
	if (digit_seen[digit])
		repited_digits[i] = digit;
		i++;
	digit_seen[digit] = TRUE;
	n /= 10;
	
}
printf("\n repited digits : ");
for (int i = 0; i < 10 ; i ++) 
{
	if (repited_digits[i] > 0) {
	printf(" %d ", repited_digits[i]);
	}
}
/*else
	printf("No repeated digit \n\n");*/
return 0;
}
