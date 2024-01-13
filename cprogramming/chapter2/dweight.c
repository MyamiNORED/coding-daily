#include <stdio.h>
main() {

	int height, length, width, volume, weight;

	/*lets define a macro?
	 * what is a macro ?
	 * macro definition we name this constant 
	 * #define CUBIC_IN_PER_LB 166
	 * #define is a preprocessor directive, just as #iclude is, so there is no semicolon at the end
	 * of the line.
	 * when a program is compiled, the preprocessor replaces each macro by the value
	 * that it represents .*/





	#define CUBIC_IN_PER_LB 166
	printf("Enter height of box: ");
	scanf("%d",&height);
	printf("enter lenght of box: ");
	scanf("%d",&length);
	printf("enter width of box: ");
	scanf("%d",&width);

	volume = height * length * width ;
	weight =( volume + CUBIC_IN_PER_LB - 1  ) / CUBIC_IN_PER_LB ;

	printf("Volume (cubic inches ) : %d \n", volume );
	printf("Dimensional weight (pounds) : %d \n ", weight);
	
	return 0;
}
	

