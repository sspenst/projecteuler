/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* inFile = fopen("Files\\names.txt", "r");

	if (inFile == NULL) {
		printf("Error opening file.\n");
		system("PAUSE");
		return 0;
	}

	char name[5163][15], x, temp[15];
	int i = 0, j = 0, k, l;
	long long total = 0, score = 0;

	while (fscanf(inFile, "%c", &x) == 1) {
		if (x != '"' && x != ',') {
			name[i][j] = x;
			j++;
		}
		if (x == ',') {
			i++;
			j = 0;
		}
	}
	
	for (i = 1; i < 5163; i++) {
		for (j = 0; j < 15; j++) {
			temp[j] = name[i][j];
		}

		for (k = 1; k <= i; k++) {
			for (j = 0; j < 15; j++) {
				if (name[i - k][j] < temp[j]) {
					for (l = 0; l < 15; l++) {
						name[i - k + 1][l] = temp[l];
					}
					k = i + 2;
					j = 15;
					break;
				}


				if (name[i - k][j] > temp[j]) {
					for (l = 0; l < 15; l++) {
						name[i - k + 1][l] = name[i - k][l];
					}
					j = 15;
				}

			}
		}

		if (k - 1 == i) {
			for (j = 0; j < 15; j++) {
				name[0][j] = temp[j];
			}
		}
	}

	for (i = 0; i < 5163; i++) {
		for (j = 0; j < 15; j++) {
			if (name[i][j] < 65 || name[i][j] > 90)
				break;
			score += name[i][j] - 64;
		}
		total += score * (i + 1);
		score = 0;
	}
	
	for (i = 0; i < 5163; i++) {
		for (j = 0; j < 15; j++) {
			printf("%c", name[i][j]);
		}
		printf("\n");
	}

	printf("%lld", total);

	system("PAUSE");
	return 0;
}*/