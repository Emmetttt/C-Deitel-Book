#include <stdio.h>

main()
{
	int integer;

	printf("Determines if an integer is even or odd. Input integer: \n");
	scanf("%d", &integer);

	if (integer%2 == 0)
		printf("Even");
	else
		printf("Odd");
	return 0;
}