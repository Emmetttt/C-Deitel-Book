#include <stdio.h>
#include <math.h>
/* Checks if a number is a palindrome


*/
main()
{
	int number, duplicate, count = 4, divisor = 10, palin = 0, digit;

	printf("Input a 5 digit number to check if it is a palindrome: \n");
	scanf("%d", &number);
	duplicate = number;

	while (count > 0){
		digit = (number%divisor) * pow(10, count);
		palin += digit;
		count -= 1;
		number /= 10;
	}

	palin += number;

	printf("%d %s\n", duplicate, palin == duplicate ? "is a palindrome" : "is not a palindrome");
}	