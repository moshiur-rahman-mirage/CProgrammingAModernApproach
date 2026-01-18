#include<stdio.h>
int rowcolsum() {
	int nums[5][5] = { 0 };
	int rowsum = 0;
	int colsum = 0;
	int rowSums[5] = { 0 };
	int colsums[5] = { 0 };
	for (int row = 0; row < 5; row++) {
		printf("Enter row %d : ", row + 1);
		scanf_s("%d %d %d %d %d", &nums[row][0], &nums[row][1], &nums[row][2], &nums[row][3], &nums[row][4]);
	}

	for (int row = 0; row < 5; row++) {
		for (int col = 0; col < 5; col++) {
			rowSums[row] += nums[row][col];
			colsums[col] += nums[row][col];
		}
	}

	printf("Row sums : ");
	for (int i = 0; i < 5; i++) {
		printf("%d\t", rowSums[i]);
	}
	printf("\n");

	printf("Col sums : ");
	for (int i = 0; i < 5; i++) {
		printf("%d\t", colsums[i]);
	}

}