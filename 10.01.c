/* Struct basics */
#include <stdio.h>

struct card{		/*card is the structure tag,*/
	char *face;
	char *suit;	
};

main(){
	struct card deck[52], *aPtr; /* declares a to be a variable of type struct card
									   declares deck to be an array with 52 elements,
									   declares aPtr to be a pointer to struct card. */
	struct card a = {"Three", "Hearts"}; /* Initialised a card with face = "Three" and
										   suit = "Hearts*/
	aPtr = &a;					 /* aPtr set to the adress of a */


	printf("%s\n", a.suit); /* Print the suit */
	printf("%s\n", aPtr->suit); /* equivalent to (*aPtr).suit*/

	return 0;
}

/* Only operators are:
	- Assign structure variables
	- Taking the address (&) of a struct variable
	- Accessing the members of a structure variable
	- Using sizeof operator to determine size 


struct card{
	char *face;
	char *suit;
} a, deck[52], *cPtr; Declares the struct card declaration into the struct definition*/
