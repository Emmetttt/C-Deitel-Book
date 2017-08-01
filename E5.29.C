#include <stdio.h>
#include <math.h>

/* Finds all primes under 1000 */

int gcd(int, int);

main(){
	int a, b;

	printf("Enter two numbers to find the greatest common divisors: ");
	scanf("%d %d", &a, &b);
	printf("%d is the greatest common divisor.\n", gcd(a, b));
	return 0;
}

int gcd(int a, int b){
	int i = a / 2;

	for ( i; i >= 2; i--){
		if ( a % i == 0 && b % i == 0)
			return i;
	}

	return 0;
}