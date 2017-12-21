#include <math.h>

#define MAXLENGTH 3100

// Adds num1 to num2 and stores the answer in temp. Replaces num1 with num2 (doesn't when that line is commented out) and num2 with temp and resets temp.
void add(char num2[], char temp[], char num1[]) {
	int i = 0, lim = 0;

	while (num2[i] != 'a' || num1[i] != 'a') {
		if (num1[i] == 'a') {
			temp[i] += num2[i] - '0';
		}
		else if (num2[i] == 'a') {
			temp[i] += num1[i] - '0';
		}
		else {
			temp[i] += (num1[i] + num2[i] - 2 * '0') % 10;
			temp[i + 1] += (num1[i] + num2[i] - 2 * '0') / 10;
		}
		if (temp[i] > '9') {
			temp[i + 1]++;
			temp[i] -= 10;
		}
		i++;
	}

	for (int j = 0; j < MAXLENGTH; j++) {
		if (temp[MAXLENGTH - 1 - j] != '0') {
			lim = MAXLENGTH - j;
			break;
		}
	}

	for (int k = 0; k < lim; k++) {
		//num1[k] = num2[k];
		num2[k] = temp[k];
		temp[k] = '0';
	}
}

//Multiplies one by num and stores the answer in two. Replaces one with two and resets two.
void multiply(char one[], char two[], int num) {
	int i = 0, lim = 0;

	while (one[i] != 'a') {
		for (int j = 0; j <= (int)log10((double)((one[i] - '0') * num)); j++) {
			two[i + j] = two[i + j] + ((one[i] - '0') * num / (int)pow(10.0, j) % 10);
			if (two[i + j] > '9') {
				two[i + j + 1]++;
				two[i + j] -= 10;
			}
		}
		i++;
	}

	for (int j = 0; j < MAXLENGTH; j++) {
		if (two[MAXLENGTH - 1 - j] != '0') {
			lim = MAXLENGTH - j;
			break;
		}
	}

	for (int k = 0; k < lim; k++) {
		one[k] = two[k];
		two[k] = '0';
	}
}