#include<stdio.h>
void daysinmonth() {
	int days;
	int start;
	printf("Enter days in month: ");
	scanf_s("%d", &days);
	printf("Starting days: ");
	scanf_s("%d", &start);

	for (int i = 1; i < start; i++) {
		printf("     ");
	}
	for (int i = 1; i <= days; i++) {
		printf("%5d", i);
		if ((i + start-1) % 7 == 0) {
			printf("\n");
		}
	}
}