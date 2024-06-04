#include<stdio.h>

main() {
	int max;
	int n;


	printf("Entrer une valeur ");
	scanf("%d",&max);
	
	for(int i = 0 ; i < 9 ; i++) {
	printf("\nEntrer une autre valeur: ");
	scanf("%d",&n);
	if ( n > max ) {
		max = n ;
	}
	}
	printf("la valaur max est :  %d",max);

}
