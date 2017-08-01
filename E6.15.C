#include <stdio.h>

#define SIZE 20

main(){
	int array[SIZE] = {0}, numbers[SIZE] = {0};
	int i, input = 0, j, k;

	for (i = 0; i <= SIZE - 1; i++){
		input = 0;
		while (input < 10 || input > 100){
			printf("Enter a number between 10 and 100 into the array: ");
			scanf("%d", &input);
		}
		array[i] = input;
		k = 0; /* boolean for read (1) or not (0) */

		for (j = 0; j <= i; j++){
			if (input == numbers[j])
				k = 1;
		}

		if (k == 0)
			printf("%d is not a duplicate.\n", input);

		numbers[i] = input;
	}

	printf("Enter \n");
}