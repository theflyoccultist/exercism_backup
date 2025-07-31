#include "armstrong_numbers.h"
#include <stdbool.h>
#include <math.h>

int len_num(int num) {
    if (num == 0)
        return 1;
    int count = 0;
    while (num) {
        num /= 10;
        count++;
    }
    return count;
}

bool is_armstrong_number(int candidate) {
    int original = candidate;
    int digit_num = len_num(candidate);
    int total = 0;
    while (candidate) {
        int digit = candidate % 10;
        total += pow(digit, digit_num);
        candidate /= 10;
    }
    return (original == total);
}