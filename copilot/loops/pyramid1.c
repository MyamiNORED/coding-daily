#include <stdio.h>

main() {

int N;
printf("enter height of pyramid: ");
scanf("%d", &N);
int C = N-1;
for (int  i = 0 ; i < N ; i++ ) 
	{

		

	for(int j = C  ; j >i ; j--)

	{printf(" ");} 
	for (int k = 0 ; k <= i ; k++)
	{printf("*");}

	for (int l = 0 ; l < i ; l++)
	
	{printf("*");}




C--;
printf("\n");
}
}
