#include <stdio.h>
#include <string.h>

main(){
char ch1[300],ch2[150];int x;
char ch3[600];

scanf("%s %s",&ch1,&ch2);

x = strlen(ch1) +strlen(ch2);
printf("la longueur %d\n",x);

strcpy(ch3,ch1);
strcat(ch3,ch2);

printf("cobined is :%s",ch3);
}

