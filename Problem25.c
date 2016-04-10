/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "StringMath.h"

int main() {
	char num1[MAXLENGTH], num2[MAXLENGTH], temp[MAXLENGTH];
	long long count = 2;

	for (int i = 0; i < MAXLENGTH; i++) {
		num1[i] = 'a';
		num2[i] = 'a';
		temp[i] = '0';
	}

	num1[0] = num2[0] = '1';

	while (num2[999] == 'a') {
		add(num2, temp, num1);
		count++;
	}

	printf("%lld\n", count);
	
	system("PAUSE");
	return 0;
}*/