#include <stdio.h>
int check_duplicate(char hand[],char in_hand[],int size);
int read_hand(char hand[3], const char rank_code[], int NUM_RANKS, const char suit_code[], int S);

int main() {
    char in_hand[5];
    char hand[3]; // Array to store the hand input
    const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
    const char suit_code[] = {'C', 'D', 'H', 'S'};
    
    for (int i = 0; i < 3; i++) {
        printf("\nEnter hand: ");
        scanf("%2s", hand); // Read two characters into the hand array
	
        // Print the entered hand for debugging
        printf("Entered hand: %s\n", hand);
 
        int result = read_hand(hand, rank_code, 13, suit_code, 4);
	if ( (result >= 2) && (check_duplicate(hand,in_hand,5)) == 0)
	{
		in_hand[i] = hand;
	}
    }
    
    return 0;
}


int check_duplicate(char hand[],char in_hand[],int size)
	{	
	int f = 0 ;
	for (int i = 0 ; i < size; i++) {
	if (in_hand[i] == hand) { f = f + 1;

	}}
	(f > 0 ) ? 1 :0 ;
	}	



int read_hand(char hand[3], const char rank_code[], int NUM_RANKS, const char suit_code[], int S)
{   int e = 0;
    int f = 0;
    for (int i = 0; i < NUM_RANKS; i++) {
        if (hand[0] == rank_code[i]) {
            e = e + 1;
            break;
        }
    }

    for (int i = 0; i < S; i++) {
        if (hand[1] == suit_code[i]) {
            f = f + 1;
            break;
        }
    }

    // Print debugging information
    printf("Rank check: %c, Suit check: %c\n", hand[0], hand[1]);
    printf("f value: %d\n", f);
    printf("e value: %d\n", e);

    return (f+e >= 2) ? 1 : 0;
}

