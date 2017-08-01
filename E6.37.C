#include <stdio.h>
#include <math.h>

/* print array recursively */

void printArray(int [], int);

int main(){
	int random[10] = {0};
	unsigned seed;

	srand(seed);

	for (int i = 0; i <= 9; i++)
		random[i] = rand();

	printArray(random, 9);

	return 0;
}

void printArray(int array[], int len){
	static int i = 0;
	printf("%d ", array[i]);
	i++;

	if (len > 0)
		printArray(array, --len);
}