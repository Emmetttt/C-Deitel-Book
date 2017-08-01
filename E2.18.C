#include <stdio.h>

main()
{
	int a, b;

	printf("Input two numbers to find which is larger.\n");
	scanf("%d %d", &a, &b);

	if (a > b)
		printf("%d is larger", a);

	if (b > a)
		printf("%d is larger", b);

	if (a == b)
		printf("These numbers are equal");

	return 0;
}