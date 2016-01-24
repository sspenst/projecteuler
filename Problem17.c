/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int let[1001] = { 0 };
	long long sum = 0;

	let[1] = 3;
	let[2] = 3;
	let[3] = 5;
	let[4] = 4;
	let[5] = 4;
	let[6] = 3;
	let[7] = 5;
	let[8] = 5;
	let[9] = 4;
	let[10] = 3;
	let[11] = 6;
	let[12] = 6;
	let[13] = 8;
	let[14] = 8;
	let[15] = 7;
	let[16] = 7;
	let[17] = 9;
	let[18] = 8;
	let[19] = 8;
	let[20] = 6;
	let[30] = 6;
	let[40] = 5;
	let[50] = 5;
	let[60] = 5;
	let[70] = 7;
	let[80] = 6;
	let[90] = 6;
	let[100] = 10;
	let[1000] = 11;
	
	for (int i = 21; i < 100; i++) {
		if (i % 10 != 0) {
			let[i] = let[i / 10 * 10] + let[i % 10];
		}
	}

	for (int i = 100; i < 1000; i++) {
		if (i % 100 == 0) {
			let[i] = let[100] - let[1] + let[i / 100];
		}
		else {
			let[i] = let[i / 100 * 100] + 3 + let[i - i / 100 * 100];
		}
	}

	for (int i = 1; i <= 1000; i++) {
		sum += let[i];
	}

	printf("%lld\n", sum);

	system("PAUSE");
	return 0;
}*/