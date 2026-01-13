#include<stdio.h>
void toupper2() {
	char ch;
	printf("Enter letter to promote to upper case: ");
	scanf_s("%ch", &ch);
	int a = 'a';
	int A = 'A';
	printf("%d\n", a);
	printf("%d\n", A);
	int diff=(a - A);
	printf("Upper case is %c \a", ch - diff);
	
}