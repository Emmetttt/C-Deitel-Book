/* Struct basics */
#include <stdio.h>

struct card{		/*card is the structure tag,*/
	char *face;
	char *suit;	
};

main(){
	struct card a;
	struct card *aPtr;

	a.face = "Ace";
	a.suit = "Spades";
	aPtr = &a;
	printf("%s%s%s\n%s%s%s\n%s%s%s\n",
		   a.face, " of ", a.suit,
		   aPtr->face, " of ", aPtr->suit,
		   (*aPtr).face, " of ", (*aPtr).suit);

	return 0;
}