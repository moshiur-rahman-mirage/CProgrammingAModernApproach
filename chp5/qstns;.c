#include<stdio.h>
#define true 1
#define false 0
void qstns1();
void qstns2();
void qstns3();
void qstns4();
void qstns5();
void qstns6();
void qstns() {
	 //qstns1();
	 //qstns2();
	 //qstns3();
	 //qstns4();
	 //qstns5();
	qstns6();
}


void qstns1() {
	int i = 20;
	int j = 5;
	printf("%d\n", !i < j);
}


void qstns2() {
	int i = 2;
	int j = 3;
	int k = i * j == 6;
	printf("%d\n", k);
}

void qstns3() {
	int i = 3; int j = 4; int k = 5;
	printf(" %d", i % j + i < k);
}
void qstns4() {
	int i = 1; int j = 2; int k = 3;
	printf("%d", i < j || k);
}
void qstns5() {
	int i = 1;
	switch (i % 3) {
	    case 0:printf("0");
	    case 1:printf("1");
		case 2:printf("2");

	}
}

void qstns6() {
	int x= 770;
	switch (x) {
	case 229:printf("Albany");
		break;
	case 404:case 470:case 678:case 770:
		printf("Atlanta");
	}
}