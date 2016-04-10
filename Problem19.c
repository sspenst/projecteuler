/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	// sunday is day 0
	int weekday = 2, month = 1, year = 1901;
	long sundays = 0;

	while (year < 2001) {
		if (month == 2) {
			if (year % 4 == 0) {
				weekday += 29;
				weekday %= 7;
			}
			else {
				weekday += 28;
				weekday %= 7;
			}
		}
		else if (month != 4 && month != 6 && month != 9 && month != 11) {
			weekday += 31;
			weekday %= 7;
		}
		else {
			weekday += 30;
			weekday %= 7;
		}

		if (weekday == 0)
			sundays++;

		if (month == 12) {
			month = 1;
			year++;
		}
		else
			month++;
	}

	printf("%li\n", sundays);

	system("PAUSE");
	return 0;
}*/