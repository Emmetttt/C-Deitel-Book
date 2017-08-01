/* Structures for shuffling and dealing cards */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct card {
	char *face;
	char *suit;
};

typedef struct card Card; /* Defines Card as a synonym for struct card
							 A synonym, quicker definition*/

void fillDeck(Card *, char *[], char *[]);
void shuffle(Card *);
void deal(Card *);

main(){
	Card deck[52]; /* An array of 52 objects, each with a face and a suit */
	char face[] = {"Ace", "Deuce", "Three", "Four", "Five",
					"Six", "Seven", "Eight", "Nine", "Ten",
					"Jack", "Queen", "King"};
	char suit[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

	srand(time(NULL));

	fillDeck(deck, face, suit);
	shuffle(deck);
	shuffle(deck);
	deal(deck);

	return 0;
}

void fillDeck(Card *wDeck, char *wFace[], char *wSuit[]){
	int i;

	for (i = 0; i < 52; i++){
		wDeck[i].face = wFace[i % 13];
		wDeck[i].suit = wSuit[i / 13];
	}
}

void shuffle(Card *wDeck){
	int i, j;
	Card temp;

	for (i = 0; i < 52; i++){
		j = rand() % 52;
		temp = wDeck[i]; /* Goes through the ordered deck, places temp as a card */
		wDeck[i] = wDeck[j]; /* Swaps the ordered card with a random card in the deck */
		wDeck[j] = temp;
	}
}

void deal(Card *wDeck){
	int i;

	for (i = 0; i < 52; i++){
		printf("%5s of %-8s%c", wDeck[i].face, wDeck[i].suit,
			   (i+1) % 2 ? '\t' : '\n'); /* New line every two cards dealt */
	}
}