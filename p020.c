/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "stringMath.h"

int main() {
	char one[MAXLENGTH], two[MAXLENGTH];
	long long sum = 0;

	for (int i = 0; i < MAXLENGTH; i++) {
		one[i] = 'a'; //populate first array with a's
		two[i] = '0'; //populate second array with 0's
	}

	one[0] = '1';

	for (int i = 1; i <= 100; i++) {
		multiply(one, two, i);
	}
	
	for (int i = 0; i < MAXLENGTH; i++) {
		if (one[i] != 'a') {
			sum += one[i] - '0';
		}
	}
	
	printf("%lld\n", sum);

	system("PAUSE");
	return 0;
}*/
