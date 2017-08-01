#include <stdio.h>
#include <math.h>

double hypotenuse(double, double);

main(){
	printf("%s\t%s\t%s\t%s\n", "Triangle", "Side 1", "Side 2", "Hypotenuse");
	printf("%8d\t%6.1f\t%6.1f\t%10.1f\n", 1, 3.0, 4.0, hypotenuse(3.0, 4.0));
	printf("%8d\t%6.1f\t%6.1f\t%10.1f\n", 2, 5.0, 12.0, hypotenuse(5.0, 12.0));
	printf("%8d\t%6.1f\t%6.1f\t%10.1f\n", 3, 8.0, 15.0, hypotenuse(8.0, 15.0));

	return 0;
}

double hypotenuse(double s1, double s2){
	double pow1, pow2, sum;
	pow1 = pow(s1, 2);
	pow2 = pow(s2, 2);
	sum = pow1 + pow2;
	return pow( sum, 0.5);
}