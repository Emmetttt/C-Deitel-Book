#include <stdio.h>
#include <math.h>

/* Finds all primes under 1000 */

int primes(int);

main(){
	int i;

	for (i = 2; i <= 1000; i++){
		if (primes(i) == 1){
			printf("%d is a prime number.\n", i);
		}
	}

	return 0;
}

int primes(int n){
	int i;

	for (i = 2; i <= ceil(pow(n, 0.5)); i++)
		if (n % i == 0)
			return 0;

	return 1;
}