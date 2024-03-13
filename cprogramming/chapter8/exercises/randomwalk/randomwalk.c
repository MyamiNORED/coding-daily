#include <stdio.h>

/*********************Random Walk****************************************/
/*

write a program that generates a random walk across  a 10x10 array


xxxxxxxxxx        Axxxxxxxxx
xxxxxxxxxx	  BCDxxxxxxx
xxxxxxxxxx	  xFExxxxxxx
xxxxxxxxxx	  HGxxxxxxxx
xxxxxxxxxx  -->   Ixxxxxxxxx 
xxxxxxxxxx	  JxxxxxxxZx
xxxxxxxxxx	  KxxRSTUVY.
xxxxxxxxxx	  LMPQxxxWXx
xxxxxxxxxx	  xNOxxxxxxx
xxxxxxxxxx	  xxxxxxxxxx

***The program must "randomly walk" from element to element 
always going up,down left ,or right by one element .

***The elements visited by the program will be labeled with letters A through Z , in
order visited . 

HINTS:

--> generate a random number --> use srand and rand --> look at its remainder when divided by 4
--> there four possible values for raminder-0,1,2,3-indicating the direction of the next move
--> before performing the move check that :
--> (A) it wont go outside of the array 
--> (B) it doesn't take us to an element that has already been assigned 
--> if either condition is violated ,try moving in another direction
--> if all directions are blocked ,the program must terminate .
--> example of premature termination


				ABGHIxxxxx
				xCFxJKxxxx
				xDExMLxxxx
				XXXXNOxxxx
				xxWXYPQxxx
				xxVUTSRxxx
				xxxxxxxxxx
				xxxxxxxxxx
				xxxxxxxxxx
				xxxxxxxxxx





****************************************************************************************************/

main(){

//let us create a 10 by 10 array filed with dots

char  D[10][10] = {
{'.','.','.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.','.','.'}
};

for (int i = 0 ; i < 10 ; i++)	
	{
	printf("\n");
	for(int j = 0 ; j < 10 ; j++)
	{
	printf("%c",D[i][j]);
	}
	}

}




















				
