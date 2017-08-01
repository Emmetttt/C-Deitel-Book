#include <stdio.h>
/* Computes overtime and pay */

main()
{
	int hours;
	float rate, salary;

	printf("Enter # of hours works (-1 to end): ");
	scanf("%d", &hours);

	while (hours != -1){
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &rate);
		if (hours < 40){
			salary = rate * hours;
			printf("Salary is $%.2f\n", salary);
		}
		else {
			salary = rate * 40;
			hours -= 40;
			salary += (rate * 1.5 * hours);
			printf("Salary is $%.2f\n", salary);
		}

		printf("Enter # of hours works (-1 to end): ");
		scanf("%d", &hours);
	}
}	