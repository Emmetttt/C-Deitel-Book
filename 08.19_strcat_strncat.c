/* Using strcat and strncat */
#include <stdio.h>
#include <string.h>

main(){
	char s1[10] = "Happy ";
	char s2[] = "New year ";
	char s3[40] = "";

	printf("s1 = %s\ns2 = %s\n", s1, s2);
	printf("strcat(s1, s2) = %s\n", strcat(s1, s2)); 		 /* strcat appends s2 to s1 */
	printf("strncat(s3, s1, 6) = %s\n", strncat(s3, s1, 6)); /* strncat appends at most
																n characters of s2 to s1*/
	printf("strcat(s3, s1) = %s\n", strcat(s3, s1));

	return 0;
}