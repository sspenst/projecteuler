/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	long trinum = 0;
	int factors = 0, max = 0, i = 1;

	while (factors <= 500) {
		factors = 0;

		trinum += i;

		for (int div = 1; div * div <= trinum; div++) {
			if (trinum % div == 0) {
				factors += 2;
			}

			if (div * div == trinum) {
				factors--;
			}
		}

		if (factors > max) {
			max = factors;
			printf("Factors: %d\nNumber: %d\n", factors, trinum);
		}

		i++;
	}

	system("PAUSE");
	return 0;
}*/