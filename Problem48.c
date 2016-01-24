/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "StringMath.h"

int main() {
	char total[MAXLENGTH], part[MAXLENGTH], temp[MAXLENGTH], num[MAXLENGTH], one[MAXLENGTH];

	for (int i = 0; i < MAXLENGTH; i++) {
		total[i] = part[i] = num[i] = one[i] = 'a';
		temp[i] = '0';
	}

	total[0] = part[0] = num[0] = '0';
	one[0] = '1';

	for (int i = 0; i < 1000; i++) {
		add(num, temp, one);

		for (int k = 0; k < MAXLENGTH; k++) {
			part[k] = num[k];
		}

		for (int j = 0; j < i; j++) {
			multiply(part, temp, i + 1);
		}

		add(total, temp, part);
	}

	for (int i = 0; i < MAXLENGTH; i++) {
		printf("%c", total[MAXLENGTH - 1 - i]);
	}

	system("PAUSE");
	return 0;
}*/