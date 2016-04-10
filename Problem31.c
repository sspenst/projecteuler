/*#include <stdio.h>
#include <stdlib.h>

int main() {
	int type[8] = { 200, 100, 50, 20, 10, 5, 2, 1 };
	int coins[200] = { 0 };
	int i, j, k, total = 1, ke;

	coins[0] = 200;

	while (coins[199] != 1) {
		i = 199;
		while (coins[i] <= 1) {
			coins[i] = 0;
			i--;
		}

		j = 0;
		while (type[j] != coins[i]) {
			j++;
		}

		coins[i] = 0;

		for (j += 1; j < 8; j++) {
			ke = (200 - sum(coins)) / type[j];
			for (k = 0; k < ke; k++) {
				coins[i] = type[j];
				i++;
			}
		}

		total++;
	}

	printf("%d\n", total);

	system("pause");
	return 0;
}

int sum(int coins[]) {
	int i, sum = 0;

	for (i = 0; i < 200; i++) {
		sum += coins[i];
	}

	return sum;
}*/