#include <stdio.h>
#include <math.h>
/* Coin flips */


int flip();

main(){
	int i, htotal = 0, ttotal = 0, coin;

	srand(time(NULL));

	for (i = 1; i <= 10000; i++){
		coin = flip();
		if (coin == 1){
			htotal++;
			printf("HEADS\n");
		}
		else if (coin == 0){
			ttotal++;
			printf("TAILS\n");
		}
	}

	printf("Total Heads: %d\nTotal Tails: %d\n", htotal, ttotal);


}

int flip(){
	int coin = rand() % 2;
	return coin;
}