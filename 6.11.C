/* static arrays are initialised to zero */
#include <stdio.h>

void staticArrayInit(void);
void automaticArrayInit(void);

main(){

	printf("First call to each function:\n");
	staticArrayInit();
	automaticArrayInit();
	printf("\n\nSecond call to each function\n");
	staticArrayInit();
	automaticArrayInit();

	return 0;
}

void staticArrayInit(void){
	static int a[3];
	int i;

	printf("\nValues upon entering StaticArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array[%d] = %d\n", i, a[i]);

	printf("\nValues upon exiting staticArayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array[%d] = %d\n", i, a[i] += 5);
}

void automaticArrayInit(void){
	int a[3] = {1, 2, 3}, i;

	printf("\nValues upon entering automaticArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array[%d] = %d\n", i, a[i]);

	printf("\nValues upon exiting automaticArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array[%d] = %d\n", i, a[i] += 5);

}