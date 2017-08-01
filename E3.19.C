#include <stdio.h>

main()
{
	float basesalary = 200, sales, salary;

	printf("Enter sales in dollars (-1 to end): ");
	scanf("%f", &sales);

	while (sales != -1){
		salary = basesalary + 0.09*sales;
		printf("Salary is $%.2f\n", salary);
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%f", &sales);
	}
}	