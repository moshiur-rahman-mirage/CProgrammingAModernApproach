#include<stdio.h>
void telephone() {
	int country;
	int first;
	int second;
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf_s("(%3d) %3d-%4d", &country, &first, &second);
	printf("You entered %03d.%03d.%04d", country, first, second);

}