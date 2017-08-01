/* sizeof operator */
#include <stdio.h>

main(){
	printf("sizeof(char) = %d\n"
		"sizeof(short) = %d\n"
		"sizeof(int) = %d\n"
		"sizeof(long) = %d\n"
		"sizeof(float) = %d\n"
		"sizeof(double) = %d\n"
		"sizeof(long double) = %d\n",
		sizeof(char), sizeof(short), sizeof(int),
		sizeof(long), sizeof(float), sizeof(double),
		sizeof(long double) );

	return 0;
}