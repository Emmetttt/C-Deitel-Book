/* Using memcpy */
#include <stdio.h>
#include <string.h>

main(){
	char s1[17], s2[] = "Copy this string";

	memcpy(s1, s2, 17); /* Copies n characters from s2 to s1 */
	printf("%s\n%s\"%s\"\n",
		   "After s2 is copied into s1 with memcpy,",
		   "s1 contains ", s1);

	return 0;
}