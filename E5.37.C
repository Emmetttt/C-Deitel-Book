#include <stdio.h>
#include <math.h>
#include <time.h>
/* Recursion for power */

double recurpower(double, double);
double looppower(double, double);

main(){
	double base, exponent, recur, loop;

	printf("Enter a base and exponent to find base^exponent: ");
	scanf("%lf %lf", &base, &exponent);

    clock_t begin = clock();
    recur = recurpower(base, exponent);
    clock_t end = clock();
    double timerecur = (double)(end - begin) / CLOCKS_PER_SEC;

    clock_t begin2 = clock();
    loop = looppower(base, exponent);
    clock_t end2 = clock();
    double timeloop = (double)(end2 - begin2) / CLOCKS_PER_SEC;

	printf("Using recursive methods, %.2f^%f = %.0f.\nThis was calculated in %.15f seconds.\n\n", base, exponent, recur, timerecur);
	printf("Using itterative methods, %.2f^%f = %.0f.\nThis was calculated in %.15f seconds", base, exponent, loop, timeloop);

	return 0;
}

double recurpower(double base, double exponent){
	if (exponent == 0)
		return 1;
	else
		return base * recurpower(base, exponent - 1);
}

double looppower(double base, double exponent){
	double result = 1;
	while (exponent > 0){
		result *= base;
		exponent--;
	}
	return result;
}