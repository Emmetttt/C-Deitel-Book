#include <stdio.h>
#include <math.h>

/* time since 12 */

int timeSince(int, int, int);

main(){
	int hr, min, sec;

	printf("Input the hour, minute and second to find the number of seconds since 12(-1 to end): \n");
	scanf("%d %d %d", &hr, &min, &sec);

	while (hr != -1){
		printf("%d seconds have passed since the clock last struck 12.\n", timeSince(hr, min, sec));

		printf("Input the hour, minute and second to find the number of seconds since 12(-1 to end): \n");
		scanf("%d %d %d", &hr, &min, &sec);
	}

	return 0;
}

int timeSince(int hr, int min, int sec){
	int secondsPassed = 0;
	if (hr > 12)
		hr -= 12;
	secondsPassed += (hr*360);
	secondsPassed += (min*60);
	secondsPassed += sec;

	return secondsPassed;
}