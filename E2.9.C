#include <stdio.h>

main()
{
	int a, b, c;

	printf("This program is used to perform payroll calculations.\n");
	printf("Enter two numbers, hrs worked and payrate\n");
	scanf("%d %d", &b, &c);
	a = b * c;
	printf("%d is the total pay\n", a);

	return 0;
}