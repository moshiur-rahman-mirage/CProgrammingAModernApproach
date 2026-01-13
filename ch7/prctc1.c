#include<stdio.h>
void prctc1() {
	unsigned int u;
	unsigned int o;
	unsigned int x;

	//scanf_s("%u", &u);
	//printf("%u\n", u);
	//scanf_s("%o", &o);
	//printf("%o\n", o);
	//scanf_s("%x", &x);
	//printf("%x\n", x);

	short sh;
	scanf_s("%hd", &sh);
	printf("%hd",sh);
	printf("%d",sizeof(sh));
	
}