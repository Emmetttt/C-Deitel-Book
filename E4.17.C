#include <stdio.h>

/* find the credit of customers after it is halved in a recession */

main()
{
	int acc, climit, cbalance, nlimit, nbalance;

	printf("Program to calculate the credit status of a customer.\n");
	printf("Input the account number (-1 to quit): \n");
	scanf("%d", &acc);

	while (acc != -1){
		printf("Input the credit limit before recession: \n");
		scanf("%d", &climit);

		printf("Input the current balance: \n");
		scanf("%d", &cbalance);

		nlimit = climit/2;
		printf("New credit limit is %d.\n", nlimit);

		if (cbalance > nlimit){
			printf("You have exceeded the credit balance.\nYou're balance is %d and the limit is %d.\n", cbalance, nlimit);
		}
		
		printf("Input the account number (-1 to quit): \n");
		scanf("%d", &acc);
	}
	return 0;
}