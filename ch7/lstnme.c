#include<stdio.h>

void lstnme() {
	printf("Enter name: ");
	
	char firstInitil = '\0';
	char lstNme[100];
	int idx=0;
	int redingLstNme = 0;
	int ch=0;
	while ((ch = getchar()) == ' ');

	while ((ch = getchar()) != '\n') {
		if (ch == ' ') {
			redingLstNme = 1;
			continue;
		}

		if (!redingLstNme) {
			if (firstInitil == '\0') {
				firstInitil = ch;
			}
		}
		else {
			lstNme[idx] = ch;
			idx++;
		}
	}
	lstNme[idx] = '\0';
	
	printf("%s , %c", lstNme, firstInitil);

}