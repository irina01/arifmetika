#include <stdio.h>

int main(void) {
	int i = 365;
	int j = 7;
	i = i + j - i % j;
	printf("%i", i);
	return 0;
}

