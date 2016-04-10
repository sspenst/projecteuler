/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int isPrime(int);

int main(void) {
	int num = 2, i = 0;

	while (i < 10001) {
		if (isPrime(num))
			i++;
		num++;
	}

	num--;

	printf("%d\n", num);

	system("PAUSE");
	return 0;
}

int isPrime(int num) {
	if (num < 2) {
		return 0;
	}

	for (int i = 2; i < num / 2 + 1; i++) {
		if (num % i == 0) {
			return 0;
		}
	}

	return 1;
}*/