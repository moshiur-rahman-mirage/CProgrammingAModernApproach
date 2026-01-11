#include<stdio.h>
float esum2(int n);
int fct(int num);
void esum() {
	int number;
	float x;
	printf("Enter number: ");
	scanf_s("%d", &number);
	x = esum2(number);
	printf("Sum is %f", x);
}

float esum2(int number) {
	if (number == 0) {
		return 1.0;
	}
	return 1.0/fct(number) + esum2((number-1));
}

int fct(int num) {
	if (num == 0 || num == 1) {
		return 1;
	}
	else {
		return num * fct(num - 1);
	}
}