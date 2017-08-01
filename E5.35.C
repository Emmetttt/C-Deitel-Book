#include <stdio.h>
#include <math.h>
/* Guess the number */

main(){
	int number, guess, count = 15;
	char playAgain;

	srand(time(NULL));
	number = 1 + rand()%1000;

	printf("Guess the number between 1 and 1000. You have 10 turns left.\n");
	scanf("%d", &guess);

	while (count > 0){
		if (guess == number){
			printf("Excellent! You guessed the number!\n");
			printf("Would you like to play again? (y or n)\n");
			scanf("%c", &playAgain);

			if (playAgain == "y" || playAgain == "Y"){
				number = 1 + rand()%1000;
				count = 15;
				printf("Guess the number between 1 and 1000. You have 10 turns left.\n");
				scanf("%d", &guess);
			}

			else
				return 0;
			/* Logic for playing again*/
		}

		if (guess > number){
			printf("Too high. Try again.\n");
		}

		if (guess < number){
			printf("Too low. Try again.\n");
		}

		count--;
		printf("You have %d turns left.\n", count);
		scanf("%d", &guess);
	}

	printf("Unlucky, the answer was %d.\n", number);
	return 0;
}