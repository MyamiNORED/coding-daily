#include <stdio.h>
main(){
int T[6] = { 0 , 0 , 0 , 0 , 0 , 0};
int i , p =0 , Im = 0;

for (i = 0 ; i < 6 ; i++) 
{
	if ( T[i] % 2 == 0)
	p++;
	else
	Im++;
}
printf("pair %d ",p);
printf("imapir %d " , Im);
}
