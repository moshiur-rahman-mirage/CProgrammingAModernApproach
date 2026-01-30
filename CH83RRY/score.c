#include<stdio.h>
void score() {

	int number = 0;
	int xm = 0;
	int sm = 100;
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		printf("Enter score of %d student: ", i + 1);
		scanf_s("%d", &number);

		if (number < sm) {
			sm = number;
		}

		if (number > xm) {
			xm = number;
		}

		sum += number;

		printf("\n");
	}

	printf("Min vl is %d \n", sm);
	printf("Mx vl is %d \n", xm);
	printf("Avg value is %2f", (double)sum / 5);
}