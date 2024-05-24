#include<stdio.h>
#include <stdlib.h>
#include<sys/types.h>
#include<unistd.h>



main() {
//create a varaiable balance and assign 1000 to it
int balance = 1000 ;

int bet = 0 ;
int guess ;
int dice ;
printf("Welcome to the dice Game\n\n ");
printf("Enter bet :  ");

scanf("%d" , &bet);


// ask the user for a guess between 0 and 6 and tell
// the user to enter 0 to quit 
while ( balance > 0) {

printf("\n Enter guess or Enter 0 to quit");

scanf("%d", &guess);
if (guess == 0) { break;}

while ( (guess < 0 ) ||  (guess > 6)) 
	{
	printf("please enter between 1 and 6 ");
	scanf("%d",&guess);
	}


//pause the game for two seconds
sleep(2);

//generate a random number between one and six  
//put the value in variable dice 


srand(getpid());
dice = rand() % 7;


if (guess == dice ) 
	{
	printf("very good ! you won ");
	balance  = balance +  (bet * 3) ;
	

	}

else if (balance == 0 ) 
	{
	break;
	}

else {
	printf("you lost ");
	balance = balance  - bet ;

	}

}
}
