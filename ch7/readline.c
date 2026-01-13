#include<stdio.h>
void readline() {
	int ch;
	printf("type line : ");
	while ((ch=getchar())!='\n') {
		putchar(ch);
	}

	printf("\n");
}