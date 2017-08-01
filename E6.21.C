#include <stdio.h>

#define CAPACITY 11

int main(){
	int input, smoke = 0, nsmoke = 0, yn;
	int seats[CAPACITY] = {0};

	printf("Please type 1 for 'smoking'\n");
	printf("Please type 2 for 'nonsmoking'\n");
	scanf("%d", &input);

	if (input == 1 && smoke != 5){
		smoke++;
		seats[5+smoke] = 1;
		printf("Boarding Pass\n");
		printf("Seat number %d\n", 5+smoke);
		printf("Smoking allowed\n");
	}
	if (input == 2 && nsmoke != 5){
		nsmoke++;
		seats[nsmoke] = 1;
		printf("Boarding Pass\n");
		printf("Seat number %d\n", nsmoke);
		printf("Smoking not allowed\n");

	}
}