#include<stdio.h>

void interest() {

	int origin = 100;
	int totYear = 5;
	int low_rate = 5;
	int total_rate_calc = 5;
	int i;
	double value[5];
	int rt;
	double interestamt;
	printf("\nYer");
	for (int i = 0; i < total_rate_calc; i++) {
		printf("%6d%%", total_rate_calc+i);
		value[i] = 100.00;
	}

	printf("\n");

	for (int i = 1; i <= totYear; i++) {
		printf("%d     ", i);

		for (int i = 0; i < total_rate_calc; i++) {
			rt = low_rate + i;
			//printf("%d", rt);
			interestamt = (rt / 100.00) * value[i];
			value[i] = value[i] + interestamt;
			printf("%8.2f", value[i]);
		}

		printf("\n");
	}




}