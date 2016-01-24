/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAXLENGTH 6

int isPalindrome(long);

int main(void) {
	int num1, num2, max = 0, maxnum1, maxnum2;

	for (num1 = 1; num1 < 1000; num1++) {
		for (num2 = num1; num2 < 1000; num2++) {
			if (isPalindrome(num1*num2) && num1*num2 > max) {
				max = num1*num2;
				maxnum1 = num1;
				maxnum2 = num2;
			}
		}
	}

	printf("%d = %d * %d\n", max, maxnum1, maxnum2);

	system("PAUSE");
	return 0;
}

int isPalindrome(long num) {
	int length = (int)log10(num) + 1;
	int digit[MAXLENGTH] = { 0 };
	int i = MAXLENGTH - 1;

	while (num > 0) {
		digit[i] = num % 10;
		num /= 10;
		i--;
	}

	int j = 0;

	while (MAXLENGTH - length + j < MAXLENGTH - 1 - j) {
		if (digit[MAXLENGTH - length + j] != digit[MAXLENGTH - 1 - j])
			return 0;
		j++;
	}

	return 1;
}*/