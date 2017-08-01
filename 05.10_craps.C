#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Rules for craps

- Roll two dices
- If sum is 7 or 11, player wins
- If sum is 2, 3 or 12, player loses
- If sum is 4, 5, 6, 8, 9 or 10 on the first throw, player must roll again
  with the score adding to the previous */

int rollDice(void);

int playerRoll(void);

main()
{
	int score, gameStatus, myPoint;

	srand(time(NULL));
	score = playerRoll();

	switch(score){
		case 7: case 11:
			gameStatus = 1;
			break;

		case 2: case 3: case 12:
			gameStatus = 2;
			break;

		default:
			gameStatus = 0;
			myPoint = score;
			printf("Point is %d\n", myPoint);
			break;
	}

	/* Run game */
	while (gameStatus == 0){ /* Keep rolling */
		score = playerRoll();
		if (score == myPoint)
			gameStatus = 1; /* Win */
		else
			if (score == 7)
				gameStatus = 2; /* Loss */
	}

	/* Check final state */
	if (gameStatus == 1)
		printf("Player Wins\n");
	else
		printf("Player Loses\n");

	return 0;
}



int rollDice(){
	int dice;
	dice = 1 + (rand()%6);
	return dice;
}

int playerRoll(){
	int d1, d2;
	d1 = rollDice();
	d2 = rollDice();
	printf("Player rolls %d + %d = %d\n", d1, d2, d1+d2);
	return d1+d2;
}