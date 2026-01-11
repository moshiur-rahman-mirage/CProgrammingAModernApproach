#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
void p1() {
	//printf("%6d,%5d", 86, 1040);
	//printf("%12.5e\n", 3.253);
	//printf("%-12f", 83.162);
	//printf("%-8.1e",123.456);
	//printf("%10.6e", 456789.3654);
	//printf("%-8.3f", 1123.02365478);
	//printf("              %6.0f", 45646.12365);
	//int i, j=0;
	//float x=.0f;
	//scanf_s("%d%f%d", &i, &x, &j);
	//printf("%d\n", i);
	//printf("%d\n", j);
	//printf("%f\n", x);

	/*int x;
	int y;
	scanf_s("%d / %d", &x, &y);
	printf("%.2f", (float)  x / y);*/
	int mm;
	int dd;
	int yyyy;
	scanf_s("%d/%d/%d", &mm, &dd, &yyyy);
	printf("%d%d%d", yyyy, mm, dd);


}