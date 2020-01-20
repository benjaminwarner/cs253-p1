#include <stdio.h>

int main(int argc, char *argv[]) {
	int upper = 0;
	int lower = 0;
	int vowels = 0;
	int consonants = 0;
	int digits = 0;
	int total = 0;

	int c;
	while ((c = getchar()) != EOF) {
		total++;
		if (c <= '9' && c >= '0') {
			digits++;
			continue;
		} else if (c <= 'Z' && c >= 'A') {
			upper++;
		} else if (c <= 'z' && c >= 'a') {
			lower++;
		}

		if ((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a')) {
			switch(c) {
				case 0x41:
				case 0x61:
				case 0x45:
				case 0x65:
				case 0x49:
				case 0x69:
				case 0x4f:
				case 0x6f:
				case 0x55:
				case 0x75:
				case 0x59:
				case 0x79:
					vowels++;
					break;
				default:
					consonants++;
					break;
			}
		}
	}

	printf("upper-case:%5d\n", upper);
	printf("lower-case:%5d\n", lower);
	printf("vowels:%9d\n", vowels);
	printf("consonants:%5d\n", consonants);
	printf("digits:%9d\n", digits);
	printf("total:%10d\n", total);
}
