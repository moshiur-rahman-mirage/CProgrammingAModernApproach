#include<stdio.h>
int compound() {
	int year;
	int low_rate;
	int rate_count = 5;
	
	double interestsBymonth[5][24] = { 0 };


	int init_amt = 100;
	printf("Enter number of yer: ");
	scanf_s("%d", &year);
	printf("Enter lowest rate percent: ");
	scanf_s("%d", &low_rate);
	double value[5];
	printf("Year\t");
	for (int i = 0; i < rate_count; i++) {
		printf("%d%%       ", low_rate + i);
		value[i] = init_amt;
	}
	printf("\n");
	for (int i = 0; i < year; i++) {
		printf("%d\t",i+1);
		for (int j = 0; j < rate_count; j++) {
			//double interestAmt = value[j] * (low_rate + j) / 100.00;
			double monthlyRate =  (low_rate + j) / 12.00 / 100.00;
			for (int i = 0; i < 12; i++) {
				value[j] = value[j] + value[j]*monthlyRate;
			}
			
			printf("%5.2f   ", value[j]);
		}
		printf("\n");
	}

}