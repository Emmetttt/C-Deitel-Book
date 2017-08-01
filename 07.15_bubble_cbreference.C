#include <stdio.h>
#define SIZE 10

void bubbleSort(int *, int);

main(){
	int i, a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

	printf("Data items in original order\n");

	for (i = 0; i <= SIZE - 1; i++){
		printf("%4d ", a[i]);
	}

	bubbleSort(a, SIZE);

	printf("Data items in ascending order\n");

	for (i = 0; i <= SIZE - 1; i++){
		printf("%4d ", a[i]);
	}

	printf("\n");
	return 0;
}

void bubbleSort(int *array, int size){
	int pass, j;
	void swap(int *, int *); /* define function in a function */

	for (pass = 1; pass <= size - 1; pass++){

		for (j = 0; j <= size - 2; j++){

			if (array[j] > array[j + 1]){
				swap(&array[j], &array[j + 1]);
			}
		}
	}
}

void swap(int *element1Ptr, int *element2Ptr){
	int temp;

	temp = *element1Ptr;
	printf("\n%p\n", temp);
	*element1Ptr = *element2Ptr;
	*element2Ptr = temp;
}