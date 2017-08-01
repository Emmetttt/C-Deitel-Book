/* Bubble sorting algorithm */
#include <stdio.h>
#define SIZE 10

main(){
	int a[SIZE] = {2, 6, 4, 8, 12, 89, 68, 45, 37};
	int i, pass, hold;

	printf("Data items in original order\n");

	for (i = 0; i <= SIZE - 1; i++)
		printf("%4d", a[i]);

	for (pass = 1; pass <= SIZE - 1; pass++){	/* Passes through all elements */

		for (i = 0; i <= SIZE - 2; i++){		/* Compares to all but the final element */ 

			if (a[i] > a[i + 1]){
				hold = a[i];					/* Temporarily store a[i] */
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}
		}
	}

	printf("\nData items in ascending order\n");

	for (i = 0; i <= SIZE - 1; i++)
		printf("%4d", a[i]);

	printf("\n");

	return 0;
}
