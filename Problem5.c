/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int checkDiv(long);

int main(void) {
	long num = 20;

	while (!checkDiv(num))
		num += 20;
	
	printf("%d\n", num);

	system("PAUSE");
	return 0;
}

int checkDiv(long num) {
	for (int div = 2; div <= 20; div++)
		if (num % div != 0)
			return 0;

	return 1;
}*/