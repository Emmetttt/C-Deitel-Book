#include <stdio.h>
#include <math.h>

/* Encryption method */
/* - Replace each digit by (d + 7)%10
   - Swap first and third
   - Swap second and fourth
   - Print integer */

main()
{
	int number, encrypt, digit1, digit2, digit3, digit4, temp1, temp2;

	printf("Four digit number to be encrypted: ");
	scanf("%d", &number);
	
	/* Find each digit of the number */
	digit4 = number%10;
	number /= 10;
	digit3 = number%10;
	number /= 10;
	digit2 = number%10;
	number /= 10;
	digit1 = number%10;
	number /= 10;

	/* Replace each digit by (d+7)%10*/
	digit1 = (digit1 + 7)%10;
	digit2 = (digit2 + 7)%10;
	digit3 = (digit3 + 7)%10;
	digit4 = (digit4 + 7)%10;

	/* Swap first and third */
	temp1 = digit1;
	digit1 = digit3;
	digit3 = temp1;

	/* Swap second and fourth */
	temp2 = digit2;
	digit2 = digit4;
	digit4 = temp2;

	/* print the incrypted four digit integer*/
	printf("Encryption: %d%d%d%d\n", digit1, digit2, digit3, digit4);
}	