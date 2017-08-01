#include <stdio.h>

/* BUCKET SORT 

- arr: Array to be sorted, length LENGTH
- bucket: Double subscripted array with rows from 0 to 9
	   and columns from 0 to n-1.
	   Each row is a bucket

- Loop through arr and place each value in a row
	   97 in row 7, 3 in row 3, 100 in row 0

- Loop through bucket array and copy values back to original
	   new order is 100, 3, 97

- Repeat for tens, hundreds, thousands etc
*/

#define LENGTH 500
#define ROWS 9

void printArray(int []);
void bucketSort(int []);

int main(){
	int arr[LENGTH] = {0};
	int i, test=25, n;
	unsigned seed;

	srand(seed);

	/* Random numbers in the array to sort */
	for (i = 0; i <= LENGTH - 1; i++)
		arr[i] = rand()%100000;

	printArray(arr);

	bucketSort(arr);

	return 0;
}

void bucketSort(int a[]){
	int bucket[ROWS+1][LENGTH] = {0};
	int i, j = 0, count = 0, num, numtocol;
	int changes = 0;
	static int pass = 1;

	pass *= 10;

	printf("\n");
	for (i = 0; i <= LENGTH - 1; i++){
		num = a[i];
		numtocol = ((num%pass)/(pass/10)); /* Get the nth digit*/
		if (numtocol <= ROWS)
			bucket[numtocol][i] = num;
		else
			bucket[0][i] = num;
		changes += numtocol;
	}

	for (i = 0; i <= ROWS; i++){ /* for each bin from 0 to 9 */
		for (j = 0; j <= LENGTH - 1; j++){ /* each bin populated by zeros and numbers */
			if (bucket[i][j] != 0){
				a[count] = bucket[i][j];
				count++;
				bucket[i][j] = 0;
			}
		}
	}

	printArray(a);
	if (changes != 0){
		bucketSort(a);
	}
}

void printArray(int array[LENGTH]){
	int i;

	printf("\n\n");
	for (i = 0; i <= LENGTH - 1; i++)
		printf("%d  ", array[i]);
}