#include <stdio.h>
#include <math.h>

/* time taken for 1,000,000 loops */

main()
{
	int count = 0;
	
	while (count < 9000000){
		if (count % 1000000 == 0){
			printf("%d\n", count);
		}
		count++;
	}
}	