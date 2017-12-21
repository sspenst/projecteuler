/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

long long d(int);

int main() {
	long long sum = 0;

	for (long long i = 2; i < 10000; i++) {
		if (i == d(d(i)) && i != d(i)) {
			sum += i;
		}
	}

	printf("%lld\n", sum);

	system("PAUSE");
	return 0;
}

long long d(int num) {
	long long sum = 1;

	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			sum += i;
			sum += num / i;
		}

		if (i * i == num) {
			sum -= i;
		}
	}

	return sum;
}*/