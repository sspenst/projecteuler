/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int different(long long);
long long concat(long long, long);
int length(long long);

int main() {
	long long max = 0;
	long long result;
	int n, i;

	for (n = 1; n < 10000; n++) {
		result = 0;
		i = 0;
		while (length(result) < 9) {
			result = concat(result, n * i);
			i++;
		}
		if (length(result) == 9 && different(result)) {
			printf("%lld\n", result);
			if (result > max)
				max = result;
		}
	}

	printf("max = %lld\n", max);

	system("pause");
	return 0;
}

int different(long long n) {
	int nums[10] = { 0 };
	int i;

	for (i = 0; i < 9; i++) {
		nums[n % 10]++;
		n /= 10;
	}

	if (nums[0] != 0)
		return 0;

	for (i = 1; i <= 9; i++) {
		if (nums[i] != 1)
			return 0;
	}

	return 1;
}

long long concat(long long a, long b) {
	return a * (long long)pow(10, length(b)) + b;
}

int length(long long n) {
	int i = 1;

	while (i) {
		if (n < (long long)pow(10, i))
			return i;
		i++;
	}
}*/