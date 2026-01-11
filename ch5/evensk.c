#include<stdio.h>

void evensk() {
	int strt, end;
	printf("Enter number: ");
	scanf_s("%d,%d", &strt,&end);
	for (int i = strt; i*i < end; i++) {
		int sk = i * i;
		if (sk % 2 == 0) {
			printf("%d\n", sk);
		}
	}


}