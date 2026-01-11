#include<stdio.h>
void problem1();
void problem2();
void problem3();
void qstnp() {
	//problem1();

	//problem2();

	problem3();
}

void problem1() {
	int number = 45;
	int digit = 0;
	if (number > 0 && number <= 9) {
		digit = 1;
	}
	else if (number > 9 && number <= 99) {
		digit = 2;
	}
	else if (number > 99 && number <= 1000) {
		digit = 3;
	}
	else {
		digit = 4;
	}

	printf("The number %d has %d digits", number, digit);
}


void problem2() {
	int hour;
	int minute;
	char prefix[3];
	printf("Enter a 24 hour time : ");
	scanf_s("%2d:%2d", &hour, &minute);
	if (hour == 0) {
		hour = 12;
		strcpy_s(prefix, 3, "AM");
	}
	else if (hour > 12) {
		hour = hour-12;
		strcpy_s(prefix, 3, "PM");
	}
	else if(hour==12){
		strcpy_s(prefix, 3, "PM");
	}
	else {
		hour = hour;
		strcpy_s(prefix, 3, "AM");
	}
	printf("Equivalent 12-hour time : %02d:%02d %s\n", hour, minute,prefix);
}


void problem3() {
	float income = 0.0f;
	float tx = 0.0f;
	printf("Please input your income : ");
	scanf_s("%0.00f", &income);

	if (income < 750) {
		tx =.0f;
	}


	printf("For your income %.f, your tax is %.f", income, tx);


}