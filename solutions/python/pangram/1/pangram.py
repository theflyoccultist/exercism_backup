alpha = "abcdefghijklmnopqrstuvwxyz"

def is_pangram(string):
    string = string.lower()
    for char in alpha:
        count = string.count(char)
        if count < 1:
            return False
    return True