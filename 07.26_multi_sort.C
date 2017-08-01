/* Multipurpose sorting program */
/* * is the deference parameter

   a pointer to a variable is dereferenced to access the value of the variable
   a pointer to a function i dereferenced to use the function*/
#include <stdio.h>
#define SIZE 10

void bubble(int *, const int, int (*)(int, int));
/* int (*)(int, int) is a pointer to a function that receives
   two integer parameters and returns an integer result*/
int ascending(const int, const int);
int descending(const int, const int);

main(){
	int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
	int counter, order;

	printf("Enter 1 to sort in ascending order,\n");
	printf("Enter 2 to sort in descending order: ");
	scanf("%d", &order);

	printf("\nData items in original order\n");

	for (counter = 0; counter <= SIZE - 1; counter++)
		printf("%4d", a[counter]);

	if (order == 1){
		bubble(a, SIZE, ascending);
		printf("\nData items in ascending order\n");
	}
	else {
		bubble(a, SIZE, descending);
		printf("\nData items in descending oder\n");
	}

	for (counter = 0; counter <= SIZE - 1; counter++)
		printf("%4d", a[counter]);

	printf("\n");

	return 0;
}

void bubble(int *work, const int size, int (*compare)(int, int)){
	int pass, count;
	void swap(int *, int *);

	for (pass = 0; pass <= size - 1; pass++){

		for (count = 0; count <= size - 2; count++){

			if ((*compare)(work[count], work[count + 1])){
				/* if bubble(a, SIZE, ascending), this is evaluated
				   as (*ascending)(work[count], work[count + 1]) 
				   so therefore, when dereferenced, will be evaluated
				   to either true or false. Compare is not an actual
				   function, but just points to either ascending or 
				   descending depending on what is passed through. */
				swap(&work[count], &work[count+1]);
			}
		}
	}
}

void swap(int *element1Ptr, int *element2Ptr){
	int temp;

	temp = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = temp;
}

int ascending(const int a, const int b){
	return b < a;
}

int descending(const int a, const int b){
	return b > a;
}