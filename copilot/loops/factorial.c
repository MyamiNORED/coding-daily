#include<stdio.h>
main(){
int i ;
int factorial = 1 ;
printf("enter numeber to factorize :");
scanf("%d",&i);
do {
  factorial  = factorial * i ;
	i--;



}
while(i > 0);
printf("\nfactorial is : %d",factorial);
}
