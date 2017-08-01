#include <stdio.h>

/* grades using switch */

main()
{
	int x, y;;

	for (x = 1; x <= 10; x++){

		if (x == 5)
			break;

		printf("%d\n", x);
	}

	printf("\nBroke out of loop at x == %d\n", x);

	for (y = 1; y <= 10; y++){

		if (y == 5)
			continue;

		printf("%d\n", y);
	}

	printf("\nUsed continue to skip printing y == 5\n");
	return 0;
}