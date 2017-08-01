/* const */
#include <stdio.h>

void tryToModifyMe(const int []);

main(){
	int a[] = {10, 20, 30};

	tryToModifyMe(a);
	printf("%d %d %d\n", a[0], a[1], a[2]);

	return 0;
}

void tryToModifyMe(const int b[]){
	b[0] /= 2;
	b[1] /= 3;
	b[2] /= 4;
}