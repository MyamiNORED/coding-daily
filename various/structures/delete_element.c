#include<stdio.h>



void delete ( float T[10] ,int  position)
	{
	int j = 0 ;
	float N[9];
	for (int i = 0 ; i< 10 ; i++) {

	if (i!= position ) 
	{
	N[j] = T[i];
	j++;
	}
	else 
	{
	continue;
	}
	}
	
	for (int i = 0 ; i< 9 ; i++) {
	printf("| %.1f ",N[i]);

		}

}

int  find_minimum (float T[10] )	{
	int position;
	float min = T[0];
	for( int i = 0; i< 10 ; i++) {

	if ( T[i] < min )
	{ min = T[i];
	position = i;
}
}
	return position;
}


main() {

float T[10] = { 9,-2.5,78,0,-2.5,3,1.1,1,2,3};


delete(T,1);

int p = find_minimum(T);
printf("\n pos of minimum %d",p);




}
