/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	long long total = 0, sum = 0;

	for (long long i = 2; i < 1000000; i++) {
		for (int j = 0; j < 6; j++) {
			sum += (int)pow(i / (int)pow(10, 5 - j) % 10, 5);
		}
		if (sum == i) {
			total += sum;
			printf("%lli\n", sum);
		}
		sum = 0;
	}

	printf("%lli\n", total);

	system("PAUSE");
	return 0;
}*/