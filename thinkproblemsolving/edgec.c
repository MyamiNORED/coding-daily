#include <stdio.h>

main() {

for (int i = 0 ; i < 7; i++)
	{
	
	int m = 4;
	if (i < 4) {
	for (int j = 0; j <= i ; j++)
	{
	
	printf("#");
	
	
	}
	}
	else if ( i > 4 )  { 
	for( int k = 0 ; k  < m     ; k++) 
	{
	printf("#");
	}
	}
	printf("\n");
	m = m-1;
	}
}
