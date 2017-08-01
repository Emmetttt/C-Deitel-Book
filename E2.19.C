#include <stdio.h>

main()
{
	int a, b, c;

	printf("Input three different integers: ");
	scanf("%d%d%d", &a, &b, &c);

	printf("Sum is %d\n", a+b+c);
	printf("Average is %d\n", (a+b+c)/3);
	printf("Product is %d\n", a*b*c);

	if (a < b & a < c)
		printf("Smallest is %d\n", a);

	if (b < c & b < a)
		printf("Smallest is %d\n", b);

	if (c < b & c < a)
		printf("Smallest is %d\n", c);

	if (a > b & a > c)
		printf("Largest is %d\n", a);

	if (b > a & b > c)
		printf("Largest is %d\n", b);

	if (c > b & c > a)
		printf("Largest is %d\n", c);


	return 0;
}