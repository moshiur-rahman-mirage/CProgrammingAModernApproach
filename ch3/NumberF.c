#include<stdio.h>

void num() {

	int nums[16] ;
	int rowSums[4];
	int colSums[4];

	int rowSum;
	int colSum;
	int diag1=0;
	int diag2=0;

	printf("Enter the numbers from 1 to 16 in any order :");
	for (int i = 0; i < 16; i++) {
		scanf_s("%d", &nums[i]);
	}

	for (int i = 0; i < 16; i++) {
		printf("%d\t", nums[i]);
		if ((i+1) % 4 == 0) {
			printf("\n");
		}
	}

	for (int i = 0; i < 4; i++) {
		rowSum = 0;
		for (int j = 0; j < 4; j++) {
			rowSum += nums[i * 4 + j];
		}
		rowSums[i] = rowSum;
	}

	for (int i = 0; i < 4; i++) {
		colSum = 0;
		for (int j = 0; j < 4; j++) {
			colSum += nums[i * 4 + j];
		}
		colSums[i] = colSum;
	}

	for (int i = 0; i < 4; i++) {
		diag1 += nums[i * 4 + i];
	}

	for (int i = 0; i < 4; i++) {
		diag2 += nums[i * 4 + (3 - i)];
	}

	printf("\nRow sums :");
	for (int i = 0; i < 4; i++) {
		printf("%d\t", rowSums[i]);
	}

	printf("\nColumn sums :");
	for (int i = 0; i < 4; i++) {
		printf("%d\t", colSums[i]);
	}
	printf("\nDiagonal sums: %d\t%d", diag1, diag2);


}
