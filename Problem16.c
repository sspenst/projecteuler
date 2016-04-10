/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define MAXLENGTH 1000

void multiply(char[], char[], int);

int main(void) {
	char one[MAXLENGTH], two[MAXLENGTH];
	long long sum = 0;

	for (int i = 0; i < MAXLENGTH; i++) {
		one[i] = 'a';
		two[i] = '0';
	}

	one[0] = '2';

	for (int i = 1; i < MAXLENGTH; i++) {
		multiply(one, two, 2);
	}

	for (int i = 0; i < MAXLENGTH; i++) {
		if (one[i] != 'a') {
			sum += one[i] - '0';
		}
	}

	printf("%lld\n", sum);

	system("PAUSE");
	return 0;
}

void multiply(char one[], char two[], int num) {
	int i = 0;

	while (one[i] != 'a') {
		two[i] = two[i] - '0' + ((one[i] - '0') * num % 10) + '0';
		two[i + 1] = two[i + 1] - '0' + ((one[i] - '0') * num / 10) + '0';
		i++;
	}

	for (int j = 0; j <= i; j++) {
		if (j == i && two[j] == '0')
			break;
		one[j] = two[j];
		two[j] = '0';
	}
}*/