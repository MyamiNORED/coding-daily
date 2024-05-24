import random


def main():
    print("Welcome to the High-Low Game!")
    print('--------------------------------')
    NUM_ROUNDS = 5
    user_number = 0
    computer_number = 0 
    score = 0 
    while (NUM_ROUNDS > 0 ) :
# Generates a random number from 1 to 100 and stores it in a variable
        user_number = random.randint(1, 100)
        computer_number = random.randint(1,100)
        print("Round ", NUM_ROUNDS)
        print("Your number is ",user_number)
        guess = input("Do you think your number is higher or lower than the computer's?: ")
        while ((guess != "lower") or (guess != "higher")):
            guess = input("Please enter either higher or lower:")
        if ((guess == "lower") and (user_number < computer_number)) or ((guess == "higher") and (user_number >computer_number)):
            print("You were right! The computer's number was ",computer_number)
            score = score + 1 
            print("Your score is now ",score)
            NUM_ROUNDS = NUM_ROUNDS - 1
        else :
            print("Aww, that's incorrect. The computer's number was ",computer_number)
            print("Your score is now ",score)
        
    print("Thanks for playing!")




    
    # TODO: Write your code here!!! :)

if __name__ == "__main__":
    main()
