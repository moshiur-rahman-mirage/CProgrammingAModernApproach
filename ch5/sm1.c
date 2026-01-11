#include<stdio.h>

void sm1() {
	int mx = 0;
	int n = 0;
	do {
		printf("Enter a number:");
		scanf_s("%d\n", &n);
		if (n > mx) {
			mx = n;
		}
	} while (n > 0);
	printf("Biggest number is : %d", mx);
}