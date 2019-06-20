#include <stdio.h>

#define INPUT_MAX 64

// This file contains a simple function

void evaluate(int num) {
	if (num > 10) {
		printf("%i is greater than 10.", num);
	}
	else if (num < 10) {
		printf("%i is less than 10.", num);

	}
	else if (num == 10){
		printf("%i is equal to 10.", num);
	}
	putchar('\n');
}

void instructions(void) {
	char input[INPUT_MAX];

	printf("Instructions: ");
	fgets(input, INPUT_MAX, stdin);
	puts("Thank you! Here are your instructions:");
	puts(input);
	return (0);
}