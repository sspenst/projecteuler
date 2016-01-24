/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define LIMIT 2000000
// long nums[LIMIT - 2]; /* Method 1 */
/*
int isPrime(long long);

int main(void) {
	long long sum = 5; /* Already account for prime numbers 2 and 3. The rest of the primes are in the form 6k +/- 1. */
	
	/* Sieve of Eratosthenes Method
	for (long i = 0; i < LIMIT - 2; i++)
		nums[i] = i + 2;

	for (long j = 2; j < LIMIT / 2; j++) {
		for (long k = 0; k < LIMIT - 2; k++) {
			if (nums[k] > j && nums[k] % j == 0) {
				nums[k] = -1;
			}
		}
	}

	for (long l = 0; l < LIMIT - 2; l++) {
		if (nums[l] != -1) {
			sum += nums[l];
		}
	}
	*/
/*
	for (long long i = 5; i < LIMIT; i++)
		if (isPrime(i))
			sum += i;

	printf("%lld\n", sum);

	system("PAUSE");
	return 0;
}

/* Method 2 uses this efficient prime checking function *//*
int isPrime(long long num) {
	if (num % 2 == 0 || num % 3 == 0)
		return 0;

	for (long long i = 5; i * i <= num; i += 6)
		if (num % i == 0 || num % (i + 2) == 0)
			return 0;

	return 1;
}*/