#include<stdio.h>

void test() {
	printf("%d\n", 8 / 5);
	printf("%d\n", -8 / 5);
	printf("%d\n", 8 / -5);
	printf("%d\n", -8 / -1);
	
	int tot = 500;
	int x = 9 - ((tot - 1) % 10);
	int y = (10 - (tot % 10));
	int p = (10 - (tot % 10)) % 10;

	printf("%d,%d,%d", x, y,p);

}