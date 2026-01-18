#include<stdio.h>
void repdigit() {
	int checkingNumber = 0;
	do {
		int digits[10] = { 0 };

		printf("Enter number: ");

		scanf_s("%d", &checkingNumber);
		if (checkingNumber < 0) break;
		do {
			int f = checkingNumber % 10;
			digits[f] = digits[f] + 1;

			checkingNumber = checkingNumber / 10;
		} while (checkingNumber > 0);
		for (int i = 0; i < 10; i++){
			if (digits[i] > 1) {
				printf("%d is repeted %d times\n", i, digits[i]);
			}
		}
	} while (1);
}