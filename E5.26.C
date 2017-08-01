#include <stdio.h>
#include <math.h>

/* Finds all perfect numbers under 1000 */

int perfectNumber(int);
void printFactors(int);

main(){
	int i;

	for (i = 2; i <= 1000; i++){
		if (perfectNumber(i) == 1){
			printf("\n%d is a perfect number. Its factors are: ", i);
			printFactors(i);
		}
	}

	return 0;
}

int perfectNumber(int number){
	int i, total = 1;

	for (i = 2; i < number; i++){
		if (number % i == 0)
			total += i;
	}

	if (total == number)
		return 1;
	else
		return 0;
}

void printFactors(int number){
	int i;

	for (i = 2; i < number; i++){
		if (number % i == 0)
			printf("%d ", i);
	}

	return;
}