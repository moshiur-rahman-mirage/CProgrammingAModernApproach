#include<stdio.h>
#include<string.h>
int rcopy() {
	
	int x[5] = { 4,5,6,7,8 };
	int y[5];

	memcpy(y, x, sizeof(x));

	for (int i = 0; i < 5; i++) {
		printf("%d\n", y[i]);
	}




}