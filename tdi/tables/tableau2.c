#include <stdio.h>
main() {

float T[100],x;
int j = 0,n;

printf("what is the number you are searching for \n");
scanf("%f", &x);
printf("please set the table width:\n ");
scanf("%d", &n);

for(int  i = 0; i < n; i++){
	printf("enter element of table");
	scanf("%f",&T[i]);
	if (T[i] == x)
	j++;
}
printf("number of occurances of number %f is %d",x,j);
}
