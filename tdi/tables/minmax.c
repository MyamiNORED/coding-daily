#include <stdio.h>
main(){
int T[100]; 
int max = T[0];int min = T[0];
int i,n;

printf("saisir les dimension du tableau : \n");
scanf("%d",&n);

for (i=0;i<n;i++){
	
	printf("sasir les elemnts du tableau \n");
	scanf("%d",&T[i]);
	if (T[i] > max )
	max = T[i];
	else if (T[i] < min)
	min = T[i];
}

printf("the bigesst value is %d \n",max);
printf("the smallest value is %d \n", min);
}

