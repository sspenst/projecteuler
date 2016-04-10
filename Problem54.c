#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int rank(char**);
int compare(char**, char**, int);

int main() {
	FILE* inFile = fopen("Files\\p054_poker.txt", "r");

	if (inFile == NULL) {
		printf("Error opening file.\n");
		system("PAUSE");
		return 0;
	}
	
	char* hand1[5];
	char* hand2[5];
	int rank1, rank2, wins = 0;

	for (int i = 0; i < 5; i++) {
		hand1[i] = (char*)malloc(3 * sizeof(char));
	}

	for (int i = 0; i < 5; i++) {
		hand2[i] = (char*)malloc(3 * sizeof(char));
	}

	for (int i = 0; i < 1000; i++) {
		for (int a = 0; a < 5; a++)
			fscanf(inFile, "%s", hand1[a]);
		for (int b = 0; b < 5; b++)
			fscanf(inFile, "%s", hand2[b]);
		rank1 = rank(hand1);
		rank2 = rank(hand2);
		if (rank1 > rank2 || (rank1 == rank2 && compare(hand1, hand2, rank1)))
			wins++;
	}

	printf("Player 1 wins: %d\n", wins);

	system("pause");
	return 0;
}

/* Ranks a given hand in the following manner:
 * 9 - Straight Flush
 * 8 - Four of a Kind
 * 7 - Full House
 * 6 - Flush
 * 5 - Straight
 * 4 - Three of a Kind
 * 3 - Two Pairs
 * 2 - One Pair
 * 1 - High Card
 */
int rank(char** hand) {
	int cards[13] = { 0 };
	int suits[4] = { 0 };

	/* check how many of each suit there are */
	for (int i = 0; i < 5; i++) {
		switch (hand[i][1]) {
			case 'C': suits[0]++; break;
			case 'D': suits[1]++; break;
			case 'H': suits[2]++; break;
			case 'S': suits[3]++; break;
		}
	}

	/* check how many of each card there are */
	for (int i = 0; i < 5; i++) {
		if (hand[i][0] >= '2' && hand[i][0] <= '9')
			cards[hand[i][0] - 50]++;
		else if (hand[i][0] == 'T')
			cards[8]++;
		else if (hand[i][0] == 'J')
			cards[9]++;
		else if (hand[i][0] == 'Q')
			cards[10]++;
		else if (hand[i][0] == 'K')
			cards[11]++;
		else
			cards[12]++;
	}

	/* determine the rank of the hand */
	for (int i = 0; i < 13; i++) {
		/* four of a kind */
		if (cards[i] == 4)
			return 8;

		/* three of the same card */
		else if (cards[i] == 3) {
			/* full house if there is also a two of a kind */
			for (int j = 0; j < 13; j++) {
				if (cards[i] == 2)
					return 7;
			}
			/* just a three of a kind */
			return 4;
		}

		/* two of the same card */
		else if (cards[i] == 2) {
			for (int j = 0; j < 13; j++) {
				/* full house if there is also a three of a kind */
				if (cards[j] == 3)
					return 7;
				/* two pair */
				else if (j > i && cards[j] == 2)
					return 3;
			}
			/* one pair */
			return 2;
		}

		/* check if there are 5 ones in a row */
		else if (cards[i] == 1 && i < 9) {
			int j;
			for (j = i + 1; j < i + 5; j++) {
				if (cards[j] != 1)
					break;
			}
			if (j == i + 5) {
				for (int k = 0; k < 4; k++) {
					/* straight flush if there are 5 of the same suit */
					if (suits[k] == 5)
						return 9;
				}
				/* just a straight otherwise */
				return 5;
			}
		}
	}

	/* check for flush */
	for (int i = 0; i < 4; i++) {
		if (suits[i] == 5)
			return 6;
	}

	/* high card */
	return 1;
}

/* compares two hands of equal rank
 * returns 1 if the first hand is better
 * than the second hand, and 0 otherwise
 */
int compare(char** hand1, char** hand2, int rank) {
	int cards1[13] = { 0 };
	int suits1[4] = { 0 };
	int cards2[13] = { 0 };
	int suits2[4] = { 0 };

	/* check how many of each suit there are */
	for (int i = 0; i < 5; i++) {
		switch (hand1[i][1]) {
		case 'C': suits1[0]++; break;
		case 'D': suits1[1]++; break;
		case 'H': suits1[2]++; break;
		case 'S': suits1[3]++; break;
		}
		switch (hand2[i][1]) {
		case 'C': suits2[0]++; break;
		case 'D': suits2[1]++; break;
		case 'H': suits2[2]++; break;
		case 'S': suits2[3]++; break;
		}
	}

	/* check how many of each card there are */
	for (int i = 0; i < 5; i++) {
		if (hand1[i][0] >= '2' && hand1[i][0] <= '9')
			cards1[hand1[i][0] - 50]++;
		else if (hand1[i][0] == 'T')
			cards1[8]++;
		else if (hand1[i][0] == 'J')
			cards1[9]++;
		else if (hand1[i][0] == 'Q')
			cards1[10]++;
		else if (hand1[i][0] == 'K')
			cards1[11]++;
		else
			cards1[12]++;
	}

	for (int i = 0; i < 5; i++) {
		if (hand2[i][0] >= '2' && hand2[i][0] <= '9')
			cards2[hand2[i][0] - 50]++;
		else if (hand2[i][0] == 'T')
			cards2[8]++;
		else if (hand2[i][0] == 'J')
			cards2[9]++;
		else if (hand2[i][0] == 'Q')
			cards2[10]++;
		else if (hand2[i][0] == 'K')
			cards2[11]++;
		else
			cards2[12]++;
	}
	
	/* decide which of the two hands is better depending on the rank */
	switch (rank) {
	case 1:
		for (int i = 12; i >= 0; i--) {
			if (cards1[i] == 1)
				return 1;
			else if (cards2[i] == 1)
				return 0;
		}
	case 2:
		for (int i = 12; i >= 0; i--) {
			if (cards1[i] == 2 && cards2[i] == 2)
				for (int j = 12; j >= 0; j--) {
					if (cards1[j] == 1)
						return 1;
					else if (cards2[j] == 1)
						return 0;
				}
			else if (cards1[i] == 2)
				return 1;
			else if (cards2[i] == 2)
				return 0;
		}
	case 3:
		for (int i = 12; i >= 0; i--) {
			if (cards1[i] == 2 && cards2[i] == 2) {
				for (int j = i - 1; j >= 0; j--) {
					if (cards1[j] == 2 && cards2[j] == 2) {
						for (int k = 12; k >= 0; k--) {
							if (cards1[k] == 1)
								return 1;
							else if (cards2[k] == 1)
								return 0;
						}
					}
					else if (cards1[j] == 2)
						return 1;
					else if (cards2[j] == 2)
						return 0;
				}
			}
			else if (cards1[i] == 2)
				return 1;
			else if (cards2[i] == 2)
				return 0;
		}
	case 4:
		for (int i = 12; i >= 0; i--) {
			if (cards1[i] == 3 && cards2[i] == 3) {
				for (int j = 12; j >= 0; j--) {
					if (cards1[j] == 1)
						return 1;
					else if (cards2[j] == 1)
						return 0;
				}
			}
			else if (cards1[i] == 3)
				return 1;
			else if (cards2[i] == 3)
				return 0;
		}
	case 5:
		for (int i = 12; i >= 0; i--) {
			if (cards1[i] == 1)
				return 1;
			else if (cards2[i] == 1)
				return 0;
		}
	case 6:
		/* doesn't work in all flush cases */
		for (int i = 12; i >= 0; i--) {
			if (cards1[i] == 1)
				return 1;
			else if (cards2[i] == 1)
				return 0;
		}
	case 7:
		for (int i = 12; i >= 0; i--) {
			if (cards1[i] == 3 && cards2[i] == 3) {
				for (int j = 12; j >= 0; j--) {
					if (cards1[j] == 2)
						return 1;
					else if (cards2[j] == 2)
						return 0;
				}
			}
			else if (cards1[i] == 3)
				return 1;
			else if (cards2[i] == 3)
				return 0;
		}
	case 8:
		for (int i = 12; i >= 0; i--) {
			if (cards1[i] == 4 && cards2[i] == 4) {
				for (int j = 12; j >= 0; j--) {
					if (cards1[j] == 1)
						return 1;
					else if (cards2[j] == 1)
						return 0;
				}
			}
			else if (cards1[i] == 4)
				return 1;
			else if (cards2[i] == 4)
				return 0;
		}
	case 9:
		for (int i = 12; i >= 0; i--) {
			if (cards1[i] == 1)
				return 1;
			else if (cards2[i] == 1)
				return 0;
		}
	}
}