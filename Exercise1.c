/*
1. Input a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: "one thousand two hundred thirty four" |
|________________________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ex1(int testcase) {
		int c;
		int a[100];
		int count = -1;
		int j;
		while (testcase > 0) {
			count++;
			c = testcase % 10;
			testcase /= 10;
			a[count] = c;
		}
		for (j = count; j >= 0; j--) {
			if (j == 3) {
				switch (a[j]) {
				case 1:
					printf("one thousand ");
					break;
				case 2:
					printf("two thousand ");
					break;
				case 3:
					printf("three thousand ");
					break;
				case 4:
					printf("four thousand ");
					break;
				case 5:
					printf("five thousand ");
					break;
				case 6:
					printf("six thousand ");
					break;
				case 7:
					printf("seven thousand ");
					break;
				case 8:
					printf("eight thousand ");
					break;
				case 9:
					printf("nine thousand ");
					break;
				case 0:
					continue;
				}
			}
			if (j == 2) {
				switch (a[j]) {
				case 1:
					printf("one hundred ");
					break;
				case 2:
					printf("two hundred ");
					break;
				case 3:
					printf("three hundred ");
					break;
				case 4:
					printf("four hundred ");
					break;
				case 5:
					printf("five hundred ");
					break;
				case 6:
					printf("six hundred ");
					break;
				case 7:
					printf("seven hundred ");
					break;
				case 8:
					printf("eight hundred ");
					break;
				case 9:
					printf("nine hundred ");
					break;
				case 0:
					continue;
				}
			}
			if (j == 1 && a[j] != 1) {
				switch (a[j]) {
				case 2:
					printf("twenty ");
					break;
				case 3:
					printf("thirty ");
					break;
				case 4:
					printf("fourty ");
					break;
				case 5:
					printf("fifty ");
					break;
				case 6:
					printf("sixty ");
					break;
				case 7:
					printf("seventy ");
					break;
				case 8:
					printf("eighty ");
					break;
				case 9:
					printf("ninety ");
					break;
				case 0:
					continue;
				}
			}
			if (j == 1 && a[j] == 1) {
				switch (a[j - 1]) {
				case 0:
					printf("ten ");
					break;
				case 1:
					printf("eleven ");
					break;
				case 2:
					printf("twelve ");
					break;
				case 3:
					printf("thirteen ");
					break;
				case 4:
					printf("fourteen ");
					break;
				case 5:
					printf("fifteen ");
					break;
				case 6:
					printf("sixteen ");
					break;
				case 7:
					printf("seventeen ");
					break;
				case 8:
					printf("eighteen ");
					break;
				case 9:
					printf("nineteen ");
					break;
				}
				break;
			}
			if (j == 0) {
				switch (a[j]) {
				case 1:
					printf("one");
					break;
				case 2:
					printf("two");
					break;
				case 3:
					printf("three");
					break;
				case 4:
					printf("four");
					break;
				case 5:
					printf("five");
					break;
				case 6:
					printf("six");
					break;
				case 7:
					printf("seven");
					break;
				case 8:
					printf("eight");
					break;
				case 9:
					printf("nine");
					break;
				case 0:
					continue;
				}
			}
		}
	}


int main(int argc, char* argv[]) {
	int testcase = atoi(argv[1]);

	ex1(testcase);

	return 0;
}
