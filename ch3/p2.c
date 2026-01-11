#include<stdio.h>

void p2() {
	int itemNo;
	float unitPrice;
	int day, month, year;
	printf("Enter item number :");
	scanf_s("%d", &itemNo);
	printf("Enter price :");
	scanf_s("%f", &unitPrice);
	printf("Enter Purchase date :");
	scanf_s("%d/%d/%d", &day, &month, &year);

	printf("Item\tUnit Price\tPurchase\n Date \n%d\t%4.2f\t\t%-d/%d/%d",itemNo,unitPrice, day, month, year);
}