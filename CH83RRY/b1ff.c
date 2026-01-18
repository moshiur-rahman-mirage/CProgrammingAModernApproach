#include<stdio.h>
#include<ctype.h>
void b1ff() {
	char text[100];
	printf("Enter b1ff text: ");
	int ch;
	int index = 0;
	while ((ch = getchar()) != '\n' && ch != EOF) {
		ch = toupper((unsigned char)ch);
		if (ch == 'B') {
			ch = '8';
		}
		text[index] = ch;
		index++;
	}
	text[index] = '\0';
	for (int i = 0; text[i] != '\0'; i++) {
		printf("%c", text[i]);

	}
}