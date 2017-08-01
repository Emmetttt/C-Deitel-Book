#include <stdio.h>
#include <math.h>

/* determines if x is a multiple of y */

int mult(int, int);

main(){
	int x, y;

	printf("Input two numbers to find if x is a multiple of y (-1 to end): \n");
	scanf("%d %d", &x, &y);

	while (x != -1){
		if (mult(x, y) == 1)
			printf("%d is a multiple of %d.\n", x, y);
		if (mult(x, y) == 0)
			printf("%d is not a multiple of %d.\n", x, y);

		printf("Input two numbers to find if x is a multiple of y (-1 to end): \n");
		scanf("%d %d", &x, &y);
	}

	return 0;
}

int mult(int a, int b){
	if (b % a == 0)
		return 1;
	if (b % a != 0)
		return 0;
}