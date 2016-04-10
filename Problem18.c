/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	char tri[] = "75 "
		"95 64 "
		"17 47 82 "
		"18 35 87 10 "
		"20 04 82 47 65 "
		"19 01 23 75 03 34 "
		"88 02 77 73 07 63 67 "
		"99 65 04 28 06 16 70 92 "
		"41 41 26 56 83 40 80 70 33 "
		"41 48 72 33 47 32 37 16 94 29 "
		"53 71 44 65 25 43 91 52 97 51 14 "
		"70 11 33 28 77 73 17 78 39 68 17 57 "
		"91 71 52 38 17 14 91 43 58 50 27 29 48 "
		"63 66 04 68 89 53 67 30 73 16 69 87 40 31 "
		"04 62 98 27 23 09 70 98 73 93 38 53 60 04 23";

	int norm[15][15] = { 0 }, max[15][15] = { 0 }, triNum[15], sum = 0, maxSum = 0;

	for (int i = 1; i <= 15; i++) {
		sum += i;
		triNum[i - 1] = sum;
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j <= i; j++) {
			norm[i][j] = (tri[(triNum[i] - (i + 1)) * 3 + j * 3] - '0') * 10 + (tri[(triNum[i] - (i + 1)) * 3 + 1 + j * 3] - '0');
		}
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			max[i][j] = norm[i][j];
		}
	}

	for (int i = 1; i < 15; i++) {
		max[i][0] += max[i - 1][0];
		max[i][i] += max[i - 1][i - 1];
	}

	for (int i = 2; i < 15; i++) {
		for (int j = 1; j < i; j++) {
			if (max[i - 1][j - 1] > max[i - 1][j])
				max[i][j] += max[i - 1][j - 1];
			else
				max[i][j] += max[i - 1][j];
		}
	}

	for (int i = 0; i < 15; i++) {
		if (max[14][i] > maxSum) {
			maxSum = max[14][i];
		}
	}

	printf("%d\n", maxSum);

	system("PAUSE");
	return 0;
}*/