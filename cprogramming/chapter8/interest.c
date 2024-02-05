

/*our next program prints a table showing the value of 100$\
invested at differant rates of interest over a period of years.the user will enter an interest rate and the number of years the money will be invested . the table will show the value 
of the money at one year intervals - at that interest rate and thenext four higher rates -- assuming that interest is coumpounded once  a year here a look:
Enter interest rate   :   6
Enter number of years :   5
Years 6%	7%	8%	9%	10% 
1    106.00	107.00	108.00	109.00	110.00
2    112.36	114.49	116.64	118.81	121.00
3    119.10     122.50	125.97	129.50	133.10
4    126.25     131.08	136.05	141.16	146.41
5    133.82	140.26	146.93	153.86	161.05

*/
#include <stdio.h>
main(){
float  interest = 0.06;
float T[100][100];
int i, j;
float  capital = 100;
for ( i = 0; i < 5; i++)
	
	{
	for ( j = 0 ; j < 5 ; j++)
{ 	T[j][i] = capital + (capital * interest );
	
}
	
	capital = T[0][j];
	interest = interest + 0.01;
}

for ( i = 0; i < 5; i++){
	printf("\n");
	for ( j = 0 ; j < 5 ; j++){
	printf(" %f ", T[i][j]);
}}
}


	
