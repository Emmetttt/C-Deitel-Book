#include <stdio.h>
#include <math.h>
/* Coin flips */

void response(int);

main(){
	int num1, num2, product, answer;
	char x;

	srand(time(NULL));

	printf("This program is for practicing multiplication.\nEnter your answer, or -1 to quit.");
	response(1);
	num1 = rand()%10;
	num2 = rand()%10;
	product = num1 * num2;
	printf("What is %d * %d? ", num1, num2);
	scanf("%d", &answer);

	while (answer != -1){
		if (answer == product)
			response(0);
		else
			response(1);

		num1 = rand()%10;
		num2 = rand()%10;
		product = num1 * num2;
		printf("What is %d * %d? ", num1, num2);
		scanf("%d", &answer);
	}

}

void response(int input){
	int num = rand()%4;
	if (input == 0){
		switch(num){
			case 0:
				printf("\nVery good!\n");
				break;

			case 1:
				printf("\nExcellent!\n");
				break;

			case 2:
				printf("\nNice work!\n");
				break;

			case 3:
				printf("\nKeep up the good work!\n");
				break;
		}
	}
	else if (input == 1){
		switch(num){
			case 0:
				printf("\nNo. Please try again.\n");
				break;

			case 1:
				printf("\nWrong. Try once more.\n");
				break;

			case 2:
				printf("\nDon't give up!\n");
				break;

			case 3:
				printf("\nNo. Keep trying.\n");
				break;
		}
	}
	return;
}