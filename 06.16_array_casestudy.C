/* Bubble sorting algorithm */
#include <stdio.h>
#define SIZE 99

void mean(int []);
void median(int []);
void mode(int [], int[]);
void bubbleSort(int []);
void printArray(int []);


main(){
	int frequency[10] = {0},
		response[SIZE] = {3, 5, 7, 8, 5, 3, 2, 1, 5, 6, 
						  4, 5, 6, 4, 2, 1, 8, 9, 7, 6,
						  4, 5, 1, 2, 1, 2, 1, 1, 5, 3,
						  5, 7, 9, 9, 9, 9, 7, 6, 7, 8,
						  3, 5, 7, 8, 5, 3, 2, 1, 5, 6, 
						  4, 5, 6, 4, 2, 1, 8, 9, 7, 6,
						  4, 5, 1, 2, 1, 2, 1, 1, 5, 3,
						  5, 7, 9, 9, 9, 9, 7, 6, 7, 8,
						  4, 5, 1, 2, 1, 2, 1, 1, 5, 3,
						  5, 7, 9, 9, 9, 9, 7, 6, 7};

	mean(response);
	median(response);
	mode(frequency, response);

	return 0;
}

void mean(int answer[]){ /* Sums up all array elements and divides by number of elements */
	int mean = 0, i;

	for (i = 0; i <= SIZE - 1; i++){
		mean += answer[i];
	}

	printf("The mean is the average value of the data\n"
		   "items. The mean is equal to the total of\n"
		   "all the data items divided by the number\n"
		   "of items (%d). The mean value for this\n"
		   "run is: %d / %d = %.4f\n\n",
		   SIZE, mean, SIZE, (float) mean / SIZE);
}



void median(int answer[]){ /* The middle element */
	printf("\n%s\n%s\n%s\n%s", 
		   "********", "Median", "********",
		   "The unsorted array of responses is");
	
	printArray(answer);
	bubbleSort(answer);
	printf("\n\nThe sorted array is");
	printArray(answer);

	printf("\n\nThe median is element %d of \n"
		   "the sorted %d element array.\n"
		   "For this run, the median is %d\n\n",
		   SIZE / 2, SIZE, answer[SIZE / 2]);
}


void printArray(int a[]){
	int j;

	for (j = 0; j <= SIZE; j++){

		if (j % 20 == 0)
			printf("\n");

		printf("%2d", a[j]);
	}
}



void bubbleSort(int a[]){
	int pass, i, hold;

	for (pass = 1; pass <= SIZE - 1; pass++){	/* Passes through all elements */

		for (i = 0; i <= SIZE - 2; i++){		/* Compares to all but the final element */ 

			if (a[i] > a[i + 1]){
				hold = a[i];					/* Temporarily store a[i] */
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}
		}
	}
}


void mode(int freq[], int answer[]){
	int rating, j, h, largest = 0, modeValue = 0;

	printf("\n%s\n%s\n%s\n",
		   "*******", " Mode", "*******");

	for (rating = 1; rating <= 9; rating++)
		freq[rating] = 0;

	for (j = 0; j <= SIZE - 1; j++)
		freq[answer[j]]++;

	printf("%s%11s%19s\n\n",
		   "Response", "Frequency", "Histogram");

	for (rating = 1; rating <= 9; rating++){
		printf("%8d%11d          ", rating, freq[rating]);

		if (freq[rating]> largest){
			largest = freq[rating];
			modeValue = rating;
		}

		for (h = 1; h <= freq[rating]; h++)
			printf("*");

		printf("\n");
	}

	printf("The mode is the most frequent value.\n"
		   "For this run, the mode is %d which "
		   "occured %d times.\n",
		   modeValue, largest);
}







