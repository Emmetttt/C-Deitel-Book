#include <stdio.h>

main()
{
	int integer1, integer2, sum;	/* Declare variable. A variable is a location in memory
									where a value can be stored for usee by a program.*/

	printf("Enter first integer:\n");
	scanf("%d", &integer1);			/* %d is decimal integer. & is address operator, tells scanf
									the location in memory where integer1 is stored. Computer then
									stores the value for integer1 at that location */
	printf("Enter second integer:\n");
	scanf("%d", &integer2);
	sum = integer1 + integer2;		/* + is a binary operator as it has two operands, integer1 and integer2 */
	printf("%d + %d = %d\n", integer1, integer2, sum);

	return 0;	
}

/* scanf is destructive, as whatever is inputted overwrites anything that was previously stored
in the memory location &x. printf is nondestructive, as the value at memory location %x is unchanged */