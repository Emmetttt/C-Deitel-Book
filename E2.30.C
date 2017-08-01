#include <stdio.h>

main()
{
	int num, divisor, temp;

	printf("Input a number: ");
	scanf("%d", &num);

	divisor = 10;
	temp = num;

	while (temp/divisor > 10){
		divisor = divisor * 10;
	}

	while (divisor >= 10){
		temp = num/divisor;
		printf("%d ", num/divisor);
		num = num - (divisor*temp);
		divisor = divisor / 10;
	}

	printf("%d\n", num/divisor);

	return 0;
}