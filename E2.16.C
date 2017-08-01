#include <stdio.h>

main()
{
	int a, b;

	printf("Enter two numbers\n");
	scanf("%d %d", &a, &b);

	printf("The sum of %d and %d is %d\n", a, b, a+b);
	printf("The product of %d and %d is %d\n", a, b, a*b);
	printf("The difference of %d and %d is %d\n", a, b, a-b);
	printf("The quotient of %d and %d is %d\n", a, b, a/b);
	printf("The modulus of %d and %d is %d\n", a, b, a%b);

	return 0;
}