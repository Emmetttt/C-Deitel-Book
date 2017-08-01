/* The tortoise and the hare */
#include <stdio.h>
#include <time.h>
#include <Windows.h>
#define SIZE 70

void tortoiseMove(int *);
void hareMove(int *);
void printer(int, int);

main(){
	int tortoise = 0, hare = 0;

	printf("BANG !!!!!\n");
	printf("AND THEY'RE OFF !!!!!\n");

	while (tortoise < 70 && hare < 70){
		tortoiseMove(&tortoise);
		hareMove(&hare);

		if (tortoise == hare && tortoise > 1){
			tortoise--;
			printf("OUCH!!\n");
		}

		printer(tortoise, hare);
		Sleep(300); /* as defined in the Windows API. */ 
	}

	if (tortoise >= 70 && hare < 70)
		printf("TORTOISE WINS!!!\n");
	else if (hare >= 70 && tortoise < 70)
		printf("Hare wins. Yuch.\n");
	else
		printf("It's a tie.\n");
}

void printer(int tort, int hare){
	int hash1, hash2, track;

	for (hash1 = 0; hash1 < 70; hash1++){
		printf("#");
	}

	printf("\n");

	for (track = 0; track < 70; track++){
		if (track == tort)
			printf("T");
		else if (track == hare)
			printf("H");
		else
			printf(" ");
	}

	printf("\n");

	for (hash2 = 0; hash2 < 70; hash2++){
		printf("#");
	}
	printf("\n");
}

void tortoiseMove(int *posPtr){
	int move = rand() % 10;
	if (move >= 5){ /* 50% */
		*posPtr += 3; /* Fast plod, 3 sq */
		return;
	}
	if (move <= 1) /* 20% */
		if (*posPtr < 6){
			*posPtr = 0; /* Slip, 6 sq back */
			return;
		}
		else {
			*posPtr -= 6;
			return;
		}
	*posPtr++; /* Slow plod */
	return;
}

void hareMove(int *posPtr){
	int move = rand() % 10;
	if (move >= 8) /* 20% */
		return; /* Sleep */
	if (move <= 1){ /* 20% */
		*posPtr += 9; /* Big Hop */
		return;
	}
	if (move >= 2 && move <= 4){ /* 30% */
		*posPtr += 1; /* Slow hop */
		return;
	}
	if (move == 5) /* 10% */
		if (*posPtr < 12){ /* Big slip */
			*posPtr = 0;
			return;
		}
		else {
			*posPtr -= 12;
			return;
		}
	else {
		if (*posPtr > 2){
			*posPtr -= 2;
			return;
		}
		else {
			*posPtr = 0;
			return;
		}
	}
}
