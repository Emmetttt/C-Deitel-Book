/* Using sscanf */
#include <stdio.h>

main(){
	char s[] = "423532 58349.432";
	int x;
	float y;

	sscanf(s, "%d%f", &x, &y); /* Read directly from the string*/
	printf("%s\n%s%6d\n%s%8.3f\n",
		   "The values stored in character array s are:",
		   "Integer:", x, "Float:", y);

	return 0;
}