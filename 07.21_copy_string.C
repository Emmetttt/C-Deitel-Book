/* Copying a string */
#include <stdio.h>

void copy1(char *, const char *);
void copy2(char *, const char *);

main(){
	char string1[10], *string2 = "Hello",
	     string3[10], string4[] = "Good Bye";

	copy1(string1, string2);
	printf("string1 = %s\n", string1);

	copy2(string3, string4);
	printf("string3 = %s\n", string3);
	
	return 0;
}

/* Array notation */
void copy1(char *s1, const char *s2){
	/* The for structure, s1[i] = s2[i], performs the
	   copy operation character by character from s2 to s1.
	   When the null character ('\0') is encountered in s2,
	   it is assigned to s1 and the loop terminates because
	   the integer value of the null character is zero (false)*/
	int i;

	for (i = 0; s1[i] = s2[i]; i++)
		; /* Does nothing in the body */
}

/* pointer notation*/
void copy2(char *s1, const char *s2){
	for ( ; *s1 = *s2; s1++, s2++)
		; /* Does nothing in body */
}

