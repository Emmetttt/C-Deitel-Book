#include <stdio.h>

main()
{
	int int1, int2;

	printf("Determines if first integer is a multiple of the second integer. Input integers: \n");
	scanf("%d %d", &int1, &int2);

	if (int1%int2 == 0)
		printf("%d is a multiple of %d", int1, int2);
	else
		printf("%d is a multiple of %d", int1, int2);
	return 0;
}