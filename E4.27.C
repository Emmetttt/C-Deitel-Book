#include <stdio.h>
#include <math.h>

/* Pythag triplets */

main()
{
	int no = 0, side1, side2, hyp;

	for (side1 = 1; side1 < 500; side1++){
		for (side2 = side1 + 1; side2 < 500; side2++){
			for (hyp = side2 + 1; hyp < 500; hyp++){
				if ((pow(side1, 2) + pow(side2, 2)) == hyp)
					no++;
			}
		}
	}

	printf("There are %d pythagorean triplets between 1 and 500.\n", no);

	return 0;
}