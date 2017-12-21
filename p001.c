/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int sum = 0, multiple = 1;

	while (3 * multiple < 1000) {
		sum += 3 * multiple;
		multiple++;
	}

	multiple = 1;

	while (5 * multiple < 1000) {
		if ((5 * multiple) % 3 != 0)
			sum += 5 * multiple;
		multiple++;
	}

	printf("%d\n", sum);
	system("PAUSE");
	return 0;
}*/