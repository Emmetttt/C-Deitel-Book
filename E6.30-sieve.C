#include <stdio.h>

/* - Create array with all elements init to 1
   - Primes stay as 1
   - All multiples of a subscript 1 is set to 0 */

#define SIZE 10000

int main(){
	int primes[SIZE] = {0};
	int i, j, k;

	for (i = 2; i <= SIZE - 1; i++)
		primes[i] = 1;

	for (i = 2; i <= SIZE - 1; i++){
		if (primes[i] == 1){
			printf("%d ", i);
			j = 2;
			while ((i * j) < (SIZE - 1)){
				primes[i*j] = 0;
				j++;
			}
		}
	}

	printf("END\n");

}