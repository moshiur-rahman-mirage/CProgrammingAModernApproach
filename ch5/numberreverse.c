#include<stdio.h>

void numberReverse() {
	int number;
	int r=0;
	printf("Enter number to reverse: ");
	scanf_s("%d", &number);
	while (number > 0) {
		r = number % 10;
		number /= 10;
		printf("%d", r);
	}
	
}