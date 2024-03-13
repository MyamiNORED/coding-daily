#include<stdio.h>	
#include <ctype.h>

main()	{


char message[100];
printf("enter message:");
for (int i = 0 ; i <  50 ; i++)
	{
	char t  = getchar() ; 
	char T = toupper(t);
	if( t == '\n' )
		break;
	else message[i] = T;
}


for (int i = 0 ; i < 50  ; i++)
	{
	if (message[i] =='A')
		printf("%d",4);
	else if (message[i] =='B')
		printf("%d",8);
	else if (message[i] =='E')
		printf("%d",3);
	else if (message[i] =='I')
		printf("%d",1);
	else if (message[i] =='O')
		printf("%d",0);
	else if (message[i] =='S')
		printf("%d",5);
	else printf("%c",message[i]);
}
printf("!!!!!!!!!!!");



}
