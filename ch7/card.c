#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
void card() {
	srand(time(NULL));
	int inhand[4][13] = { 0 };

	int       num_crd;
	const char rank_code[] = { '2','3','4','5','6','7','8',
		'9','j','q','k','a' };
	const char suit_code[] = { 'c','d','h','s' };


	printf("Enter number of cards in hand: ");
	scanf_s("%d", &num_crd);
	while (num_crd > 0) {
		int suit = rand() % 4;
		int rank = rand() % 13;

		if (!inhand[suit][rank]) {
			inhand[suit][rank] == true;
			num_crd--;
			printf(" %c%c", rank_code[rank], suit_code[suit]);
		}
	}

	printf("\n");
}