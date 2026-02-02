#include<stdio.h>
void total(){
	int num = 3;
	int count = 0;
	while (num > 0) {
		num /= 10;
		count++;
	}

	printf("Total digit is %d", count);
}