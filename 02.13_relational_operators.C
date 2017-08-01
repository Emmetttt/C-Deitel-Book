#include <stdio.h>

main()
{
	int num1, num2;

	printf("Enter two integers, and I will tell you the realtionships they satisfy:\n");
	scanf("%d %d", &num1, &num2);

	if (num1 == num2)
		printf("%d is equal to %d\n", num1, num2);

	if (num1 != num2)
		printf("%d is not equal to %d\n", num1, num2);

	if (num1 < num2)
		printf("%d is less than %d\n", num1, num2);

	if (num1 > num2)
		printf("%d is greater than %d\n", num1, num2);

	if (num1 <= num2)
		printf("%d is less than or equal to %d\n", num1, num2);

	if (num1 >= num2)
		printf("%d is greater than or equal to %d\n", num1, num2);

	return 0;
}