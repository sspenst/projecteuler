/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define LIMIT 100

int main(void) {
	int sum1 = 0, sum2 = 0;

	/* Brute Force
	for (int i = 1; i <= 100; i++) {
		sum1 += i*i;
		sum2 += i;
	}
	*/
/*
	sum1 = LIMIT * (LIMIT + 1) / 2;
	sum2 = LIMIT * (LIMIT + 1) * (2 * LIMIT + 1) / 6;

	printf("%d\n", sum1*sum1 - sum2);

	system("PAUSE");
	return 0;
}*/