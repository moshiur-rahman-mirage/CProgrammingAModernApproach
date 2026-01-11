#include<stdio.h>

void isbnCheck() {
	int gsiPrefix;
	int groupId;
	int publisherCode;
	int itemNumber;
	int checkDigitNo;
	printf("Enter ISBN: ");
	scanf_s("%d-%d-%d-%d-%d", &gsiPrefix, &groupId, &publisherCode, &itemNumber, &checkDigitNo);
	printf("GSI prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d", gsiPrefix, groupId, publisherCode, itemNumber, checkDigitNo);


}