#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

void allocate_memory(void) {
	char* sto;

	sto = (char*)malloc(sizeof(char) * SIZE);
	if (sto == NULL)
	{
		puts("Memory error");
		return (1);
	}
	else
	{
		printf("%d of bytes of memory allocated at %p\n", SIZE, sto);
		fgets(sto, SIZE, stdin);
		printf("You typed: \n%s\n",sto);
	}
	return (0);
}