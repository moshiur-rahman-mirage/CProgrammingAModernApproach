#include<stdio.h>
#include<ctype.h>
void vowel() {
	printf("Enter sentence: ");
	int cx = 0;
	int count = 0;
	int c = 0;
	while ((cx = getchar()) != '\n') {
		c = toupper(cx);
		if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
			count++;
		}
	}
	printf("\nVowel count is : %d", count);
}