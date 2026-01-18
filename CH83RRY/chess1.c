#include<stdio.h>
#include<string.h>
void chess1() {
	char un[8] = { 'r','n','b','q','k','b','n','r' };
	char pwn[8];
	char chessboard[8][8] = {0};
	memset(pwn, 'p', sizeof(pwn));
	for (int row = 0; row < 8; row++) {
		if (row == 0) {
			memcpy(chessboard[row], un, sizeof(un));
		}
		else if (row == 7) {
			memcpy(chessboard[row], un, sizeof(un));
			for (int c = 0; c < 8; c++) {
				chessboard[row][c] = chessboard[row][c] - ('a'-'A');
			}
		}
		else if (row == 1 || row == 6) {
			memcpy(chessboard[row], pwn, sizeof(pwn));
		}
		else {
			for (int column = 0; column < 8; column++) {
				if ((row+column)%2==0) {
					chessboard[row][column] = ' ';
				}
				else {
					chessboard[row][column] =  '*';
				}
			}
		}
	}



	for (int row = 0; row < 8; row++) {
		printf("\n");
		for (int column = 0; column < 8; column++) {
			printf("%c   ", chessboard[row][column]);
		}
		printf("\n");
	}


}