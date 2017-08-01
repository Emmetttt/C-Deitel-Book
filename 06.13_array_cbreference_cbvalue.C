
/* Passing arrays and individual array elements to a function */
#include <stdio.h>
#define SIZE 5

void modifyArray(int [], int);
void modifyElement(int);

main(){
	int a[SIZE] = {443, 525, 324, 12, 2};
	int i;

	printf("Effects of passing entire array call"
		" by reference.\n\nThe values of the "
		"original array are:\n");

	for (i = 0; i <= SIZE - 1; i++)
		printf("%5d", a[i]);

	printf("\n");

	modifyArray(a, SIZE); /* Call by reference */
	printf("The values of the modified array are:\n");

	for (i = 0; i <= SIZE - 1; i++)
		printf("%6d", a[i]);

	printf("\n\n\nEffects of passing array element call "
		"by value:\n\nThe value of a[3] is %d\n", a[3]);

	modifyElement(a[3]);
	printf("The value of a[3] is %d\n", a[3]);

	return 0;
}

void modifyArray(int b[], int size){
	int j;

	for (j = 0; j <= size - 1; j++)
		b[j] *= 2;
}

void modifyElement(int e){
	printf("Value in modifyElement is %d\n", e *= 2);
}