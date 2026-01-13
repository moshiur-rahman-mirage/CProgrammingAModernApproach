#include<stdio.h>
void average() {
	printf("Write a sentance: ");
	int wordcount = 1;
	int letters = 0;
	float avg = 0.0f;
	int ch = 0;
	while ((ch = getchar()) == ' ');
	
	 do{
		if (ch != ' ') {
			letters++;
		}else {
			wordcount++;
			while ((ch = getchar()) == ' ');
				continue;
		}
	 } while ((ch = getchar()) != '\n');

	printf("%0.0f", (float) letters / wordcount);
}