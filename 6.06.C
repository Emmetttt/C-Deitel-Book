#include <stdio.h>
#define SIZE 12

main(){
	int a[SIZE] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45}, i, total = 0;

	for (int i = 0; i <= SIZE - 1; i++)
	{
		total += a[i];
	}

	printf("Total of array element values is %d\n", total);

	return 0;
}
