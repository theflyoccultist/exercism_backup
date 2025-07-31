def len_num(num):
    if num == 0:
        return 1
    count = 0
    while num:
        num //= 10
        count += 1
    return count


def is_armstrong_number(number):
    original = number
    digit_num = len_num(number)
    total = 0

    while number:
        digit = number % 10
        total += digit ** digit_num
        number //= 10
    
    return original == total