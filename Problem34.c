/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long factorial(long long);
int length(long long);
void sumfac(long long, int);

int main() {
	long long num;

	for (num = 10; num < 1000000; num++) {
		sumfac(num, length(num));
	}

	system("PAUSE");
	return 0;
}

void sumfac(long long num, int length) {
	int i;
	long long sum = 0;
	long long temp = num;

	for (i = 0; i < length; i++) {
		sum += factorial(num % 10);
		num /= 10;
	}

	if (sum == temp) {
		printf("%lld = ", temp);
		for (i = 0; i < length; i++) {
			printf("%d!", (int)(temp / (long long)pow(10, length - i - 1)));
			temp %= (long long)pow(10, length - i - 1);
			if (i == length - 1)
				printf("\n");
			else
				printf(" + ");
		}
	}
}

long long factorial(long long x) {
	long long total = 1;

	while (x > 1) {
		total *= x;
		x--;
	}

	return total;
}

int length(long long n) {
	int i = 1;
	
	while (i) {
		if (n < (long long)pow(10, i))
			return i;
		i++;
	}
}*/