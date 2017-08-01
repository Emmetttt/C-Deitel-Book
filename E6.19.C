#include <stdio.h>

#define SIZE 13

main(){
	int sum[SIZE] = {0}, die1, die2, sum12, i, j;
	unsigned seed;

	srand(seed);

	for (i = 0; i <= 36000; i++){
		die1 = 1 + rand()%6;
		die2 = 1 + rand()%6;
		sum12 = die1 + die2;
		sum[sum12]++;
	}

	printf("%s\t%s\t\n", "Sum", "Frequency");
	for (j = 2; j <= 12; j++){
		printf("%d\t%d\n", j, sum[j]);
	}

}