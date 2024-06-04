

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>


int random_function() {
	
	int x;
	x = rand() % 2;
	return x;
}
int  main(){

int i;
int j;

srand(getpid());
i = 0 ; j = 0;
int R[2][2] = {0};
R[0][0] = 90 ;
while (R[i][j] <= 90 ) {

	while ( (i<= 1 && i >=0 ) ||(j <= 1 && j >= 0) ||( R[i][j] < 90))
	{
	i = random_function();
	j = random_function();
	
	}
	R[i][j] += 1 ;

}


}
