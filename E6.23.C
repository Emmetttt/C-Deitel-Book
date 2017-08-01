#include <stdio.h>

#define X 50
#define Y 50

void printArray(int [Y][X]);

int main(){
	int floor[Y][X] = {0};
	int coord[2] = {0}; /* Y, X */
	int input, face = 0; /* 0 = N, 1 = E, 2 = S, 3 = W */
	int pen = 0; /* 0 is up, 1 is down */

	printf("Enter a number.\n");
	printf("Options:\n");
	printf("1 - Pen up\n2 - Pen Down\n3 - Turn Right\n4 - Turn Left\n");
	printf("5-10 - move forward 1 to 5 spaces\n");
	printf("6 - Print array\n9 - End\n");
	scanf("%d\n", &input);

	while (input != 9){

		switch (input) {

			case 1: /* Pen up */
				pen = 0;
				break;

			case 2: /* Pen down */
				pen = 1;
				break;

			case 3: /* Turn right */
				if (face != 3)
					face++;
				else if (face == 3)
					face = 0;
				break;

			case 4: /* Turn left */
				if (face != 0)
					face--;
				else if (face == 0)
					face = 4;
				break;

			case 5: /* Move forward 1 */
				if (face == 0)
					coord[1]++;
					if (pen == 1)
						floor[coord[1]][coord[2]] = 1;
				if (face == 1)
					coord[2]++;
					if (pen == 1)
						floor[coord[1]][coord[2]] = 1;
				if (face == 2)
					coord[1]--;
					if (pen == 1)
						floor[coord[1]][coord[2]] = 1;
				if (face == 3)
					coord[2]--;
					if (pen == 1)
						floor[coord[1]][coord[2]] = 1;
				break;

			case 6:
				printArray(floor);
				break;
		}

	scanf("%d\n", &input);

	}
}

void printArray(int floor[Y][X]){
	int i, j;

	for (i = 0; i <= Y - 1; i++){
		for (j = 0; j <= X - 1; j++){
			printf("%d ", floor[i][j]);
		}
		printf("\n");
	}
}