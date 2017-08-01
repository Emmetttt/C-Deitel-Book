#include <stdio.h>
#include <math.h>

/* Compound interest
- $1000.00 at 5% for 10 years
- a = p(1+r)^n */

main()
{
	double amount, p = 1000.00, r = 0.05;
	int year;

	for (year = 1; year <= 10; year++)
		amount = p * pow((1 + r), year);

	printf("After 10 years, the amount is %21.2f\n", amount);
	return 0;
}