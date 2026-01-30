#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdbool.h>
void rndomwlk() {
	char bord[10][10];
	memset(bord, '.', sizeof(bord));

	srand((unsigned)time(NULL));
	char ch = 'A';

	

	

	

	
	int attempt = 0;

	char prevCh = 'A';

	int currentX = rand() % 10;
	int currentY = rand() % 10;

	int prevX = currentX;
	int prevY = currentY;

	bord[currentX][currentY] = prevCh;

	bool dir[4] = { false };

	while (true) {
		

		currentX = prevX;
		currentY = prevY;
		
		int direction = rand() % 4;
		switch (direction) {
		case 0:currentX = prevX+1;
			break;
		case 1:currentY = prevY+1;
			break;
		case 2:currentX =prevX-1;
			break;
		case 3:currentY = prevY-1;
			break;
		}

		if (dir[0] == true && dir[1] == true && dir[2] == true && dir[3] == true) {
			break;
		}

		if (currentX >= 10 || currentY >= 10 || currentX < 0 || currentY < 0 || bord[currentX][currentY] != '.') {
			dir[direction] = true;
			continue;
		}

	
		


		if (bord[currentX][currentY] == '.') {
			bord[currentX][currentY] = prevCh +1;
			memset(dir, false, sizeof(dir));
			prevX = currentX;
			prevY = currentY;
			prevCh = bord[currentX][currentY];
			if (prevCh == 'Z') break;
		}
			
		
		/*prevCh = currentCh;*/
		
	}




	for (int i = 0; i < 10; i++) {
		printf("\n");
		for (int j = 0; j < 10; j++) {
			printf("%c", bord[i][j]);
		}
	}
}