#include<stdio.h>

void kth() {
	int number=45675;
	int position=4;

	while (position > 1) {
		printf("Before Number is %d\n", number);
		printf("number = number / 10\n");
		number = number / 10;
		printf("After Number is %d\n", number);
		printf("Before Position is %d\n", position);
		position--;
		printf("Position is %d\n", position);
	}
	printf("It is %d\n", number % 10);
}