#include<stdio.h>
/*Test wether a number is prime */
#define TRUE 1
#define FALSE 0
typedef int Bool;
Bool is_prime(int n);


Bool
is_prime(int n)
{
int divisor;
if (n <= 1 ) return FALSE;
for(divisor = 2 ; divisor * divisor < n; divisor++) 
{
	if ( n % divisor == 0 ) { return FALSE;}
	return TRUE;
}
};

main() {
	int n;
	printf("\nEnter a number : ");
	scanf("%d",&n);
	if (is_prime(n)) {printf("Prime\n");}
	else{printf("\nnot prime");}
	return 0;

}
