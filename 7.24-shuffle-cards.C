/* Card dealer */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int [][13]);
void deal(const int [][13], const char *[], const char *[], const int);
/* Dealing should not affect the order or make up of the deck*/

main(){
	char *suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"}; /* points to memory location of string*/
	char *face[13] = {"Ace", "Two", "Three", "Four", "Five",
					  "Six", "Seven", "Eight", "Nine", "Ten",
					  "Jack", "Queen", "King"};
	int deck[4][13] = {0}; /* None of the deck is filled */

	srand(time(NULL));

	shuffle(deck);
	deal(deck, face, suit, 5);

	return 0;
}

void shuffle(int wDeck[][13]){
	int card, row, column;

	for (card = 1; card <= 52; card++){ /* picks at random the suit (row) and value (column) */
		row = rand() % 4;				/* of all 52 cards */
		column = rand() % 13;

		while (wDeck[row][column] != 0) { /* Card has already been chosen */
			row = rand() % 4;
			column = rand() % 13;
		}

		wDeck[row][column] = card;
	}
}

void deal(const int wDeck[][13], const char *wFace[], const char *wSuit[], const int numCards){
	int card, row, column;

	for (card = 1; card <= numCards; card++){

		for (row = 0; row <= 3; row++){

			for (column = 0; column <= 12; column++){

				if (wDeck[row][column] == card){
					printf("%5s of %-8s%c\n", 
						   wFace[column], wSuit[row],
						   card % 2 == 0 ? '\n' : '\t');
				}

			}
		}
	}
}