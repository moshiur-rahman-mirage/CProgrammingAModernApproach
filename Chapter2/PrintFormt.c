#include<stdio.h>
void formatting() {
	int i;
	float x;
	i = 40;
	x = 839.21f;
	printf("|%d|%5f|%-5d|%5.3d|\n\a", i, i, i, i);
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
}