/* Quicksort UNFINISHED       */
#include <stdio.h>
#define SIZE 10

void swap(int *, int *);
void Quicksort(int [], int, int);

main(){
	int arr[SIZE] = {37, 2, 6, 4, 89, 8, 10, 12, 68, 45};

}

void Quicksort(int arr[], int start, int end){
	int i, count = 0, pos;

	for (i = SIZE - 1; i > 0; i--){
		if (arr[0] > arr[i]){
			swap(&arr[0], &arr[i]);
			pos = i;
			break;
		}
	}

	for (i = count; i < pos; i++){

	}

	count++;
}

void Partition(int arr[]){

}


void swap(int *aPtr, int *bPtr){
	int temp;

	temp = *aPtr;
	*aPtr = *bPtr;
	*bPtr = temp;
}