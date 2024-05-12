#include <stdio.h>
#include <stdlib.h>
#include<time.h>


main() {
	

//declare varaibles

int i = 0, j = 0 ;

int R[10][10];

while (i<10 && j < 10 && R[i][j] != 0) {
	
	srand(time(NULL));
	int direction = rand() % 2;
	i = i + direction ;
	R[i][j] = 1;
	}
}
