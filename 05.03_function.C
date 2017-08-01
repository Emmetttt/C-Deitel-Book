#include <stdio.h>

/* function */
int square(int); /* prototype */

main()
{
	int x;

	for (x = 1; x <= 10; x++)
		printf("%d\n", square(x));

	return 0;
}

/* Function definition */
int square(int y){
	return y*y;
}