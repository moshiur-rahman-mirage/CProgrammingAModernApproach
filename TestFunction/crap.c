#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void crap() {
	
	
	
}

int roll_dice() {
	int min = 1;
	int max = 6;
	srand(time(NULL));
	int first = rand()% (max - min + 1) + min;
	int second = rand() % (max - min + 1) + min;

	return first + second;
}

void play_game() {
	
	do {
		int sum = roll_dice();

		if (sum == 7 || sum == 11) {
			printf("You have won")
		}

		printf("Do you want to play crap again ? ");
	} while ((getchar() == 'y'));
}