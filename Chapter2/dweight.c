#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void dweight2() {
	float height, width, length,weight;
	printf("Enter height: ");
	scanf("%f", &height);
	printf("Enter width: ");
	scanf("%f", &width);
	printf("Enter length: ");
	scanf("%f", &length);
	printf("Enter weight: ");
	scanf("%f", &weight);


	float volume = height * width * length;
	float volumetricWeight = volume / 166;

	if (volumetricWeight > weight) {
		printf("Your pacage has crossed standard limit. now you have to pay for %f kg weight", volumetricWeight);
	}
	else {
		printf("You only have to pay for %f kg weight", weight);
	}
}