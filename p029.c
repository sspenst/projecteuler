/*#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, d, terms = 0, pows[101][101], divd, divc;

	for (a = 0; a < 101; a++) {
		for (b = 0; b < 101; b++) {
			pows[a][b] = 1;
		}
	}

	for (a = 2; a < 101; a++) {
		divd = 1;
		for (d = a; d < 101; d *= a) {
			c = d*a;
			divc = 1 + divd;
			while (c < 101) {
				for (b = 2; b < 101; b++) {
					if ((b * divd) % divc == 0)
						pows[c][b * divd / divc] = 0;
				}
				divc++;
				c *= a;
			}
			divd++;
		}
	}

	for (a = 2; a < 101; a++) {
		for (b = 2; b < 101; b++) {
			terms += pows[a][b];
		}
	}

	printf("%d\n", terms);

	system("pause");
	return 0;
}*/