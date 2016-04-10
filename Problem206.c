/*#include <stdio.h>
#include <stdlib.h>

int isNum(unsigned long long);

int main() {
	unsigned long long num = 1000000000;

	while (1) {
		if (isNum(num*num))
			break;
		num += 10;
	}

	printf("%llu\n", num);

	system("pause");
	return 0;
}

int isNum(unsigned long long num) {
	int i;
	
	if (num % 10 != 0)
		return 0;
	num /= 100;

	for (i = 9; i >= 1; i--) {
		if (num % 10 != i)
			return 0;
		num /= 100;
	}

	return 1;
}*/