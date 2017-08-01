#include <stdio.h>
#include <math.h>

/* Parking Garage */

double calculate_Charges(double);

main(){
	int i;
	double charge, total, hrs[3];

	printf("Input three customers hours in the parking garage: ");
	scanf("%lf", &hrs[0]);
	scanf("%lf", &hrs[1]);
	scanf("%lf", &hrs[2]);	

	printf("%s\t%s\t\n", "Car", "Hours", "Charge");
	for (i = 1; i <= 3; i++){
		printf("%d\t%.1f\t%.2f\n", i, hrs[i-1], calculate_Charges(hrs[i-1]));
	}
	printf("%s\t%.1f\t%.2f\n", "TOTAL", hrs[0]+hrs[1]+hrs[2], calculate_Charges(hrs[0]) + calculate_Charges(hrs[1]) + calculate_Charges(hrs[2]));

	return 0;
}

double calculate_Charges(double hours){
	hours = ceil(hours);
	if (hours <= 3) {
		return 2;
	}
	else if (hours >= 24) {
		return 10;
	}
	else {
		return ((hours - 3) * 0.5) + 2;
	}
}