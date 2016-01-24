/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	long long num = 600851475143;
	long long max = 0;

	for (long long div = 2; num > 1 && div <= num; div++) {
		if (num % div == 0) {
			num /= div;
			max = div;
			div--;
		}
	}

	printf("%d\n", max);
	
	system("PAUSE");
	return 0;
}*/