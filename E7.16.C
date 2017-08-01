/* Card dealer */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int [][13]);
void deal(const int [][13], const char *[], const char *[], const int);
/* Dealing should not affect the order or make up of the deck*/

main(){
	int row, column, i = 0;
	char *suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"}; /* points to memory location of string*/
	char *face[13] = {"Ace", "Two", "Three", "Four", "Five",
					  "Six", "Seven", "Eight", "Nine", "Ten",
					  "Jack", "Queen", "King"};
	int deck[4][13] = {0}; /* None of the deck is filled */

	/* Sort the cards */
	for (row = 0; row <= 3; row++){

		for (column = 0; column <= 12; column++){

			deck[row][column] = i;
			i++;

		}
	}

	srand(time(NULL));

	shuffle(deck);
	shuffle(deck);
	shuffle(deck);
	deal(deck, face, suit, 5);

	return 0;
}

void shuffle(int wDeck[][13]){ /* Passes memory location of the wDeck first int */
	int card, randRow, randColumn;
	int row, column;
	void swap(int *, int *);

	for (row = 0; row <= 3; row++){

		for (column = 0; column <= 12; column++){
			randRow = rand() % 4;
			randColumn = rand() % 13;
			swap(&wDeck[row][column], &wDeck[randRow][randColumn]); /* Passes mem locations of each random position */

		}
	}
}

void swap(int *e1Ptr, int *e2Ptr){
	int temp;

	temp = *e1Ptr;
	*e1Ptr = *e2Ptr;
	*e2Ptr = temp;
}

void deal(const int wDeck[][13], const char *wFace[], const char *wSuit[], const int numCards){
	int card, row, column;
	int varBool = 0; /* 0 if not found */

	for (card = 1; card <= numCards; card++){

		varBool = 0;

		for (row = 0; row <= 3; row++){

			for (column = 0; column <= 12; column++){

				if (wDeck[row][column] == card){
					printf("%5s of %-8s%c\n", 
						   wFace[column], wSuit[row],
						   card % 2 == 0 ? '\n' : '\t');
					varBool = 1;
				}

				if (varBool == 1)
					break;

			}


			if (varBool == 1)
				break;

		}
	}
}