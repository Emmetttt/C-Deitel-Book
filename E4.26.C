#include <stdio.h>

/* Finds approximating pi */

main()
{
	double pi = 4;
	int count, max = 20000, denom = 3;
	printf("pi\t  #terms\n");

	for ( count = 1; count < max; count+=1){
		if (count % 2 == 0)
			pi += (float) 4 / denom;
		else
			pi -= (float) 4 / denom;
		printf("%.5f\t  %d\n", pi, count);
		denom += 2;
	}

	return 0;
}