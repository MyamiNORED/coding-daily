#include <stdio.h>

main(){
	int d,n;
	for (;;){
		printf("Enter a number (enter 0 to stop): ");
		scanf("%d", &n);
		if (n == 0) break;
		printf("%d cubed is %d\n", n, n*n*n );
	}
}
