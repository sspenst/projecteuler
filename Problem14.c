/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define LIMIT 1000000

int nums[LIMIT] = { 0 };

int main(void) {
	long long temp, maxIndex = 0;
	int chain, max = 0;
	
	nums[1] = 1;
	nums[2] = 2;

	for (long long i = 3; i < LIMIT; i++) {
		chain = 0;
		temp = i;

		while (temp != 1) {
			if (temp < i) {
				chain += nums[temp];
				break;
			}
			if (temp % 2 == 0) {
				temp /= 2;
			}
			else {
				temp = 3 * temp + 1;
			}
			chain++;
		}

		nums[i] = chain;

		if (chain > max) {
			max = chain;
			maxIndex = i;
		}
	}

	printf("Longest chain: %lld - %d\n", maxIndex, max);

	system("PAUSE");
	return 0;
}*/