/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

int main(void) {
	long long pasc[SIZE + 1][SIZE + 1] = { 0 };

	for (int i = 0; i <= SIZE; i++) {
		for (int j = 0; j <= SIZE; j++) {
			pasc[i][j] = 1;
		}
		pasc[i][0] = 1;
	}
	
	for (int i = 1; i <= SIZE; i++) {
		for (int j = 1; j <= SIZE; j++) {
			pasc[i][j] = pasc[i - 1][j] + pasc[i][j - 1];
		}
	}

	printf("%llu\n", pasc[SIZE][SIZE]);

	system("PAUSE");
	return 0;
}*/