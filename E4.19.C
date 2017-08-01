#include <stdio.h>

/* Finds retail value of products sold */

main()
{
	int productno, quantity;
	float total;

	printf("Enter the product number between 1 and 5 and the quantity sold (-1 to quit): ");
	scanf("%d%d", &productno, &quantity);

	while ( productno != -1 ){

		switch (productno){

			case '1':
				total += ( quantity * 2.98 );
				break;

			case '2':
				total += ( quantity * 4.50 );
				break;

			case '3':
				total += ( quantity * 9.98 );
				break;

			case '4':
				total += ( quantity * 4.49 );
				break;

			case '5':
				total += ( quantity * 6.87 );
				break;

			case '\n': case ' ':
				break;

			default:
				printf("Incorrect number. Reenter between 1 and 5.\n");
				break;
		}

	}

	printf("Total revenue: %.2f\n", total);

	return 0;
}