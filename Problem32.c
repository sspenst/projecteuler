/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long concat(long, long);
int different(long, int);
int nozero(long, int);

int main() {
	long i, j, sum = 0;
	
	for (i = 1; i < 9; i++) {
		for (j = 1234; j < 9876; j++) {
			if (nozero(j, 4) && different(j, 4) && different(concat(i, j), 5) && (i * j < 10000) && nozero(i * j, 4) && different(concat(concat(i, j), i * j), 9)) {
				printf("%li * %li = %li\n", i, j, i * j);
				sum += i * j;
			}
		}
	}

	for (i = 12; i < 98; i++) {
		for (j = 123; j < 987; j++) {
			if (nozero(i, 2) && nozero(j, 3) && different(i, 2) && different(j, 3) && different(concat(i, j), 5) && (i * j < 10000) && nozero(i * j, 4) && different(concat(concat(i, j), i * j), 9)) {
				printf("%li * %li = %li\n", i, j, i * j);
				sum += i * j;
			}
		}
	}

	printf("sum = %li\n", sum);

	system("pause");
	return 0;
}

long concat(long a, long b) {
	if (a < 10)
		return a * 10000 + b;
	else if (a < 100)
		return a * 1000 + b;
	else if (a < 100000)
		return a * 10000 + b;
	else
		return 0;
}

int different(long n, int digits) {
	int i, j;
	int *temp = (int*)malloc(digits*sizeof(int));

	for (i = 0; i < digits; i++) {
		temp[i] = n / (int)pow(10, digits - i - 1);
		n %= (int)pow(10, digits - i - 1);
	}

	for (i = 0; i < digits - 1; i++) {
		for (j = i + 1; j < digits; j++) {
			if (temp[i] == temp[j])
				return 0;
		}
	}
	return 1;
}

int nozero(long n, int digits) {
	int i;

	for (i = 0; i < digits; i++) {
		if (n % 10 == 0)
			return 0;
		n /= 10;
	}

	return 1;
}*/