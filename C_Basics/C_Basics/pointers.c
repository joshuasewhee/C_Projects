#include <stdio.h>
#include <string.h>

void pointerString(void) {
	char pokey[] = "Testing 1";
	char *p;

	p = &pokey;

	printf("The address of 'pokey' is %p\n", &pokey);
	printf("The contents of 'pokey' is %s\n", pokey);
	
	printf("The address of 'pokey' is %p\n", p);
	for (int i = 0; i < (sizeof(pokey)); i++) {
		printf("The contents of 'pokey' is %c\n", *p++);
	}
	
}

void pointerInt(void) {
	int pokey;
	int* p;

	pokey = 984;
	p = &pokey;

	printf("The address of 'pokey' is %p\n", &pokey);
	printf("The contents of 'pokey' is %d\n", pokey);

	printf("The address of 'pokey' is %p\n", p);
	printf("The contents of 'pokey' is %d\n", *p);
}
