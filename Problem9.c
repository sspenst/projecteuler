/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a = 1, b = 1, c = 1;

	for (int a = 1; a <= 998; a++) {
		for (int b = 1; b <= 998; b++) {
			for (int c = 1; c <= 998; c++) {
				if (a + b + c == 1000 && a*a + b*b == c*c) {
					printf("a = %d\nb = %d\nc = %d\n", a, b, c);
					a = b = c = 1000;
				}
			}
		}
	}

	system("PAUSE");
	return 0;
}*/