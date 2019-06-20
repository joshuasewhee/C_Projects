#include <stdio.h>
#include <time.h>

#define ROWS 20
#define COLUMNS 2

void table(void) {
	int row, col;

	srand((unsigned)time(NULL));

	for (row = 0; row < ROWS; row++) {
		for (col = 0; col < COLUMNS; col++) {
			printf("%2d\t", rand() % 100);
		}
	putchar('\n');
	}

}