#include<stdio.h>
void weightCalc() {
	float height = 12.0f, width = 10.0f, length = 8.0f;
	float volume = height * width * length;
	float volumentricWeght = volume / 166.0f;
	printf("volumetric weight is %f",volumentricWeght);
	return 0;
}