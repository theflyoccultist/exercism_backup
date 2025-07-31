def leap_year(year):
    return year % 4 is 0 if year % 100 is not 0 else year % 400 is 0