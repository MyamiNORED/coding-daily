/*******************Guessing a Number*************************************/
/*
the program generates a random number between 1 and 100;
they tries to guess it 

Guess the secret number between 1 and 100.
A new number has been chosen .
Enter a guess : 55
Too low; try again
Enter a guess : 65
Too high ; try again
Enter a guess : 60
Too high ,try again
Enter a guess : 58
You won in 4 guesses !
Play again (Y/N) y
**********************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int guesses = 0;
int computer_number ;
int user_number;
int guess;
void logic(void);
int random_function();
void message(void);
int random_function()
{
	int random = rand() % 100;
	return random;

}



void logic() 
{
while (computer_number != guess)
         {
         if (guess > computer_number) {printf("\nToo high ; try again");guesses++;printf("\nEnter a guess : ");scanf(" %d",&guess);}
        else if (guess < computer_number) {printf("\nToo low ; try again");guesses++;printf("\nEnter a guess : ");scanf(" %d",&guess);}
 

         }
 

}





void again(){

	printf("\nPlay again (Y/N) ");
	char choice;
	scanf(" %c",&choice);
	if (choice == 'y') {message();}
}

void message() {

printf("\nGuess the secret number between 1 and 100");
printf("\nA new number has been chosen ");
}


int main()
 {
message();
printf("Enter a guess : ");
scanf(" %d",&guess);
srand(getpid());
computer_number = random_function();
logic();
printf("\n You won in %d guesses ",guesses) ;guesses = 0;
again();
return 0;
}
