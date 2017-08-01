#include <stdio.h>
#include <math.h>

/* raise integers to the power of anoter integer */

unsigned long int integerPower(double, int);

main(){
	double base;
	int exponent;

	printf("Input a base and exponent to find the power (-1 to end): \n");
	scanf("%lf %d", &base, &exponent);

	while (base != -1){
		printf("%lf^%d is %lu.\n", base, exponent, integerPower(base, exponent));

		printf("Input a base and exponent to find the power (-1 to end): \n");
		scanf("%lf %d", &base, &exponent);
	}

	return 0;
}

unsigned long int integerPower(double base, int exponent){
	unsigned long int produce = 1;
	int i;
	for (i = 1; i <= exponent; i++){
		produce *= base;
	}

	return produce;
}