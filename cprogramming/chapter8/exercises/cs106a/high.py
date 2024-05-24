import random


def main():
    print("Welcome to the High-Low Game!")
    print('--------------------------------')
    NUM_ROUNDS = 5
    user_number = random.randint(1,100)
    computer_number = random.randint(1,100)
    print("the computer number ", computer_number)
    print("Your number is " , user_number)
    choice = input("Do you think your number is higher or lower than the computer's?: ")
    if  (choice == 'higher') and (user_number > computer_number):

        print("higher")

    if ( choice == 'lower' ) and (user_number < computer_number) :

        print("you win")
    else :
        print("computer wins")
	

if __name__ == "__main__":
    main()
