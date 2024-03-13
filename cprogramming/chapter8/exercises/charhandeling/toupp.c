#include <stdio.h>

main() {

/*
enter a letter : a
letter to uppercase : A

*/
char  letter;

do {
printf("enter letter : ");
scanf("%c", &letter);
if('a' <= letter && letter <= 'z')
	{
	letter = letter - 'a' + 'A';
	}

printf("letter to uppercase : %c " , letter);
printf("\n");
} while ( letter != 'm');


} 
	
