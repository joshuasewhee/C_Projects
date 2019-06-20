#include <stdio.h>

// This file contains some character manipulation functions.

int isUpperCase(int ch) {
	if (ch < 'A' || ch > 'Z') {
		return (0);
	}
	else {
		// puts("upper");
		return (1);
	}
}

int isLowerCase(int ch) {
	if (ch < 'a' || ch > 'z') {
		return (0);
	}
	else {
		return (1);
	}
}

void printMe(void) {
	int ch;

	do {
		ch = getchar();
		if (isUpperCase(ch)) {
			putchar(ch);
		}
	} while (ch != '\n');
}

void rightJustify(char string[], char lenJustify) {
	printf("%*s\n", lenJustify, string);
}
