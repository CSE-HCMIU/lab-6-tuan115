/*
1. Input a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: "one thousand two hundred thirty four" |
|________________________________________________|
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void convert(char* num) {
    int len = strlen(num);

    if (len == 0) {
        printf(stderr, "empty string\n");
        return;
    }
    if (len > 4) {
        printf(stderr, "Length more than 4 is not supported\n");
        return;
    }
  
    char* single_digit[] = { "zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine" };

    char* tens_place[] = { "", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };

    char* tens_multiple[] = { "", "", "twenty", "thirty", "forty", "fifty","sixty", "seventy", "eighty", "ninety" };
    char* tens_power[] = { "hundred", "thousand" };
  
    printf("\n%s: ", num);


    if (len == 1) {
        printf("%s\n", single_digit[*num - '0']);
        return;
    }
 
    while (*num != '\0') {
 
        if (len >= 3) {
            if (*num - '0' != 0) {
                printf("%s ", single_digit[*num - '0']);
                printf("%s ", tens_power[len - 3]); 
            }
            --len;
        }
 
        else {

            if (*num == '1') {
                int sum = *num - '0' + *(num + 1) - '0';
                printf("%s\n", tens_place[sum]);
                return;
            }

            else if (*num == '2' && *(num + 1) == '0') {
                printf("twenty\n");
                return;
            }
            else {
                int i = *num - '0';
                printf("%s ", i ? tens_multiple[i] : "");
                ++num;
                if (*num != '0')
                    printf("%s ", single_digit[*num - '0']);
            }
        }
        ++num;
    }
}
int main() {
    convert("9132");
    return 0;
}
