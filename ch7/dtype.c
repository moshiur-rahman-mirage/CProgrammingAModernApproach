#include<stdio.h>

void dtype() {
	

	int i = 2;
	int times = 1;
	do {
		
		printf("for i = %d i*i =  %d\n",i, i * i);
		i=i*i;
		times++;

		if (times % 50 == 1) {
			printf("Press enter to continue. ");
			while (getchar() != '\n');
		}

	} while (times < 1000);


}