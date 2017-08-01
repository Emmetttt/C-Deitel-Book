/* Card dealer */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define numCards 5

void shuffle(int [][13]);
void deal(const int [][13], const char *[], const char *[]);
void flush(const int []);
void straight(const int []);
void ofAKind(const int []);
void twoPair(const int []);
/* Dealing should not affect the order or make up of the deck*/

main(){
	char *suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"}; /* points to memory location of string*/
	char *face[13] = {"Ace", "Two", "Three", "Four", "Five",
					  "Six", "Seven", "Eight", "Nine", "Ten",
					  "Jack", "Queen", "King"};
	int deck[4][13] = {0}; /* None of the deck is filled */

	srand(time(NULL));

	shuffle(deck);
	deal(deck, face, suit);

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

void deal(const int wDeck[][13], const char *wFace[], const char *wSuit[]){
	int card, row, column, check, minimum, i;
	int suits[numCards] = {0}, faces[numCards] = {0};

	for (card = 0; card <= numCards; card++){

		for (row = 0; row <= 3; row++){

			for (column = 0; column <= 12; column++){

				if (wDeck[row][column] == card){
					printf("%5s of %-8s\n", wFace[column], wSuit[row]);
					suits[card-1] = row; /* Card counts from 1? */
					faces[card-1] = column;
				}
			}
		}
	}

	/* Determine straight, then flush, then four of a kind, then three of a kind,
	   then two pairs, then a pair. */
	
	flush(suits);
	straight(faces);
	ofAKind(faces);

}

void flush(const int suits[]){
	int check, card;

	/* Flush */
	check = 0; /* Boolean, if 0 then flush is true, else not a flush */
	for (card = 1; card <= numCards - 1; card++){
		if (suits[0] != suits[card]){ /* Not all the same suite */
			check = 1;
		}
	}

	if (check == 0)
		printf("You were dealt a flush\n");
}

void straight(const int faces[]){
	int minimum, check, i, card;
	/* Straight */
	minimum = 12; /* minimum card, will check array for minimum+i for 1<i<4*/
	check = 0; /* Boolean, if 0 then flush is true, else not a flush */
	for (card = 0; card <= numCards; card++)
		if (faces[card] < minimum)
			minimum = faces[card];

	for (i = 1; i <= numCards - 1; i++){ /* loop from minimum+1 to minimum+4 */
		for	(card = 1; card <= numCards - 1; card++)
			if (faces[card] == minimum+i){
				check = 0;
				break; /* Exit loop with straight still possible */
			} else { /* No straight yet */
				check = 1;
			}
		if (check == 1) /* Finish the loop, no straight dealt */
			break;
		}

	if (check == 0){
		printf("You were dealt a straight\n");
	}
}

void ofAKind(const int faces[]){
	int i, j, first = faces[0], count, maximum = 0;

	for (i = 0; i <= numCards; i++){ /* Loop over all cards */
		count = 0;
		for (j = 0; j <= numCards; j++){
			if (faces[i] == faces[j]){
				count++;
			}
		}

		if (count > maximum){
			maximum = count;
		}
	}

	switch(maximum){
		case 2:
			printf("You were dealt a pair\n");
			break;

		case 3:
			printf("You were dealt trips\n");
			break;

		case 4:
			printf("You were dealt quads\n");
	}
}

void twoPair(const int faces[]){
	
}