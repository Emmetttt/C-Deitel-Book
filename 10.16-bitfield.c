/* Using bitfield */
#include <stdio.h>

struct bitCard {
	unsigned face : 4; /* 2^4 = 16, only need 13 for all faces */
	unsigned suit : 2; /* 2^2 = 4, only need 4 for all suits*/
	unsigned color : 1; /* 2^1 = 2, red or black*/
};

typedef struct bitCard Card; /* Refer to Card instead of struct bitCard */

void fillDeck(Card *);
void deal(Card *);

main(){
	Card deck[52];

	fillDeck(deck);
	deal(deck);

	return 0;
}

void fillDeck(Card *wDeck){
	int i;

	for (i = 0; i < 52; i++){
		wDeck[i].face = i % 13;
		wDeck[i].suit = i / 13;
		wDeck[i].color = i / 26;
	}
}

void deal(Card *wDeck){
	int k1, k2;

	for (k1 = 0, k2 = k1 + 26; k1 <= 25; k1++, k2++){
		printf("Card:%3d  Suit:%2d  Color:%2d   \n",
			   wDeck[k1].face, wDeck[k1].suit, wDeck[k1].color);
		printf("Card:%3d  Suit:%2d  Color:%2d   \n",
			   wDeck[k2].face, wDeck[k2].suit, wDeck[k2].color);
	}
}