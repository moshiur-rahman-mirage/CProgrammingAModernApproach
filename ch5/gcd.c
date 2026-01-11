#include<stdio.h>
int gcd(int b, int c);

void frction() {
	int a;
	int b;
	int g;
	printf("Enter fraction number with / : ");
	scanf_s("%d/%d", &a, &b);
	g = gcd(a, b);
	printf("Presentation will be now %d/%d\n", a / g, b / g);
}

int gcd(int b,int c) {

	if (b < c) {
		int temp = b;
		b = c;
		c = temp;
	}


	int r=1;

	while (r != 0) {
		r = b % c;
		b = c;
		c = r;
	}

	return b;

}