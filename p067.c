/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main() {
	FILE* inFile = fopen("files\\triangle.txt", "r");

	if (inFile == NULL) {
		printf("Error opening file.\n");
		system("PAUSE");
		return 0;
	}

	int norm[SIZE][SIZE] = { 0 }, temp = 0;
	long long max[SIZE][SIZE] = { 0 }, maxSum = 0;

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j <= i; j++) {
			if (fscanf(inFile, "%d", &temp) == 1)
				max[i][j] = norm[i][j] = temp;
		}
	}

	for (int i = 1; i < SIZE; i++) {
		max[i][0] += max[i - 1][0];
		max[i][i] += max[i - 1][i - 1];
	}

	for (int i = 2; i < SIZE; i++) {
		for (int j = 1; j < i; j++) {
			if (max[i - 1][j - 1] > max[i - 1][j])
				max[i][j] += max[i - 1][j - 1];
			else
				max[i][j] += max[i - 1][j];
		}
	}

	for (int i = 0; i < SIZE; i++) {
		if (max[SIZE - 1][i] > maxSum) {
			maxSum = max[SIZE - 1][i];
		}
	}

	printf("%lld\n", maxSum);
	
	system("PAUSE");
	return 0;
}*/
