




				/*evaluatimg the expression ++i a pre-increment yields i+1 and as a side effect 
				 * icrements i */


#include <stdio.h>


main(){
	int i = 1;
printf("i is %d\n", ++i);
printf("i is %d\n", i );



   printf("evaluating the expression i++a post-increment produces the result i, but causes i to be incremented\n"); 

   int x = 1;
   printf(" x is %d\n", x++);
   printf("x is  %d\n", x);

return 0;
}

