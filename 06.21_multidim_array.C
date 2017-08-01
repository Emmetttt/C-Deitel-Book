/* Multidimensional array */
#include <stdio.h>

void printArray(int [][3]);

main(){
	int array1[2][3] = { {1, 2, 3}, {4, 5, 6} },
	    array2[2][3] = { 1, 2, 3, 4, 5 },
	    array3[2][3] = { {1, 2}, {4} };

	printf("Array 1:\n");
	printArray(array1);

	printf("Array 2:\n");
	printArray(array2);

	printf("Array 3:\n");
	printArray(array3);

	return 0;
}

void printArray(int a[][3]){
	int i, j;

	for (i = 0; i <= 1; i++){

		for (j = 0; j <= 2; j++){
			printf("%d ", a[i][j]);
		}

		printf("\n");
	}
}