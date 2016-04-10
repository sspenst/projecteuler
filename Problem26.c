/*#include <stdio.h>
#include <stdlib.h>

#define DIGITS 10000

int two_or_five(int);
void divide(int[], int);
void display(int[]);
int repetition(int[]);

int main() {
	int num[DIGITS] = { 0 }, d, max = 1, maxindex = 1;

	for (d = 2; d < 1000; d++) {
		if (!two_or_five(d)) {
			divide(num, d);
			if (repetition(num) > max) {
				max = repetition(num);
				maxindex = d;
			}
		}
	}

	printf("Number: 1/%d\nDigits in the recurring cycle %d\n", maxindex, max);

	system("pause");
	return 0;
}

// returns 1 if the number is divisible by 2 or 5
int two_or_five(int n) {
	while (n > 1) {
		if (n % 2 == 0)
			n /= 2;
		else if (n % 5 == 0)
			n /= 5;
		else
			return 0;
	}
	return 1;
}

void divide(int num[], int n) {
	int i, rmdr = 1;

	for (i = 0; i < DIGITS; i++) {
		rmdr *= 10;
		num[i] = rmdr / n;
		rmdr = rmdr % n;
	}
}

void display(int num[]) {
	int i;

	for (i = 0; i < DIGITS; i++) {
		printf("%d", num[i]);
	}
	
	printf("\n");
}

int repetition(int num[]) {
	int i, j, flag;

	for (i = 1; i < DIGITS; i++) { // number of digits in the recurring cycle
		flag = 1;
		for (j = 25; j < 25 + i; j++) { // index of the num[]
			if (num[j] != num[j + i])
				flag = 0;
		}
		if (flag == 1)
			return i;
	}
}*/