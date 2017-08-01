#include <stdio.h>

/* Pseudocode 
- determine if customer has exceeded credit limit on charge account
- initialise acc number, balance, total charged, total credits, limit
- input above
- calc new balance
- balance = beginning balance + charges - credits
- if limit exceeded, display acc number, credit limit, new balance, message saying exceeded
*/

main()
{
	int accnum;
	float balance, charges, credits, limit, nbalance;

	printf("Enter account number (-1 to end): ");
	scanf("%d", &accnum);

	while (accnum != -1){
		printf("Enter beginning balance: ");
		scanf("%f", &balance);
		printf("Enter total charges: ");
		scanf("%f", &charges);
		printf("Enter total credits: ");
		scanf("%f", &credits);
		printf("Enter credit limit: ");
		scanf("%f", &limit);

		nbalance = balance + charges - credits;
		if (nbalance > limit){
			printf("Account: %d\n", accnum);
			printf("Credit limit: %f\n", limit);
			printf("Balance: %f\n", nbalance);
			printf("Credit Limit exceeded\n");
		}
	
		printf("Enter account number (-1 to end): ");
		scanf("%d", &accnum);
	}
}	