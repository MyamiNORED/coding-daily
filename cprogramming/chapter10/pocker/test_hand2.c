#include <stdio.h>
#include <string.h>
#include <ctype.h> // For toupper

int check_duplicate(char hand[], char in_hand[][3], int size);
int read_hand(char hand[3], const char rank_code[], int NUM_RANKS, const char suit_code[], int S);

int main() {
    char in_hand[5][3]; // 2D array to store multiple hands
    int num_hands = 0; // Counter for the number of hands entered
    char hand[3]; // Array to store the hand input
    const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
    const char suit_code[] = {'C', 'D', 'H', 'S'};
    
    for (int i = 0; i < 3; i++) {
        printf("\nEnter hand: ");
        scanf("%2s", hand); // Read two characters into the hand array
        hand[2] = '\0'; // Null-terminate the string

        // Print the entered hand for debugging
        printf("Entered hand: %s\n", hand);
 
        int result = read_hand(hand, rank_code, 13, suit_code, 4);
        while  ((result != 1) || (check_duplicate(hand, in_hand, num_hands) != 0)) {
		if (result == 1)  {printf("\nDuplicate\n");}
		else  { printf("bad card \n");}
		printf("\n enter hand : ");	
        	scanf("%2s", hand); 
        	hand[2] = '\0'; 
		
        	int result = read_hand(hand, rank_code, 13, suit_code, 4);
	}
	
        if ((result == 1) && (check_duplicate(hand, in_hand, num_hands) == 0)) {
            strcpy(in_hand[num_hands], hand); // Copy hand to in_hand array
            num_hands++;
        }
    }

    return 0;
}

int check_duplicate(char hand[], char in_hand[][3], int size) {
    for (int i = 0; i < size; i++) {
        if (strcmp(in_hand[i], hand) == 0) {
            return 1;
        }
    }
    return 0;
}

int read_hand(char hand[3], const char rank_code[], int NUM_RANKS, const char suit_code[], int S) {
    int e = 0;
    int f = 0;
    
    // Convert input to uppercase
    char rank = toupper(hand[0]);
    char suit = toupper(hand[1]);

    for (int i = 0; i < NUM_RANKS; i++) {
        if (rank == rank_code[i]) {
            e = e + 1;
            break;
        }
    }

    for (int i = 0; i < S; i++) {
        if (suit == suit_code[i]) {
            f = f + 1;
            break;
        }
    }

    // Print debugging information
    printf("Rank check: %c, Suit check: %c\n", rank, suit);
    printf("f value: %d\n", f);
    printf("e value: %d\n", e);

    return (f + e >= 2) ? 1 : 0;
}

