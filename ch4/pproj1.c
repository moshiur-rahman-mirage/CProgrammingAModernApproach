#include<stdio.h>
void last2c(int last2, int firstx);
void prj1() {
	int input;
	printf("Enter 3 digit number: ");
	scanf_s("%d", &input);
	int first = input / 100;
	int rem = input % 100;
	last2c(rem, first);

}

void last2c(int last2,int firstx) {
	int first;
	int second;
	
	first = last2 / 10;
	second = last2 % 10;
	printf("Reversed is :%d%d%d", second, first,firstx);

}