/* Double subscripted array */
#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4

void minimum(int [STUDENTS][EXAMS]);
void maximum(int [STUDENTS][EXAMS]);
void average(int [STUDENTS][EXAMS]);
void printArray(int [STUDENTS][EXAMS]);

main(){
	int student,
	    studentGrades[STUDENTS][EXAMS] =  {{77, 68, 86, 73},
										   {96, 87, 89, 78},
										   {70, 90, 86, 81}};
	void (*f[4])(int [][EXAMS]) = {printArray, minimum, maximum, average};
	/* f is an array of 4 pointers to functions that take an (int [][EXAMS])
	   as an argument and return an void */
	int choice;

	printf("Enter a choice:\n");
	printf("   0   Print the array of grades\n");
	printf("   1   Find the minimum grade\n");
	printf("   2   Find the maximum grade\n");
	printf("   3   Print the average on all exams for each student\n");
	printf("   4   End the program\n");
	scanf("%d", &choice);

	while (choice >= 0 && choice < 4){
		(*f[choice])(studentGrades);
		printf("Enter a number between 0 and 3, 4 to end\n");
		scanf("%d", &choice);
	}

	return 0;
}

void maximum(int grades[][EXAMS]){
	int i, j, highGrade = 0;

	for (i = 0; i <= STUDENTS - 1; i++)
		for (j = 0; j <= EXAMS - 1; j++)
			if (grades[i][j] > highGrade)
				highGrade = grades[i][j];

	printf("\nHighest grade: %d", highGrade);
	return;
}

void minimum(int grades[][EXAMS]){
	int i, j, lowGrade = 0;

	for (i = 0; i <= STUDENTS - 1; i++)
		for (j = 0; j <= EXAMS - 1; j++)
			if (grades[i][j] > lowGrade)
				lowGrade = grades[i][j];

	printf("\nLowest grade: %d", lowGrade);
	return;
}

void average(int grades[][EXAMS]){
	int i, j, total = 0;
	float avg;


	for (i = 0; i <= STUDENTS - 1; i++){
		for (j = 0; j <= EXAMS - 1; j++)
			total += grades[i][j];
		avg = (float) total / EXAMS;
		printf("The average grade for student %d is %.2f\n", i, avg);
		total = 0;
	}
	return;
}

void printArray(int grades[][EXAMS]){
	int i, j;

	printf("           [0]   [1]   [2]  [3]");

	for (i = 0; i <= STUDENTS - 1; i++){
		printf("\nstudentGrades[%d] ", i);

		for (j = 0; j <= EXAMS - 1; j++)
			printf("%-5d", grades[i][j]);
	}
}