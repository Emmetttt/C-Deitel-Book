#include <stdio.h>
#include <math.h>

/* Factorial*/
int factorial(int number);

main()
{
	int number, prec, count = 2;
	float e = 2, ex, x;

	/* Standard factorial */
	printf("Input number to find the factorial: ");
	scanf("%d", &number);
	printf("%d\n", factorial(number));

	/* estimating e */
	printf("Input to what precision e shall be estimated to: ");
	scanf("%d", &prec);

	while (prec != 1){
		e += (float) 1 / factorial(prec);
		prec -= 1;
	}

	printf("e can be approximated to %.10f\n", e);
	printf("(true number is 2.71828182845904523536028747135266249)\n");

	/* estimating e^x */
	printf("Input value of x to find the quantity e^x: \n");
	scanf("%f", &x);
	ex = 1 + x;

	while (count <= 10){
		ex +=  (float) pow(x,count) / factorial(count);
		count++;
	}

	printf("e^%f can be approximated to %.2f\n", x, ex);
	return 0;
}


int factorial(int number)
{
	float f = 1;

	while (number != 1){
		f *= number;
		number -= 1;
	}

	return f;
}