#include<stdio.h>


#define  TRUE 1;
#define  FALSE 0;


int is_prime(int n) {

	for(int  i = 2 ; i < n; i++) {
	if(i % i ==0) { return FALSE;} }
	return TRUE;

};

int main() {
int n;
printf("\n Enter a number to check if prime");
scanf(" %d",&n);
int prime = is_prime(n);
if( prime) {printf("\nnot prime");}
else {printf("\nprime");}

}
