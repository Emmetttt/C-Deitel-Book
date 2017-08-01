#include <stdio.h>
#include <math.h>

/*  Rounder */

double rounder(double);

main(){
	double x;

	printf("Input numbers to round (-1 to end): ");
	scanf("%lf", &x);

	while (x != -1){
		printf("%f rounded is %.0f\n", x, rounder(x));
		printf("Input numbers to round (-1 to end): ");
		scanf("%lf", &x);
	}

	return 0;
}

double rounder(double number){
	return floor(number + .5);
}