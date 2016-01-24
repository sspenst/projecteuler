/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int fiba = 1, fibb = 2, sum = 0;

	while (fiba < 4000000 && fibb < 4000000) {
		if (fiba % 2 == 0) {
			sum += fiba;
		}
		else if (fibb % 2 == 0) {
			sum += fibb;
		}
		fiba += fibb;
		fibb += fiba;
	}

	printf("%d\n", sum);

	system("PAUSE");
	return 0;
}*/