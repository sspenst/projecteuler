/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define LIMIT 1000000

void indexToEnd(int[], int);

int main() {
	long long fact[10], part = 1;
	int num[10], i, j;

	for (i = 1; i <= 10; i++) {
		num[i - 1] = i - 1;
		part *= i;
		fact[i - 1] = part;
	}

	part = 0;

	for (i = 8; i >= 0; i--) {
		j = 0;
		while (j*fact[i] + part < LIMIT) {
			j++;
		}
		indexToEnd(num, j - 1);
		part += (j - 1)*fact[i];
	}

	indexToEnd(num, 0);

	for (i = 0; i < 10; i++) {
		printf("%d", num[i]);
	}

	printf("\n");

	system("PAUSE");
	return 0;
}

void indexToEnd(int num[10], int index) {
	int temp = num[index];

	for (int i = index + 1; i < 10; i++) {
		num[i - 1] = num[i];
	}

	num[9] = temp;
}*/