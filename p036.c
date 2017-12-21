/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int palindrome(unsigned long long, int);
int palindrome_b(long);
void decToBin(long);
int decimalLength(long);
int binaryLength(long);

int main() {
	long i, sum = 0;

	for (i = 0; i < 1000000; i++) {
		if (palindrome((unsigned long long)i, decimalLength(i)) && palindrome_b(i)) {
			printf("%ld\t\t", i);
			decToBin(i);
			printf("\n");
			sum += i;
		}
	}
	
	printf("\nsum = %ld\n", sum);

	system("pause");
	return 0;
}

int palindrome(unsigned long long n, int length) {
	int i;

	for (i = 0; i < length/2; i++) {
		if ((n / (unsigned long long)pow(10, length - i - 1)) % 10 != (n / (unsigned long long)pow(10, i)) % 10)
			return 0;
	}

	return 1;
}

int palindrome_b(long n) {
	int i, length = binaryLength(n);
	char *bin = (char*)calloc(20, sizeof(char));

	for (i = 0; i < 20; i++) {
		bin[i] = (n >> i) & 1;
	}

	for (i = 0; i < length / 2; i++) {
		if (bin[i] != bin[length - i - 1])
			return 0;
	}

	return 1;
}

void decToBin(long n) {
	int i, b, f = 0;

	for (i = 19; i >= 0; i--) {
		b = (n >> i) & 1;
		if (b != 0)
			f = 1;
		if (f == 1 || i == 0)
			printf("%d", (n >> i) & 1);
	}
}

int decimalLength(long n) {
	int i = 1;

	while (i) {
		if (n < (long)pow(10, i))
			return i;
		i++;
	}
}

int binaryLength(long n) {
	long i = 1, c = 0;

	while (i <= n) {
		i *= 2;
		c++;
	}

	return c;
}*/