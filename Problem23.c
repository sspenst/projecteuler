/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define LIMIT 28123

int abundant(long long);

int main() {	
	int num[LIMIT] = { 0 }, index = 0, sum[LIMIT] = { 0 };
	long long total = 0;

	for (int i = 1; i <= LIMIT; i++) {
		if (abundant(i)) {
			num[index] = i;
			index++;
		}
	}

	for (int i = 0; i < index; i++) {
		for (int j = i; j < index; j++) {
			if (num[i] + num[j] > LIMIT)
				j = index;
			else
				sum[num[i] + num[j] - 1] = 1;
		}
	}

	for (int i = 0; i < LIMIT; i++) {
		if (sum[i] == 0)
			total += i + 1;
	}

	printf("%lli\n", total);

	system("PAUSE");
	return 0;
}

int abundant(long long num) {
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

	if (sum > num)
		return 1;
	else
		return 0;
}*/