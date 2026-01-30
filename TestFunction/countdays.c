#include<stdio.h>
#include<stdbool.h>
bool isLeapYear(int year);
void countdays() {
	int monthdays[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	printf("Enter day, month and year (dd/mm/yy) : ");
	int dd;
	int mm;
	int yy;

	int totaldays = 0;

	scanf_s("%d/%d/%d", &dd, &mm, &yy);

	for (int i = 0; i < mm-1; i++) {
		totaldays += monthdays[i];
	}

	totaldays += dd;

	if (isLeapYear(yy) && mm>2) {
		totaldays += 1;
	}

	printf("Total days is : %d", totaldays);
}

bool isLeapYear(int year) {
	return (year % 400 == 0) ||
		(year % 4 == 0 && year % 100 != 0);
}