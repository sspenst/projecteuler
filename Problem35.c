/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(long);
long rotate(long);
int length(long);

int main() {
	long n, temp;
	int i, flag, count = 0;

	for (n = 1; n < 1000000; n++) {
		temp = n;
		flag = 1;
		for (i = 0; i < length(n); i++) {
			if (!isPrime(temp))
				flag = 0;
			temp = rotate(temp);
		}
		if (flag == 1) {
			count++;
			printf("%ld\n", n);
		}
	}

	printf("Count = %d\n", count);

	system("pause");
	return 0;
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

long rotate(long n) {
	int size = length(n);
	int digit = (int)(n % 10);
	n /= 10;
	return n + (long)pow(10, size - 1) * digit;
}

int length(long n) {
	int i = 1;

	while (i) {
		if (n < (long)pow(10, i))
			return i;
		i++;
	}
}*/