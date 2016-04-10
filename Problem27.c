/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int);

int main() {
	int a, b, n, maxn = 0, maxab = 0;

	for (b = 2; b <= 999; b++) {
		if (isPrime(b)) {
			for (a = -b + 1; a <= 999; a++) {
				n = 0;

				do {
					n++;
				} while (isPrime((n*n) + (a*n) + b));

				if (n > maxn) {
					maxn = n;
					maxab = a*b;
				}
			}
		}
	}

	printf("%d %d\n", maxn, maxab);

	system("pause");
	return 0;
}

int isPrime(int n) {
	if (n < 2)
		return 0;
	int i, k = (int)sqrt(n);
	for (i = 2; i <= k; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}*/