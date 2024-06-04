#include<stdio.h>


int i ;

void print_row(void) 
{
	for(i = 0 ; i<= 10 ; i++)
		printf("*");

}

void print_matrix(void)
{
 for ( i = 0 ; i <= 10 ; i++)
	{
	print_row();
	printf("\n");
	}

}

main() {

print_row();
print_matrix();



}
