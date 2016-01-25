/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int trunctable(long);
int isPrime(long);
int length(long);

int main() {
	long n, sum = 0;

	for (n = 10; n < 1000000; n++) {
		if (trunctable(n)) {
			printf("%ld\n", n);
			sum += n;
		}
	}

	printf("sum = %ld\n", sum);

	system("pause");
	return 0;
}

int trunctable(long n) {
	int i, l = length(n);

	for (i = 0; i < l; i++) {
		if (!isPrime((long)(n % (int)pow(10, l - i))) || !isPrime((long)(n / (int)pow(10, i))))
			return 0;
	}

	return 1;
}

int isPrime(long num) {
	if (num < 2) {
		return 0;
	}

	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return 0;
		}
	}

	return 1;
}

int length(long n) {
	int i = 1;

	while (i) {
		if (n < (long)pow(10, i))
			return i;
		i++;
	}
}*/