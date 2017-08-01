#include <stdio.h>

/* Recursion using fibonacci*/

long fibonacci(long);

main(){
	long i, fib;

	printf("Enter a number to find the fibonacci term: \n");
	scanf("%ld", &i);

	fib = fibonacci(i);
	printf("The fibonacci term is %ld\n", fib);
}

long fibonacci(long number){
	if (number == 1 || number == 0)
		return number;
	else
		return fibonacci(number - 1) + fibonacci(number - 2);
}