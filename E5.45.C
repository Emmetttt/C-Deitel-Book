#include <stdio.h>
#include <math.h>
/* distance */

float dist();

main(){
	float x1, x2, y1, y2;
	printf("Input two coordinates (x y) to find the cartesian distance between them.\n");
	printf("First: ");
	scanf("%f %f", &x1, &y1);
	printf("Second: ");
	scanf("%f %f", &x2, &y2);

	printf("The distance is %f.\n", dist(x1, y1, x2, y2));
	return 0;
}

float dist(float x1, float y1, float x2, float y2){
	float d1 = pow((x1 - x2), 2);
	float d2 = pow((y1 - y2), 2);
	return pow((d1 + d2), 0.5);
}
