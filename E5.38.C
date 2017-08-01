#include <stdio.h>
#include <math.h>
#include <time.h>
/* Fib */

main(){
	double fib1 = 0, fib2 = 1;

	printf("%f\n", fib1);
	printf("%f\n", fib2);

	while (fib1 != INFINITY){
		fib1 += fib2;
		printf("%f\n", fib1);
		fib2 += fib1;
		printf("%f\n", fib2);
	}

	return 0;
}