#include <stdio.h>

main()
{
	float pi = 3.14159;
	float input;

	printf("Input a radius and find the diameter, circumference and area of a circle: \n");
	scanf("%f", &input);

	printf("Diameter is %f\n", 2*input);
	printf("Circumference is %f\n", 2*input*pi);
	printf("Area is %f\n", pi*input*input);

	return 0;
}