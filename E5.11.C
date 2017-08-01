#include <stdio.h>
#include <math.h>

/*  Rounder */

double roundToInteger(double);
double roundToTenths(double);
double roundToHundredths(double);
double roundToThousandths(double);

main(){
	double x, y, z, w;

	printf("Input numbers to round to nearest integer (-1 to end): ");
	scanf("%lf", &x);
	printf("%f rounds to %0.f\n", x, roundToInteger(x));

	printf("Input numbers to round to nearest tenth (-1 to end): ");
	scanf("%lf", &x);
	printf("%f rounds to %0.1f\n", x, roundToTenths(x));

	printf("Input numbers to round to nearest hundreth (-1 to end): ");
	scanf("%lf", &x);
	printf("%f rounds to %0.2f\n", x, roundToHundredths(x));

	printf("Input numbers to round to nearest thousandth (-1 to end): ");
	scanf("%lf", &x);
	printf("%f rounds to %0.3f\n", x, roundToThousandths(x));

	return 0;
}

double roundToInteger(double number){
	return floor(number + .5);
}

double roundToTenths(double number){
	return floor(number * 10 + .5) / 10;
}

double roundToHundredths(double number){
	return floor(number * 100 + .5) / 100;
}

double roundToThousandths(double number){
	return floor(number * 1000 + .5) / 1000;
}