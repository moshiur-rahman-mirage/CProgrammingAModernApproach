#include<stdio.h>
void closerdt() {
	int minyr=5000;
	int minm=5000;
	int mind=5000;
	int y=-1;
	int m=-1;
	int d=-1;


	while (1){
		printf("Enter a date (dd/mm/yy): ");
		scanf_s("%02d/%02d/%02d", &d, &m, &y);
		if (d == 0 && m == 0 && y == 0) {
			break;
		}
		if (y <= minyr) {
			minyr = y;
			if (m <= minm) {
				minm = m;
				if (d <= mind) {
					mind = d;
				}
			}
		}
	} 
		
		printf("%d/%d/%d is the earliest date ", mind, minm, minyr);
	
}