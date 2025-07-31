#include "armstrong_numbers.h"
#include <stdbool.h>

int ipow(int base, int exp) {
    int result = 1;
    while (exp) {
        if (exp % 2) result *= base;
        base *= base;
        exp /= 2;
    }
    return result;
}

bool is_armstrong_number(int candidate) {
    int original = candidate;
    int total = 0;
    int digit_num = 0;
    int temp = candidate;

    while (temp) {
        temp /= 10;
        digit_num++;
    }
    if (candidate == 0) digit_num = 1;

    temp = candidate;
    while (temp) {
        int digit = temp % 10;
        total += ipow(digit, digit_num);
        temp /= 10;
    }
    return total == original;
}