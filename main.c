#include <stdio.h>

int main(void) {
	printf("Version 2\n");
	for (int i = 0; i < 10; i++) {
		if (i % 2 != 0) printf("Hello, world!\n");
	}
	return 0;
}
