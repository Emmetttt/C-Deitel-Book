#include <stdio.h>
#include <math.h>

/* time taken for 1,000,000 loops */

main()
{
	int count = 0;
	
	while (count < 100){
		if (count % 10 == 0){
			printf("\n");
		}
		printf("*");
		count++;
	}
}	