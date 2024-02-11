#include <stdio.h>

int main () {

char T[4][6];
char suit[] = {'h','c','s','d','\0'};
char  rank[] = { '1','2','3','4','a','j'};
int i,j;
for ( i =0;i < 4 ; i++)
	{
	for (  j =0; j < 6 ;j++)
	{
	T[i][j] = suit[i]  +  rank[j];
	}}
printf("done");

for ( i = 0; i < 4 ; i++)
{
	printf("\n");
	for (j = 0 ; j < 6 ; j++)
{	
	printf("%s\t" ,T[i][j]);
}
}
} 

