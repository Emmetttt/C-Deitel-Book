/* sizeof operator */
#include <stdio.h>

main(){
	float array[20];

	printf("The number of bytes in the array is %d\n", sizeof(array));
	printf("The number of elements in the array is %d\n", sizeof(array)/sizeof(float));

	return 0;
}