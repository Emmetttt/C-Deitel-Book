#include <stdio.h>

/* Selection SORT 

- arr: Array to be sorted, length LENGTH

- Search array for smallest number
- Swap the smallest number with the first element
- repeat recursively
*/

#define LENGTH 20

void printArray(int []);
void selectionSort(int [], int);

int main(){
	int arr[LENGTH] = {0};
	int i;
	unsigned seed;

	srand(seed);

	/* Random numbers in the array to sort */
	for (i = 0; i <= LENGTH - 1; i++)
		arr[i] = rand()%100;

	printArray(arr);
	selectionSort(arr, 0);

	return 0;
}

void selectionSort(int a[], int start){
	int i, lowest = a[start], element = start, temp;

	/* Loop through to find the lowest integer */
	for (i = start; i <= LENGTH - 1; i++){
		if (a[i] < lowest){
			lowest = a[i];
			element = i;
		}
	}

	/* Swap lowest with first element */
	temp = a[start];
	a[start] = a[element];
	a[element] = temp;

	printArray(a);

	/* Recursion */
	if (start < (LENGTH - 1))
		selectionSort(a, ++start);
}

void printArray(int array[LENGTH]){
	int i;

	printf("\n\n");
	for (i = 0; i <= LENGTH - 1; i++)
		printf("%d  ", array[i]);
}