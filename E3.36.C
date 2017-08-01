#include <stdio.h>
#include <math.h>

/* Converts a binary to an integer */

main()
{
	int binary, count = 0, remain, total = 0;

	printf("Input a binary integer to find the base 10 equivalent: ");
	scanf("%d", &binary);

	while (binary >= 1){
		remain = binary%10;
		total += remain * pow(2, count);
		binary /= 10;
		count++;
	}

	printf("%d\n", total);
}	