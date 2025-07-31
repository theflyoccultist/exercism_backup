import math

def len_num(num):
    if num == 0:
        return 1
    return math.floor(math.log10(abs(num))) + 1

def is_armstrong_number(number):
    original = number
    digit_num = len_num(number)
    total = 0

    while number:
        digit = number % 10
        total += digit ** digit_num
        number //= 10
    
    return original == total