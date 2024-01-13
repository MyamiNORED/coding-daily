#include <stdio.h>

main(){
	int n,sum,i;
	n = 0;
	sum = 0;
	while (n < 10){
		scanf("%d", &i);
		if (i == 0) continue;
		sum += i;
		n++;
		printf("n == %d\n",n);
		/*continue jumps to here*/
	}
}
