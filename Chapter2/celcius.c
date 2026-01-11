#define _CRT_SECURE_NO_WARNINGS
#define FREEZING_POINT   32.0f
#define SCALE_FACTOR (5.0f/9.0f)

#include<stdio.h>
void celciusCalc() {
	float c_temp = 0.0f,f_temp=0.0f;
	printf("Enter temperature in farenheight: ");
	scanf("%f", &f_temp);
	c_temp = (f_temp - FREEZING_POINT) * SCALE_FACTOR;
	printf("Celcius equivalent %.1f\n", c_temp);
	// COMMENT
}